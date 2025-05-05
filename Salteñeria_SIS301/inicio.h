#pragma once
#include <msclr/marshal_cppstd.h> // Para convertir String^ a std::string
#include "Conexion.h"
#include "Administrativo.h"
#include "FormuAdmi.h"

namespace SalteñeriaSIS301 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;

	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Data::SqlTypes;



	/// <summary>
	/// Resumen de inicio
	/// </summary>
	public ref class inicio : public System::Windows::Forms::Form
	{

		Administrativo^ inici;
		FormuAdmi^ formu;
		Conexion^ con;
	private: System::Windows::Forms::PictureBox^ eyeIcon;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

		   bool showPassword = false; // Variable para gestionar la visibilidad de la contraseña


	public:
		inicio(void)
		{
			InitializeComponent();
			//creando la instancia
			formu = gcnew FormuAdmi();
			inici = gcnew Administrativo();
			con = Conexion::ObtenerConexion();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ userIcon;
	private: System::Windows::Forms::PictureBox^ passwordIcon;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(inicio::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->userIcon = (gcnew System::Windows::Forms::PictureBox());
			this->passwordIcon = (gcnew System::Windows::Forms::PictureBox());
			this->eyeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->passwordIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eyeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->textBox1->Location = System::Drawing::Point(494, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 25);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &inicio::textBox1_TextChanged_1);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox2->Location = System::Drawing::Point(494, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 25);
			this->textBox2->TabIndex = 8;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(406, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 19);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(383, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Contraseña:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18));
			this->label3->ForeColor = System::Drawing::Color::Navy;
			this->label3->Location = System::Drawing::Point(527, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 32);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Iniciar Sesión";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(494, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 30);
			this->button1->TabIndex = 5;
			this->button1->Text = L"INGRESAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &inicio::button1_Click);
			// 
			// userIcon
			// 
			this->userIcon->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->userIcon->BackColor = System::Drawing::Color::Transparent;
			this->userIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"userIcon.Image")));
			this->userIcon->Location = System::Drawing::Point(337, 63);
			this->userIcon->Name = L"userIcon";
			this->userIcon->Size = System::Drawing::Size(45, 42);
			this->userIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->userIcon->TabIndex = 10;
			this->userIcon->TabStop = false;
			// 
			// passwordIcon
			// 
			this->passwordIcon->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->passwordIcon->BackColor = System::Drawing::Color::Transparent;
			this->passwordIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"passwordIcon.Image")));
			this->passwordIcon->Location = System::Drawing::Point(337, 114);
			this->passwordIcon->Name = L"passwordIcon";
			this->passwordIcon->Size = System::Drawing::Size(38, 41);
			this->passwordIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->passwordIcon->TabIndex = 11;
			this->passwordIcon->TabStop = false;
			// 
			// eyeIcon
			// 
			this->eyeIcon->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->eyeIcon->BackColor = System::Drawing::Color::WhiteSmoke;
			this->eyeIcon->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eyeIcon.ErrorImage")));
			this->eyeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"eyeIcon.Image")));
			this->eyeIcon->Location = System::Drawing::Point(695, 133);
			this->eyeIcon->Name = L"eyeIcon";
			this->eyeIcon->Size = System::Drawing::Size(19, 19);
			this->eyeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->eyeIcon->TabIndex = 12;
			this->eyeIcon->TabStop = false;
			this->eyeIcon->Click += gcnew System::EventHandler(this, &inicio::eyeIcon_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(341, 378);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(605, 226);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(153, 155);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(770, 385);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->eyeIcon);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->userIcon);
			this->Controls->Add(this->passwordIcon);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"INICIAR SECION";
			this->TransparencyKey = System::Drawing::Color::Red;
			this->Load += gcnew System::EventHandler(this, &inicio::inicio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->passwordIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->eyeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre;
		String^ contrase;
		nombre = Convert::ToString(textBox1->Text);
		contrase = Convert::ToString(textBox2->Text);
	
		if (con->buscarUsuario(nombre, contrase)) {
			MessageBox::Show("Bienvenido Administrador " + nombre);
			//inici->Show();
			formu->Show();

			this->Hide();
		}
		else {
			MessageBox::Show("Usuario o contraseña incorrecta");
			textBox1->Text = "";
			textBox2->Text = "";
			this->textBox1->BackColor = System::Drawing::Color::LightCoral;
			this->textBox2->BackColor = System::Drawing::Color::LightCoral;
			this->eyeIcon->BackColor = System::Drawing::Color::LightCoral;
		}
		//inici->ShowDialog();
		//inici->Show();
		//this->Close();
		//this->Hide();
		//textBox1->Text = "Lucas";
		//con->mostrar(dataGridView1);

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void inicio_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Opacity = 0;
		System::Windows::Forms::Timer^ timer = gcnew Timer();
		timer->Interval = 30; // Tiempo en milisegundos
		timer->Tick += gcnew EventHandler(this, &inicio::Timer_Tick); // Vinculamos el evento a un método
		timer->Start();
	}

		   // Método manejador para el evento Timer
	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->Opacity < 1.0) {
			this->Opacity += 0.05;
		}
		else {
			Timer^ timer = safe_cast<Timer^>(sender);
			timer->Stop();
		}
	}
	private:System::Void eyeIcon_Click(System::Object^ sender, System::EventArgs^ e) {
		// Alterna entre mostrar y ocultar la contraseña
		showPassword = !showPassword;
		this->textBox2->UseSystemPasswordChar = !showPassword;
		this->eyeIcon->BackColor = showPassword ? System::Drawing::Color::LightGray : System::Drawing::Color::WhiteSmoke;
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
