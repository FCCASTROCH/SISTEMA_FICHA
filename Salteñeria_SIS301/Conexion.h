#pragma once

using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms;
using namespace System::Data;

ref class Conexion
{
private:
    static MySqlConnection^ cn; // Objeto de conexión
    static MySqlConnectionStringBuilder^ st; // Cadena de conexión
    static Conexion^ instancia;
    Conexion(); // Constructor privado

public:
    // Método estático para obtener la única instancia de Conexion
    static Conexion^ ObtenerConexion() {
        if (instancia == nullptr) {
            instancia = gcnew Conexion(); // Si no hay instancia, se crea una nueva
        }
        return instancia; // Si ya hay una instancia, se retorna
    }

    // Métodos generales
    void mostrar(DataGridView^ dgv, String^ tabla);
    //void mostrarpublicacion(DataGridView^ dgv, String^ tabla);
    void eliminar(String^ tabla, String^ valor);

    // Métodos específicos
    void insertarUsuario(String^ username, String^ password);
    bool buscarUsuario(String^ username, String^ password);
    //medicos
    void insertarEmpleado(String^ avatar, String^ nombre, String^ especialidad, String^ horario);
    void insertarpublicacion(String^ avatar, String^ nombre, String^ especialidad);
    void modificarEmpleado(String^ ci,String^avatar, String^ nombre, String^ especialidad, String^ horario);
   void  modificarpublicacion(String^ ci, String^ avatar, String^ nombre, String^ especialidad);
    void insertarProducto(String^ nombre, String^ descripcion, double precio, String^ imagen);
    void modificarProducto(String^ id, String^ nombre, String^ descripcion, double precio);
    void insertarpaciente(String^ nombre, String^ apellido, String^ ci, String^ sexo, String^ fecha_nacimiento, String^ direccion, String^ telefono, String^ medico, String^ metodo, String^ fecha, String^ ficha, String^ codigo_deposito, String^ numero_tarjeta, String^ fecha_expiracion, String^ cvv);
    void modificarpaciente(String ^ciu,String^ nombre, String^ apellido, String^ ci, String^ sexo, String^ fecha_nacimiento, String^ direccion, String^ telefono, String^ medico, String^ metodo, String^ fecha, String^ ficha, String^ codigo_deposito, String^ numero_tarjeta, String^ fecha_expiracion, String^ cvv);

    void insertarMobiliario(String^ nombre, int cantidad, String^ descripcion, String^ departamento_id);
    void insertarIngredientes(String^ nombre, int cantidad, String^ tipo, String^ departamento_id);
    void insertarUtensilios(String^ nombre, int cantidad, String^ descripcion, String^ departamento_id);
    void insertarDepartamento(String^ nombre, String^ descripcion);
    void mostrarmedicos(ComboBox^ dgv, String^ tabla);
protected:
    void Conectar(); // Método protegido para conectar a la base de datos
};
