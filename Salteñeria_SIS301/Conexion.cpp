#include "Conexion.h"
// Primero, asegúrate de incluir estas bibliotecas al inicio de tu archivo
#include <string>
using namespace System;
using namespace System::Collections::Generic;
using namespace MySql::Data::MySqlClient;
Conexion::Conexion() {}

void Conexion::Conectar() {
    st = gcnew MySqlConnectionStringBuilder();
    st->Server = "localhost";
    st->Database = "laravel11"; 
    st->UserID = "root"; 
    st->Password = ""; 
    cn = gcnew MySqlConnection(st->ToString());
}

void Conexion::mostrar(DataGridView^ dgv, String^ tabla) {
    Conectar();
    String^ consulta = "SELECT * FROM " + tabla;
    MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
    MySqlDataAdapter^ adaptador = gcnew MySqlDataAdapter(comando);
    DataTable^ tablaDatos = gcnew DataTable();
    adaptador->Fill(tablaDatos);
    dgv->DataSource = tablaDatos;
}
//void Conexion::eliminar(String^ tabla, String^ valor) {
//    Conectar();
//    String^ consulta = "DELETE FROM " + tabla + " WHERE nombre = @valor";
//    MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
//    comando->Parameters->AddWithValue("@valor", valor);
//    cn->Open();
//    comando->ExecuteNonQuery();
//    cn->Close();
//}
void Conexion::eliminar(String^ tabla, String^ valor) {
    try {
        // Validar que la tabla sea permitida
        array<String^>^ tablasPermitidas = { "medicos", "reservas", "usuarios","anuncios"}; // <- aquí agregas tus tablas válidas

        bool tablaValida = false;
        for each(String ^ t in tablasPermitidas) {
            if (t->Equals(tabla, StringComparison::OrdinalIgnoreCase)) {
                tablaValida = true;
                break;
            }
        }

        if (!tablaValida) {
            MessageBox::Show("Tabla no permitida.");
            return;
        }

        Conectar();
        cn->Open();
        if (tabla == "medicos") {
            // Obtener el id del registro que se va a eliminar
            String^ obtenerIdQuery = "SELECT id FROM " + tabla + " WHERE nombre = @valor";
            MySqlCommand^ cmdObtenerId = gcnew MySqlCommand(obtenerIdQuery, cn);
            cmdObtenerId->Parameters->AddWithValue("@valor", valor);
            Object^ resultado = cmdObtenerId->ExecuteScalar(); 
        if (resultado == nullptr) {
            MessageBox::Show("No se encontró el registro a eliminar.");
            cn->Close();
            return;
        }
          int idEliminado = Convert::ToInt32(resultado);
          // Eliminar el registro
          String^ consultaEliminar = "DELETE FROM " + tabla + " WHERE id = @id";
          MySqlCommand^ cmdEliminar = gcnew MySqlCommand(consultaEliminar, cn);
          cmdEliminar->Parameters->AddWithValue("@id", idEliminado);
          cmdEliminar->ExecuteNonQuery();

          // Actualizar IDs siguientes
          String^ actualizarIdsQuery = "UPDATE " + tabla + " SET id = id - 1 WHERE id > @id";
          MySqlCommand^ cmdActualizar = gcnew MySqlCommand(actualizarIdsQuery, cn);
          cmdActualizar->Parameters->AddWithValue("@id", idEliminado);
          cmdActualizar->ExecuteNonQuery();

          MessageBox::Show("actualia los id");
          // Reiniciar AUTO_INCREMENT
          String^ resetAutoIncrementQuery = "ALTER TABLE " + tabla + " AUTO_INCREMENT = (SELECT IFNULL(MAX(id), 0) + 1 FROM " + tabla + ")";
          MySqlCommand^ cmdResetAI = gcnew MySqlCommand(resetAutoIncrementQuery, cn);
          cmdResetAI->ExecuteNonQuery();

          MessageBox::Show("Registro eliminado ");
        }
        else if (tabla == "anuncios") {
            // Obtener el id del registro que se va a eliminar
            String^ obtenerIdQuery = "SELECT id FROM " + tabla + " WHERE titulo = @valor";
            MySqlCommand^ cmdObtenerId = gcnew MySqlCommand(obtenerIdQuery, cn);
            cmdObtenerId->Parameters->AddWithValue("@valor", valor);
            Object^ resultado = cmdObtenerId->ExecuteScalar();
            if (resultado == nullptr) {
                MessageBox::Show("No se encontró el registro a eliminar.");
                cn->Close();
                return;
            }
            int idEliminado = Convert::ToInt32(resultado);
            // Eliminar el registro
            String^ consultaEliminar = "DELETE FROM " + tabla + " WHERE id = @id";
            MySqlCommand^ cmdEliminar = gcnew MySqlCommand(consultaEliminar, cn);
            cmdEliminar->Parameters->AddWithValue("@id", idEliminado);
            cmdEliminar->ExecuteNonQuery();
            MessageBox::Show("campaña eliminada");

		}
		else if (tabla == "reservas") {
			// Obtener el id del registro que se va a eliminar
			String^ obtenerIdQuery = "SELECT id FROM " + tabla + " WHERE ci = @valor";
			MySqlCommand^ cmdObtenerId = gcnew MySqlCommand(obtenerIdQuery, cn);
			cmdObtenerId->Parameters->AddWithValue("@valor", valor);
			Object^ resultado = cmdObtenerId->ExecuteScalar();
			if (resultado == nullptr) {
				MessageBox::Show("No se encontró el registro a eliminar.");
				cn->Close();
				return;
			}
			int idEliminado = Convert::ToInt32(resultado);
			// Eliminar el registro
			String^ consultaEliminar = "DELETE FROM " + tabla + " WHERE id = @id";
			MySqlCommand^ cmdEliminar = gcnew MySqlCommand(consultaEliminar, cn);
			cmdEliminar->Parameters->AddWithValue("@id", idEliminado);
			cmdEliminar->ExecuteNonQuery();
			MessageBox::Show("Registro eliminado");
		}
        else {
            MessageBox::Show("Tabla no válida para eliminación.");

        }
    
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al eliminar el registro: " + ex->Message);
    }
    finally {
        if (cn->State == ConnectionState::Open) {
            cn->Close();
        }
    }
}

// Métodos específicos
void Conexion::insertarUsuario(String^ username, String^ password) {
    Conectar();
    String^ consulta = "INSERT INTO Usuario (username, password) VALUES (@username, @password)";
    MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
    comando->Parameters->AddWithValue("@username", username);
    comando->Parameters->AddWithValue("@password", password);
    cn->Open();
    comando->ExecuteNonQuery();
    cn->Close();
}

bool Conexion::buscarUsuario(String^ username, String^ password) {
    Conectar();
    String^ consulta = "SELECT * FROM Usuario WHERE username = @username AND password = @password";
    MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
    comando->Parameters->AddWithValue("@username", username);
    comando->Parameters->AddWithValue("@password", password);

    cn->Open();
    MySqlDataReader^ reader = comando->ExecuteReader();
    bool encontrado = reader->Read();
    reader->Close();
    cn->Close();
    return encontrado;
}

void Conexion::insertarEmpleado(String^ avatar, String^ nombre, String^ especialidad, String^ horario) {
   /* Conectar();
    String^ consulta = "INSERT INTO Empleado (cedula_identidad, nombre, apellido, direccion, celular, especialidad, fecha_inicio, turno) "
        "VALUES (@cedula, @nombre, @apellido, @direccion, @celular, @especialidad, @fecha_inicio, @turno)";
    MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
    comando->Parameters->AddWithValue("@cedula", cedula);
    comando->Parameters->AddWithValue("@nombre", nombre);
    comando->Parameters->AddWithValue("@apellido", apellido);
    comando->Parameters->AddWithValue("@direccion", direccion);
    comando->Parameters->AddWithValue("@celular", celular);
    comando->Parameters->AddWithValue("@especialidad", especialidad);
    comando->Parameters->AddWithValue("@fecha_inicio", fecha_inicio);
    comando->Parameters->AddWithValue("@turno", turno);
    cn->Open();
    comando->ExecuteNonQuery();
    cn->Close();*/
    Conectar();
    String^ created_at;
    String^ updated_at;
    created_at = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");
    updated_at = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");
    String^ consulta = "INSERT INTO medicos (avatar,nombre, especialidad, horario, created_at, updated_at) "
        "VALUES (@avatar, @nombre, @especialidad, @horario, @created_at, @updated_at)";
    MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
    comando->Parameters->AddWithValue("@avatar", avatar);
    comando->Parameters->AddWithValue("@nombre", nombre);
    comando->Parameters->AddWithValue("@especialidad", especialidad);
    comando->Parameters->AddWithValue("@horario", horario);
    comando->Parameters->AddWithValue("@created_at", created_at);
    comando->Parameters->AddWithValue("@updated_at", updated_at);
    cn->Open();
    comando->ExecuteNonQuery();
    cn->Close();
}
void Conexion::insertarpaciente(String^ nombre, String^ apellido, String^ ci, String^ sexo, String^ fecha_nacimiento, String^ direccion, String^ telefono, String^ medico, String^ metodo, String^ fecha, String^ ficha, String^ codigo_deposito, String^ numero_tarjeta, String^ fecha_expiracion, String^ cvv) {
    Conectar();

    String^ created_at = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");
    String^ updated_at = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");

    String^ consulta = "INSERT INTO reservas (nombre, apellido, ci, sexo, fecha_nacimiento, direccion, telefono, medico, metodo, fecha, ficha, codigo_deposito, numero_tarjeta, fecha_expiracion, cvv, created_at, updated_at) "
        "VALUES (@nombre, @apellido, @ci, @sexo, @fecha_nacimiento, @direccion, @telefono, @medico, @metodo, @fecha, @ficha, @codigo_deposito, @numero_tarjeta, @fecha_expiracion, @cvv, @created_at, @updated_at)";

    MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);

    comando->Parameters->AddWithValue("@nombre", nombre);
    comando->Parameters->AddWithValue("@apellido", apellido);
    comando->Parameters->AddWithValue("@ci", ci);
    comando->Parameters->AddWithValue("@sexo", sexo);
    comando->Parameters->AddWithValue("@fecha_nacimiento", fecha_nacimiento);
    comando->Parameters->AddWithValue("@direccion", direccion);
    comando->Parameters->AddWithValue("@telefono", telefono);
    comando->Parameters->AddWithValue("@medico", medico);
    comando->Parameters->AddWithValue("@metodo", metodo);
    comando->Parameters->AddWithValue("@fecha", fecha);
    comando->Parameters->AddWithValue("@ficha", ficha);

    // Manejo de campos según el método de pago
    if (metodo == "efectivo") {
        comando->Parameters->AddWithValue("@codigo_deposito", DBNull::Value);
        comando->Parameters->AddWithValue("@numero_tarjeta", DBNull::Value);
        comando->Parameters->AddWithValue("@fecha_expiracion", DBNull::Value);
        comando->Parameters->AddWithValue("@cvv", DBNull::Value);
    }
    else {
        comando->Parameters->AddWithValue("@codigo_deposito", codigo_deposito);
        comando->Parameters->AddWithValue("@numero_tarjeta", numero_tarjeta);
        comando->Parameters->AddWithValue("@fecha_expiracion", fecha_expiracion);
        comando->Parameters->AddWithValue("@cvv", cvv);
    }

    comando->Parameters->AddWithValue("@created_at", created_at);
    comando->Parameters->AddWithValue("@updated_at", updated_at);

    cn->Open();
    comando->ExecuteNonQuery();
    cn->Close();
}

void Conexion::modificarpaciente(String^ ciu, String^ nombre, String^ apellido, String^ ci, String^ sexo, String^ fecha_nacimiento, String^ direccion, String^ telefono, String^ medico, String^ metodo, String^ fecha, String^ ficha, String^ codigo_deposito, String^ numero_tarjeta, String^ fecha_expiracion, String^ cvv)
{
    try {
        if (String::IsNullOrEmpty(ciu)) {
            MessageBox::Show("Debe proporcionar la cédula del pasiente");
            return;
        }

        Conectar();

        // Verificar si el empleado existe
        String^ verificarConsulta = "SELECT COUNT(*) FROM reservas WHERE ci = @ciu";
        MySqlCommand^ cmdVerificar = gcnew MySqlCommand(verificarConsulta, cn);
        cmdVerificar->Parameters->AddWithValue("@ciu", ciu);
        

        cn->Open();
        String^ existe;
        existe = "";

        int cantidad = Convert::ToInt32(cmdVerificar->ExecuteScalar());
        if (cantidad == 0) {
            MessageBox::Show("No se encontró ningún pasiente con esa CEDULA actual");
            cn->Close();
            return;
        }
        System::Text::StringBuilder^ consultaBuilder = gcnew System::Text::StringBuilder();
        consultaBuilder->Append("UPDATE reservas SET ");

        MySqlCommand^ comando = gcnew MySqlCommand();
        comando->Connection = cn;

        bool primerCampo = true;

        // Verificar y agregar cada campo no vacío
        if (!String::IsNullOrEmpty(nombre)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("nombre = @nunombre");
            comando->Parameters->AddWithValue("@nunombre", nombre);
            primerCampo = false;
        }

        if (!String::IsNullOrEmpty(apellido)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("apellido = @apellido");
            comando->Parameters->AddWithValue("@apellido", apellido);
            primerCampo = false;
        }

        if (!String::IsNullOrEmpty(ci)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("ci = @ci");
            comando->Parameters->AddWithValue("@ci", ci);
            primerCampo = false;
        }

        if (!String::IsNullOrEmpty(sexo)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("sexo = @sexo");
            comando->Parameters->AddWithValue("@sexo", sexo);
            primerCampo = false;
        }
        if (!String::IsNullOrEmpty(fecha_nacimiento)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("fecha_nacimiento = @fecha_nacimiento");
            comando->Parameters->AddWithValue("@fecha_nacimiento", fecha_nacimiento);
            primerCampo = false;
        }
        if (!String::IsNullOrEmpty(direccion)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("direccion = @direccion");
            comando->Parameters->AddWithValue("@direccion", direccion);
            primerCampo = false;
        }
        if (!String::IsNullOrEmpty(telefono)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("telefono = @telefono");
            comando->Parameters->AddWithValue("@telefono", telefono);
            primerCampo = false;
        }
        if (!String::IsNullOrEmpty(medico)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("medico = @medico");
            comando->Parameters->AddWithValue("@medico", medico);
            primerCampo = false;
        }
        if (!String::IsNullOrEmpty(metodo)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("metodo = @metodo");
            comando->Parameters->AddWithValue("@metodo", metodo);
            primerCampo = false;
        }
        if (!String::IsNullOrEmpty(fecha)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("fecha = @fecha");
            comando->Parameters->AddWithValue("@fecha", fecha);
            primerCampo = false;
        }
        if (!String::IsNullOrEmpty(ficha)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("ficha = @ficha");
            comando->Parameters->AddWithValue("@ficha", ficha);
            primerCampo = false;
        }
        if (!String::IsNullOrEmpty(codigo_deposito)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("codigo_deposito = @codigo_deposito");
            comando->Parameters->AddWithValue("@codigo_deposito", codigo_deposito);
            primerCampo = false;
        }
        if (!String::IsNullOrEmpty(numero_tarjeta)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("numero_tarjeta = @numero_tarjeta");
            comando->Parameters->AddWithValue("@numero_tarjeta", numero_tarjeta);
            primerCampo = false;
        }
        // Si no hay campos para actualizar, salir
        if (primerCampo) {
            MessageBox::Show("No se proporcionaron datos para actualizar");
            cn->Close();
            return;
        }

        // Completar la consulta con la condición WHERE
        consultaBuilder->Append(" WHERE ci = @ciu");
        comando->Parameters->AddWithValue("@ciu", ciu);

        // Asignar la consulta completa al comando
        comando->CommandText = consultaBuilder->ToString();

        // Ejecutar la consulta
        comando->ExecuteNonQuery();
        MessageBox::Show("Datos actualizados correctamente");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al actualizar los datos: " + ex->Message);
    }
    finally {
        if (cn->State == ConnectionState::Open) {
            cn->Close();
        }
    }



}

void Conexion::insertarpublicacion(String^ titulo, String^ descripcion, String^ imagen) {
    
    Conectar();
    String^ created_at;
    String^ updated_at;
    created_at = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");
    updated_at = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss");
    String^ consulta = "INSERT INTO anuncios (titulo,descripcion, imagen)"
        "VALUES (@titulo,@descripcion, @imagen)";
    MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
    comando->Parameters->AddWithValue("@titulo", titulo);
    comando->Parameters->AddWithValue("@descripcion", descripcion);
    comando->Parameters->AddWithValue("@imagen", imagen);
    cn->Open();
    comando->ExecuteNonQuery();
    cn->Close();
}

void Conexion::modificarEmpleado(String^ ci,String^ avatar, String^ nombre, String^ especialidad,String^ horario) {
    try {
        if (String::IsNullOrEmpty(ci)) {
            MessageBox::Show("Debe proporcionar la cédula del empleado");
            return;
        }

        Conectar();

        // Verificar si el empleado existe
        String^ verificarConsulta = "SELECT COUNT(*) FROM medicos WHERE nombre = @ci";
        MySqlCommand^ cmdVerificar = gcnew MySqlCommand(verificarConsulta, cn);
        cmdVerificar->Parameters->AddWithValue("@ci", ci);
        MessageBox::Show("persona verificada: "+ci);

        cn->Open();
        MessageBox::Show("no funciona: ");
        String^ existe;
        existe = "";
        MessageBox::Show(" funciona: ");

        int cantidad = Convert::ToInt32(cmdVerificar->ExecuteScalar());
        if (cantidad == 0) {
            MessageBox::Show("No se encontró ningún empleado con ese nombre actual");
            cn->Close();
            return;
        }
      /*  if (existe) {
            MessageBox::Show("No se encontró ningún empleado con esa cédula");
            cn->Close();
            return;
        }*/

        // Crear un StringBuilder para construir la consulta
        System::Text::StringBuilder^ consultaBuilder = gcnew System::Text::StringBuilder();
        consultaBuilder->Append("UPDATE medicos SET ");

        MySqlCommand^ comando = gcnew MySqlCommand();
        comando->Connection = cn;

        bool primerCampo = true;

        // Verificar y agregar cada campo no vacío
        if (!String::IsNullOrEmpty(nombre)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("nombre = @nunombre");
            comando->Parameters->AddWithValue("@nunombre", nombre);
            primerCampo = false;
            MessageBox::Show("persona falla nombre" + nombre);
        }

        if (!String::IsNullOrEmpty(avatar)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("avatar = @avatar");
            comando->Parameters->AddWithValue("@avatar", avatar);
            primerCampo = false;
            MessageBox::Show("persona falla avatar" + avatar);
        }

        if (!String::IsNullOrEmpty(especialidad)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("especialidad = @especialidad");
            comando->Parameters->AddWithValue("@especialidad", especialidad);
            primerCampo = false;
        }

        if (!String::IsNullOrEmpty(horario)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("horario = @horario");
            comando->Parameters->AddWithValue("@horario", horario);
            primerCampo = false;
        }

        // Si no hay campos para actualizar, salir
        if (primerCampo) {
            MessageBox::Show("No se proporcionaron datos para actualizar");
            cn->Close();
            return;
        }

        // Completar la consulta con la condición WHERE
        consultaBuilder->Append(" WHERE nombre = @ci");
        comando->Parameters->AddWithValue("@ci", ci);

        // Asignar la consulta completa al comando
        comando->CommandText = consultaBuilder->ToString();

        // Ejecutar la consulta
        comando->ExecuteNonQuery();
        MessageBox::Show("Datos actualizados correctamente");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al actualizar los datos: " + ex->Message);
    }
    finally {
        if (cn->State == ConnectionState::Open) {
            cn->Close();
        }
    }
}

void Conexion::modificarpublicacion(String^ ti, String^ titulo, String^ descripcion, String^ imagen) {
    try {
        if (String::IsNullOrEmpty(ti)) {
            MessageBox::Show("Debe proporcionar el titulo de la camapña");
            return;
        }
        Conectar();
        String^ verificarConsulta = "SELECT COUNT(*) FROM anuncios WHERE titulo = @ti";
        MySqlCommand^ cmdVerificar = gcnew MySqlCommand(verificarConsulta, cn);
        cmdVerificar->Parameters->AddWithValue("@ti", ti);
        cn->Open();
        String^ existe;
        existe = "";

        int cantidad = Convert::ToInt32(cmdVerificar->ExecuteScalar());
        if (cantidad == 0) {
            MessageBox::Show("No se encontró ninguna capaña con ese titulo");
            cn->Close();
            return;
        }
       
        System::Text::StringBuilder^ consultaBuilder = gcnew System::Text::StringBuilder();
        consultaBuilder->Append("UPDATE anuncios SET ");

        MySqlCommand^ comando = gcnew MySqlCommand();
        comando->Connection = cn;

        bool primerCampo = true;

        // Verificar y agregar cada campo no vacío
        if (!String::IsNullOrEmpty(titulo)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("titulo = @nunombre");
            comando->Parameters->AddWithValue("@nunombre", titulo);
            primerCampo = false;
         
        }

        if (!String::IsNullOrEmpty(descripcion)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("descripcion = @descripcion");
            comando->Parameters->AddWithValue("@descripcion", descripcion);
            primerCampo = false;
        }

        if (!String::IsNullOrEmpty(imagen)) {
            if (!primerCampo) consultaBuilder->Append(", ");
            consultaBuilder->Append("imagen = @imagen");
            comando->Parameters->AddWithValue("@imagen", imagen);
            primerCampo = false;
        }
        // Si no hay campos para actualizar, salir
        if (primerCampo) {
            MessageBox::Show("No se proporcionaron datos para actualizar");
            cn->Close();
            return;
        }

        consultaBuilder->Append(" WHERE titulo = @ti");
        comando->Parameters->AddWithValue("@ti", ti);

        comando->CommandText = consultaBuilder->ToString();

        comando->ExecuteNonQuery();
        MessageBox::Show("Datos actualizados correctamente");
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al actualizar los datos: " + ex->Message);
    }
    finally {
        if (cn->State == ConnectionState::Open) {
            cn->Close();
        }
    }
}


void Conexion::insertarProducto(String^ nombre, String^ descripcion, double precio, String^ imagen) {
    Conectar();
    String^ consulta = "INSERT INTO Producto (nombre_producto, descripcion_producto, precio_producto, imagen) "
        "VALUES (@nombre, @descripcion, @precio, @imagen)";
    MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
    comando->Parameters->AddWithValue("@nombre", nombre);
    comando->Parameters->AddWithValue("@descripcion", descripcion);
    comando->Parameters->AddWithValue("@precio", precio);
    comando->Parameters->AddWithValue("@imagen", imagen);
    cn->Open();
    comando->ExecuteNonQuery();
    cn->Close();
}


void Conexion::modificarProducto(String^ id, String^ nombre, String^ descripcion, double precio)
{
	Conectar();
	String^ consulta = "UPDATE Producto SET nombre_producto = @nombre, descripcion_producto = @descripcion, precio_producto = @precio WHERE id_producto = @id";
	MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
	comando->Parameters->AddWithValue("@id", id);
	comando->Parameters->AddWithValue("@nombre", nombre);
	comando->Parameters->AddWithValue("@descripcion", descripcion);
	comando->Parameters->AddWithValue("@precio", precio);
	cn->Open();
	comando->ExecuteNonQuery();
	cn->Close();
}

void Conexion::insertarMobiliario(String^ nombre, int cantidad, String^ descripcion, String^ departamento_id)
{
    Conectar();
	String^ consulta = "INSERT INTO Mobiliario (nombre_mobiliario, cantidad, descripcion, departamento_id) "
		"VALUES (@nombre, @cantidad, @descripcion, @departamento_id)";
	MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
	comando->Parameters->AddWithValue("@nombre", nombre);
	comando->Parameters->AddWithValue("@cantidad", cantidad);
	comando->Parameters->AddWithValue("@descripcion", descripcion);
	comando->Parameters->AddWithValue("@departamento_id", departamento_id);
	cn->Open();
	comando->ExecuteNonQuery();
	cn->Close();
}

void Conexion::insertarIngredientes(String^ nombre, int cantidad, String^ tipo, String^ departamento_id)
{
	Conectar();
	String^ consulta = "INSERT INTO Ingredientes (nombre_ingrediente, cantidad, tipo, departamento_id) "
		"VALUES (@nombre, @cantidad, @tipo, @departamento_id)";
	MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
	comando->Parameters->AddWithValue("@nombre", nombre);
	comando->Parameters->AddWithValue("@cantidad", cantidad);
	comando->Parameters->AddWithValue("@tipo", tipo);
	comando->Parameters->AddWithValue("@departamento_id", departamento_id);
	cn->Open();
	comando->ExecuteNonQuery();
	cn->Close();

}

void Conexion::insertarUtensilios(String^ nombre, int cantidad, String^ descripcion, String^ departamento_id)
{
	Conectar();
	String^ consulta = "INSERT INTO Utensilios (nombre_utensilio, cantidad, descripcion, departamento_id) "
		"VALUES (@nombre, @cantidad, @descripcion, @departamento_id)";
	MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
	comando->Parameters->AddWithValue("@nombre", nombre);
	comando->Parameters->AddWithValue("@cantidad", cantidad);
	comando->Parameters->AddWithValue("@descripcion", descripcion);
	comando->Parameters->AddWithValue("@departamento_id", departamento_id);
	cn->Open();
	comando->ExecuteNonQuery();
	cn->Close();

}

void Conexion::insertarDepartamento(String^ nombre, String^ descripcion)
{
	Conectar();
	String^ consulta = "INSERT INTO Departamento (nombre_departamento, descripcion) "
		"VALUES (@nombre, @descripcion)";
	MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);

	comando->Parameters->AddWithValue("@nombre", nombre);
	comando->Parameters->AddWithValue("@descripcion", descripcion);
	cn->Open();
	comando->ExecuteNonQuery();
	cn->Close();
}
//void Conexion::mostrarmedicos(ComboBox^ dgv, String^ tabla) {
//    Conectar();
//    String^ consulta = "SELECT nombre FROM " + tabla;
//    MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
//    MySqlDataAdapter^ adaptador = gcnew MySqlDataAdapter(comando);
//    DataTable^ tablaDatos = gcnew DataTable();
//    adaptador->Fill(tablaDatos);
//    dgv->DataSource = tablaDatos;
//}
void Conexion::mostrarmedicos(ComboBox^ combo, String^ tabla) {
    try {
        Conectar(); // Asegúrate de que esta función establezca la conexión 'cn'
        String^ consulta = "SELECT nombre FROM " + tabla;
        MySqlCommand^ comando = gcnew MySqlCommand(consulta, cn);
        MySqlDataAdapter^ adaptador = gcnew MySqlDataAdapter(comando);
        DataTable^ tablaDatos = gcnew DataTable();
        adaptador->Fill(tablaDatos);

        combo->DataSource = tablaDatos;
        combo->DisplayMember = "nombre"; // Mostrar la columna 'nombre'
        combo->ValueMember = "nombre";   // Opcional: usar 'nombre' como valor también

    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al cargar médicos: " + ex->Message);
    }
}
