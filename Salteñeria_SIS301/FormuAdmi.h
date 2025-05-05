#pragma once
#include "Conexion.h"
#include "inventario.h"
#include "inventario1.h"
#include "inventario2.h"
#include "inventario3.h"
#include "Administrativo.h"
#include "Administrativo1.h"
#include "Administrativo2.h"
#include "Administrativo3.h"
#include "Productos.h"
#include "Producto1.h"
#include "Producto2.h"
#include "ThemeManager.h"
namespace SalteñeriaSIS301 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormuAdmi
	/// </summary>
	public ref class FormuAdmi : public System::Windows::Forms::Form
	{
	public:
		Administrativo^ adm;
		Administrativo1^ adm1;
		Administrativo2^ adm2;
		Administrativo3^ adm3;
		inventario1^ inv1;
		inventario2^ inv2;
		inventario3^ inv3;
		Productos^ pro;
		Producto1^ pro1;
		Producto2^ pro2;
		ThemeManager^ thm;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	public:
		inventario^ inv;
		FormuAdmi(void)
		{

			adm = gcnew Administrativo();
			inv = gcnew inventario();
			inv1 = gcnew inventario1();
			inv2 = gcnew inventario2();
			inv3 = gcnew inventario3();
			adm1 = gcnew Administrativo1();
			adm2 = gcnew Administrativo2();
			adm3 = gcnew Administrativo3();
			pro = gcnew Productos();
			pro1 = gcnew Producto1();
			pro2 = gcnew Producto2();
			thm = gcnew ThemeManager();
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormuAdmi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormuAdmi::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(214, 657);
			this->panel1->TabIndex = 2;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button16);
			this->panel6->Controls->Add(this->button15);
			this->panel6->Controls->Add(this->button14);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 502);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(214, 88);
			this->panel6->TabIndex = 6;
			this->panel6->Visible = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button16->Dock = System::Windows::Forms::DockStyle::Top;
			this->button16->Location = System::Drawing::Point(0, 46);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(214, 33);
			this->button16->TabIndex = 2;
			this->button16->Text = L"Eliminar Campaña";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &FormuAdmi::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button15->Dock = System::Windows::Forms::DockStyle::Top;
			this->button15->Location = System::Drawing::Point(0, 23);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(214, 23);
			this->button15->TabIndex = 1;
			this->button15->Text = L"Modificar datos de la campaña";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &FormuAdmi::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button14->Dock = System::Windows::Forms::DockStyle::Top;
			this->button14->Location = System::Drawing::Point(0, 0);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(214, 23);
			this->button14->TabIndex = 0;
			this->button14->Text = L"Agregar Campañas";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &FormuAdmi::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->button13->Dock = System::Windows::Forms::DockStyle::Top;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button13->Location = System::Drawing::Point(0, 444);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(214, 58);
			this->button13->TabIndex = 5;
			this->button13->Text = L"GESTIONAR CAMPAÑAS";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &FormuAdmi::button13_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button12);
			this->panel5->Controls->Add(this->button11);
			this->panel5->Controls->Add(this->button10);
			this->panel5->Controls->Add(this->button9);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 346);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(214, 98);
			this->panel5->TabIndex = 2;
			this->panel5->Visible = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button12->Dock = System::Windows::Forms::DockStyle::Top;
			this->button12->Location = System::Drawing::Point(0, 69);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(214, 23);
			this->button12->TabIndex = 3;
			this->button12->Text = L"Mostrar Medicos";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &FormuAdmi::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button11->Dock = System::Windows::Forms::DockStyle::Top;
			this->button11->Location = System::Drawing::Point(0, 46);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(214, 23);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Eliminar Medico";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &FormuAdmi::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button10->Dock = System::Windows::Forms::DockStyle::Top;
			this->button10->Location = System::Drawing::Point(0, 23);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(214, 23);
			this->button10->TabIndex = 1;
			this->button10->Text = L"Modificar datos Medico";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &FormuAdmi::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button9->Dock = System::Windows::Forms::DockStyle::Top;
			this->button9->Location = System::Drawing::Point(0, 0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(214, 23);
			this->button9->TabIndex = 0;
			this->button9->Text = L"Agregar Medico";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &FormuAdmi::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->button8->Dock = System::Windows::Forms::DockStyle::Top;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->Location = System::Drawing::Point(0, 296);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(214, 50);
			this->button8->TabIndex = 4;
			this->button8->Text = L"GESTIONAR MEDICOS";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &FormuAdmi::button8_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 198);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(214, 98);
			this->panel4->TabIndex = 1;
			this->panel4->Visible = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button7->Dock = System::Windows::Forms::DockStyle::Top;
			this->button7->Location = System::Drawing::Point(0, 69);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(214, 23);
			this->button7->TabIndex = 3;
			this->button7->Text = L"MOSTRAR PACIENTE";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &FormuAdmi::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->Location = System::Drawing::Point(0, 46);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(214, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"ELIMINAR PACIENTE";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &FormuAdmi::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->Location = System::Drawing::Point(0, 23);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(214, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"MODIFICAR PACIENTE";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FormuAdmi::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->Location = System::Drawing::Point(0, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(214, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"AGREGAR PACIENTE";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FormuAdmi::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(0, 133);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(214, 65);
			this->button3->TabIndex = 4;
			this->button3->Text = L"GESTIONAR PASCIENTE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormuAdmi::button3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(214, 133);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormuAdmi::panel2_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(211, 127);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel3->Controls->Add(this->panel12);
			this->panel3->Controls->Add(this->panel10);
			this->panel3->Controls->Add(this->panel9);
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(214, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(846, 59);
			this->panel3->TabIndex = 3;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label3);
			this->panel12->Controls->Add(this->pictureBox6);
			this->panel12->Controls->Add(this->pictureBox2);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel12->Location = System::Drawing::Point(0, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(518, 59);
			this->panel12->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(116, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(455, 59);
			this->label3->TabIndex = 5;
			this->label3->Text = L"HOSPITAL GASTROENTEROLOGICO BOLIVIANO-JAPONES";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 8);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &FormuAdmi::pictureBox2_Click);
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->pictureBox3);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel10->Location = System::Drawing::Point(518, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(105, 59);
			this->panel10->TabIndex = 4;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(59, 10);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 43);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &FormuAdmi::pictureBox3_Click);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->comboBox1);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel9->Location = System::Drawing::Point(623, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(147, 59);
			this->panel9->TabIndex = 3;
			this->panel9->Visible = false;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormuAdmi::panel9_Paint);
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Analogico", L"Triadico", L"monocromatico", L"nuevo" });
			this->comboBox1->Location = System::Drawing::Point(16, 22);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->pictureBox4);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel8->Location = System::Drawing::Point(770, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(76, 59);
			this->panel8->TabIndex = 1;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(32, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(44, 59);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &FormuAdmi::pictureBox4_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->panel7->Controls->Add(this->pictureBox5);
			this->panel7->Controls->Add(this->panel11);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel7->Location = System::Drawing::Point(214, 59);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(846, 598);
			this->panel7->TabIndex = 9;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FormuAdmi::panel7_Paint_1);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(226, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(380, 373);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// panel11
			// 
			this->panel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->panel11->Controls->Add(this->label1);
			this->panel11->Controls->Add(this->label2);
			this->panel11->Location = System::Drawing::Point(267, 271);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(342, 298);
			this->panel11->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-11, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(342, 131);
			this->label1->TabIndex = 1;
			this->label1->Text = L"00:00:00";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-8, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(342, 83);
			this->label2->TabIndex = 2;
			this->label2->Text = L"--/--/--";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &FormuAdmi::timer1_Tick);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(61, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(65, 59);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// FormuAdmi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Blue;
			this->ClientSize = System::Drawing::Size(1060, 657);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"FormuAdmi";
			this->Text = L"FormuAdmi";
			this->panel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		inv->Show();
		this->Hide();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		adm->Show();
		this->Hide();
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Cambiar el tema
		if (panel9->Visible == false) {
			panel9->Visible = true;
		}
		else {
			panel9->Visible = false;
			String^ themeName; //
			themeName = Convert::ToString(comboBox1->SelectedItem); // Obtiene el tema seleccionado
			Panel^ botonesPanel = panel1; // Ajusta con el nombre de tu panel de botones
			//Button^ botonesPanel;
			Panel^ iconosPanel = panel3;  // Ajusta con el nombre de tu panel de iconos
			Panel^ contenidoPanel = panel7; // Ajusta con el nombre del panel de contenido
		
			Panel^ contenidoPanel1 = panel4;
			Panel^ contenidoPanel2 = panel5;
			Panel^ contenidoPanel3 = panel6;

			thm->ApplyTheme(this, themeName, botonesPanel, iconosPanel, contenidoPanel, contenidoPanel1, contenidoPanel2, contenidoPanel3);

			// Carga un formular
			//thm->ApplyTheme(this, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(adm, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(inv, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(inv1, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(inv2, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(inv3, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(adm1, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(adm2, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(adm3, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(pro, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(pro1, themeName, botonesPanel, iconosPanel, contenidoPanel);
			//thm->ApplyTheme(this, themeName); // Aplica el tema seleccionado
			//aplica a las ventanas
			thm->ApplyThem(adm, themeName);
			thm->ApplyThem(inv, themeName);
			thm->ApplyThem(inv1, themeName);
			thm->ApplyThem(inv2, themeName);
			thm->ApplyThem(inv3, themeName);
			thm->ApplyThem(adm1, themeName);
			thm->ApplyThem(adm2, themeName);
			thm->ApplyThem(adm3, themeName);
			thm->ApplyThem(pro,  themeName);
			thm->ApplyThem(pro1, themeName);
			thm->ApplyThem(pro2, themeName);
		}
	


}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel4->Visible == false) {
		panel4->Visible = true;

	}
	else {
		panel4->Visible = false;
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel5->Visible == false) {
		panel5->Visible = true;
		
	}
	else {
		panel5->Visible = false;
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (panel6->Visible == false) {
		panel6->Visible = true;
	}
	else {
		panel6->Visible = false;
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormHijo(pro1);
	
}

	   private: Form^ Activo = nullptr;
	   private :void AbrirFormHijo(Form^ Hijo) {
		   if (Activo != nullptr) 
			   Activo->Hide();
		   Activo = Hijo;
		   Hijo->TopLevel = false;
		   Hijo->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		   Hijo->Dock = DockStyle::Fill;
		   panel7->Controls->Add(Hijo);
		   panel7->Tag = Hijo;
		   Hijo->BringToFront();
		   Hijo->Show();
	   }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    AbrirFormHijo(inv);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormHijo(adm);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormHijo(inv1);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormHijo(inv2);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormHijo(inv3);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormHijo(adm1);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormHijo(adm2);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormHijo(adm3);
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormHijo(pro);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	AbrirFormHijo(pro2);
}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	//mostar el menu inicio
	pro->Hide();
	pro1->Hide();
	pro2->Hide();
	adm->Hide();
	adm1->Hide();
	adm2->Hide();
	adm3->Hide();
	inv->Hide();
	inv1->Hide();
	inv2->Hide();
	inv3->Hide();
}
private: System::Void panel7_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	timer1->Interval = 1000;
	timer1->Start();
	//label2->Text = DateTime::Now.ToString("dd/MM/yyyy");
	label2->Text = DateTime::Now.ToLongDateString();

}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = DateTime::Now.ToString("hh:mm:ss tt");
	
}
};
}
