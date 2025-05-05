#pragma once
#include "Conexion.h"

namespace SalteñeriaSIS301 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Administrativo
	/// </summary>
	public ref class Administrativo : public System::Windows::Forms::Form
	{
		Conexion^ con;
	public:
		Administrativo(void)
		{

			con = Conexion::ObtenerConexion();
			this->DoubleBuffered = true; // Ayuda a evitar parpadeo
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Administrativo()
		{

			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;





	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::ComboBox^ comboBox1;










	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Administrativo::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18));
			this->label1->Location = System::Drawing::Point(101, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO DE  MEDICOS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(316, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"SISTEMA  DE REGISTRO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DATOS PERSONALES";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"AVATAR";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(152, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"NOMBRE";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(283, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"ESPECIALIDAD";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(30, 222);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"HORARIO";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->button1->Location = System::Drawing::Point(19, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"REGISTRAR EMPLEADO";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Administrativo::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 173);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(155, 172);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(386, 174);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(10, 20);
			this->textBox4->TabIndex = 19;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Administrativo::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(33, 238);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 20;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Gastroenterología", L"Cirugía Gastroenterológica",
					L"Ecografía", L"Coloproctología", L"Gastroclinica", L"Radiología", L"Ecografía", L"Endoscopia", L"Laboratorio clínico"
			});
			this->comboBox1->Location = System::Drawing::Point(275, 172);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 21;
			// 
			// Administrativo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(757, 456);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Administrativo";
			this->Text = L"Administrativo";
			this->Load += gcnew System::EventHandler(this, &Administrativo::Administrativo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Administrativo_Load(System::Object^ sender, System::EventArgs^ e) {
	// Centrar el PictureBox en el formulario
	//pictureBox5->Location = Point(
	//	(this->ClientSize.Width - pictureBox5->Width) / 4,
	//	(this->ClientSize.Height - pictureBox5->Height) / 4
	//);

	//// Mandar al fondo
	//pictureBox5->SendToBack();
	 // Centrar la imagen
	

}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//con->mostrar(dataGridView1);
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombre;
	nombre = Convert::ToString(textBox2->Text);
	if (nombre == "") {
		MessageBox::Show("Esta vacio escriba el nombre del empleado");
	}
	else {
		MessageBox::Show("Se elimino al empleado" + nombre);
	
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//String^ ci;
	//String^ nom;
	//String^ ape;
	//String^ dir;
	//String^ cel;
	//String^ esp;
	//String^ fec;
	//String^ tur;
	//ci = Convert::ToString(textBox2->Text);
	//nom = Convert::ToString(textBox3->Text);
	//ape = Convert::ToString(textBox4->Text);
	//dir = Convert::ToString(textBox5->Text);
	//cel = Convert::ToString(textBox6->Text);
	//esp = Convert::ToString(comboBox1->Text);
	//fec = Convert::ToString(textBox1->Text);
	//tur = Convert::ToString(comboBox2->Text);
	//if (ci == "" || nom == "" || ape == "" || dir == "" || cel == "" || esp == "" || fec == "" || tur == "") {
	//	MessageBox::Show("Esta vacio llene todos los campos");
	//}
	//else {
	//	MessageBox::Show("Se registro al empleado" + nom);
	//}
	//con->insertarEmpleado(ci, nom, ape, dir, cel, esp, fec, tur);
	String^ ci;
	String^ nom;
	String^ ape;
	String^ dir;
	//String^ cel;
	//String^ esp;
	//String^ fec;
	//String^ tur;
	ci = Convert::ToString(textBox2->Text);//avatar
	nom = Convert::ToString(textBox3->Text);
	//ape = Convert::ToString(textBox4->Text);
	ape = Convert::ToString(comboBox1->Text);
	dir = Convert::ToString(textBox5->Text);
	/*
	cel = Convert::ToString(textBox6->Text);
	esp = Convert::ToString(comboBox1->Text);
	fec = Convert::ToString(textBox1->Text);
	tur = Convert::ToString(comboBox2->Text);*/
	if (ci == "" || nom == "" || ape == "" || dir == "") {
		MessageBox::Show("Esta vacio llene todos los campos");
		

	}
	else {
		MessageBox::Show("Se registro al empleado" + nom);
	
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		comboBox1->Text = "";
	}
	con->insertarEmpleado(ci, nom, ape, dir);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ciu;
    ciu = Convert::ToString(textBox4->Text);
	if (ciu == "") {
		MessageBox::Show("Esta vacio escriba el nombre del empleado");
	}
	else {
		MessageBox::Show("Se modifico al empleado"+ciu);
	
	}
}
};

}
