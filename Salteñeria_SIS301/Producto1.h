#pragma once
#include "Conexion.h"
namespace Salte�eriaSIS301 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Drawing::Imaging;
	/// <summary>
	/// Resumen de Producto1
	/// </summary>
	public ref class Producto1 : public System::Windows::Forms::Form
	{
		Conexion^ cam;
		String^ selectedImagePath;
	public:
		Producto1(void)
		{
			cam = Conexion::ObtenerConexion();
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Producto1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox4;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;







	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Producto1::typeid));
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(131, 354);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(373, 20);
			this->textBox4->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(128, 338);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(272, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"COLOCA EL TITULO DE LA CAMPA�A PARA EDITAR";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(131, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"MODIFICAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Producto1::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 155);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(373, 171);
			this->textBox3->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(120, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(373, 20);
			this->textBox2->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(373, 20);
			this->textBox1->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(117, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"DESCRIPCION DE LA CAMPA�A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(117, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"IMAGEN";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(117, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"TITULO DE LA CAMPA�A";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(597, 61);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(164, 164);
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(639, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 25;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Producto1::button2_Click);
			// 
			// Producto1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(773, 495);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Producto1";
			this->Text = L"Producto1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ti;
		String^ titulo;
		String^ descripcion;
		String^ imagen;
		ti = Convert::ToString(textBox4->Text);
		titulo = Convert::ToString(textBox1->Text);
		descripcion = Convert::ToString(textBox2->Text);
		imagen = Convert::ToString(textBox3->Text);
		if (selectedImagePath == nullptr || selectedImagePath->Length == 0) {
			MessageBox::Show("Primero seleccione una imagen.");
			return;
		}

		String^ fileName = Path::GetFileName(selectedImagePath);
		String^ destinationPath = Path::Combine("C:/xampp/htdocs/fichashospita/public/images", fileName);
		File::Copy(selectedImagePath, destinationPath, true); // Copia la imagen al directorio deseado

		

		MessageBox::Show("Se publico exitosamente");
		cam->modificarpublicacion(ti,titulo,descripcion, fileName);
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Image Files|*.jpg;*.jpeg;*.png";
	openFileDialog->Title = "Select an Image File";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		selectedImagePath = openFileDialog->FileName;
		pictureBox1->Image = Image::FromFile(selectedImagePath);
		pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
	}
	else
	{
		MessageBox::Show("No image selected.");
	}
}
};
}
