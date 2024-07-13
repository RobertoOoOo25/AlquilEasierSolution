#pragma once
#include "ADMIN_inquilino.h"
#include "ApartmentForm.h"
#include "PersonalForm.h"
#include "LoginForm.h"
#include "CrudPersonal.h"

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ADMIN_interfaz
	/// </summary>
	public ref class ADMIN_interfaz : public System::Windows::Forms::Form
	{
	public:
		ADMIN_interfaz(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ADMIN_interfaz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ bttnLogout;
	private: System::Windows::Forms::TextBox^ txtResponsible;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ADMIN_interfaz::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->bttnLogout = (gcnew System::Windows::Forms::Button());
			this->txtResponsible = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 39);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenid@";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 85);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(248, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�Qu� desea administrar\?";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(145, 176);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(239, 65);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Inquilino";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ADMIN_interfaz::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(145, 283);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(239, 65);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Personal";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ADMIN_interfaz::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(145, 385);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(239, 65);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Departamento";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ADMIN_interfaz::button3_Click);
			// 
			// bttnLogout
			// 
			this->bttnLogout->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bttnLogout->Location = System::Drawing::Point(416, 2);
			this->bttnLogout->Margin = System::Windows::Forms::Padding(4);
			this->bttnLogout->Name = L"bttnLogout";
			this->bttnLogout->Size = System::Drawing::Size(110, 28);
			this->bttnLogout->TabIndex = 30;
			this->bttnLogout->Text = L"Cerrar sesi�n";
			this->bttnLogout->UseVisualStyleBackColor = false;
			this->bttnLogout->Click += gcnew System::EventHandler(this, &ADMIN_interfaz::bttnLogout_Click);
			// 
			// txtResponsible
			// 
			this->txtResponsible->BackColor = System::Drawing::SystemColors::Info;
			this->txtResponsible->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtResponsible->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F));
			this->txtResponsible->Location = System::Drawing::Point(177, 39);
			this->txtResponsible->Name = L"txtResponsible";
			this->txtResponsible->Size = System::Drawing::Size(348, 28);
			this->txtResponsible->TabIndex = 31;
			this->txtResponsible->TextChanged += gcnew System::EventHandler(this, &ADMIN_interfaz::textBox1_TextChanged);
			// 
			// ADMIN_interfaz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(527, 516);
			this->Controls->Add(this->txtResponsible);
			this->Controls->Add(this->bttnLogout);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ADMIN_interfaz";
			this->Text = L"AlquilEasier - Administrador";
			this->Load += gcnew System::EventHandler(this, &ADMIN_interfaz::ADMIN_interfaz_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ADMIN_inquilino^ inquilino = gcnew ADMIN_inquilino();
		inquilino->FormClosed += gcnew FormClosedEventHandler(this, &ADMIN_interfaz::ADMIN_inquilinoClosed);
		inquilino->Show();
		this->Hide();
	}

		   // Funci�n para mostrar nuevamente ADMIN_interfaz cuando ApartmentForm se cierra
		   void ADMIN_interfaz::ADMIN_inquilinoClosed(System::Object^ sender, FormClosedEventArgs^ e)
		   {
			   this->Show();
		   }


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		ApartmentForm^ apartmentForm = gcnew ApartmentForm();
		apartmentForm->FormClosed += gcnew FormClosedEventHandler(this, &ADMIN_interfaz::ApartmentFormClosed);
		apartmentForm->Show();
		this->Hide();
	}

		   // Funci�n para mostrar nuevamente ADMIN_interfaz cuando ApartmentForm se cierra
		   void ADMIN_interfaz::ApartmentFormClosed(System::Object^ sender, FormClosedEventArgs^ e)
		   {
			   this->Show();
		   }

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		CrudPersonal^ crudpersonal = gcnew CrudPersonal();
		crudpersonal->FormClosed += gcnew FormClosedEventHandler(this, &ADMIN_interfaz::ApartmentFormClosed);
		crudpersonal->Show();
		this->Hide();

	}

	private: System::Void bttnLogout_Click(System::Object^ sender, System::EventArgs^ e) {

		// Crear una instancia de LoginForm y pasar una referencia a esta forma (this)
		SalesSystemGUIApp::LoginForm^ loginform = gcnew SalesSystemGUIApp::LoginForm(this);

		// Mostrar el formulario de login
		loginform->Show();

		// Cerrar el formulario actual
		this->Close();

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ADMIN_interfaz_Load(System::Object^ sender, System::EventArgs^ e);
	};
}

