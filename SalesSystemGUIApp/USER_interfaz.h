#include "LoginForm.h"

#pragma once
#include "USER_Recibos.h"

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AlquilEasierModel;
	using namespace AlquilEasierService;

	/// <summary>
	/// Resumen de USER_interfaz
	/// </summary>
	public ref class USER_interfaz : public System::Windows::Forms::Form
	{
	public:
		USER_interfaz(void)
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
		~USER_interfaz()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ToolTip^ toolTip2;



	private: System::Windows::Forms::Button^ bttnLogout;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ bttnSeguroOff;
	private: System::Windows::Forms::Button^ bttnSeguroOn;
	private: System::Windows::Forms::Button^ bttnCocheraOn;
	private: System::Windows::Forms::Button^ bttnAlarmaOFF;
	private: System::Windows::Forms::TextBox^ txtResponsible;
	private: System::Windows::Forms::Label^ label1;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(USER_interfaz::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->bttnLogout = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bttnSeguroOff = (gcnew System::Windows::Forms::Button());
			this->bttnSeguroOn = (gcnew System::Windows::Forms::Button());
			this->bttnCocheraOn = (gcnew System::Windows::Forms::Button());
			this->bttnAlarmaOFF = (gcnew System::Windows::Forms::Button());
			this->txtResponsible = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(70, 135);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 55);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Recibos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &USER_interfaz::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(348, 125);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 74);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Informaci�n del departamento";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// bttnLogout
			// 
			this->bttnLogout->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bttnLogout->Location = System::Drawing::Point(529, 2);
			this->bttnLogout->Margin = System::Windows::Forms::Padding(4);
			this->bttnLogout->Name = L"bttnLogout";
			this->bttnLogout->Size = System::Drawing::Size(110, 28);
			this->bttnLogout->TabIndex = 34;
			this->bttnLogout->Text = L"Cerrar sesi�n";
			this->bttnLogout->UseVisualStyleBackColor = false;
			this->bttnLogout->Click += gcnew System::EventHandler(this, &USER_interfaz::bttnLogout_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(65, 262);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(259, 25);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Control de departamento:";
			// 
			// bttnSeguroOff
			// 
			this->bttnSeguroOff->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnSeguroOff->Location = System::Drawing::Point(348, 435);
			this->bttnSeguroOff->Margin = System::Windows::Forms::Padding(4);
			this->bttnSeguroOff->Name = L"bttnSeguroOff";
			this->bttnSeguroOff->Size = System::Drawing::Size(211, 69);
			this->bttnSeguroOff->TabIndex = 37;
			this->bttnSeguroOff->Text = L"Deshabilitar seguro";
			this->bttnSeguroOff->UseVisualStyleBackColor = true;
			this->bttnSeguroOff->Click += gcnew System::EventHandler(this, &USER_interfaz::bttnSeguroOff_Click);
			// 
			// bttnSeguroOn
			// 
			this->bttnSeguroOn->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnSeguroOn->Location = System::Drawing::Point(348, 337);
			this->bttnSeguroOn->Margin = System::Windows::Forms::Padding(4);
			this->bttnSeguroOn->Name = L"bttnSeguroOn";
			this->bttnSeguroOn->Size = System::Drawing::Size(211, 74);
			this->bttnSeguroOn->TabIndex = 36;
			this->bttnSeguroOn->Text = L"Habilitar seguro";
			this->bttnSeguroOn->UseVisualStyleBackColor = true;
			this->bttnSeguroOn->Click += gcnew System::EventHandler(this, &USER_interfaz::bttnSeguroOn_Click);
			// 
			// bttnCocheraOn
			// 
			this->bttnCocheraOn->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnCocheraOn->Location = System::Drawing::Point(70, 337);
			this->bttnCocheraOn->Margin = System::Windows::Forms::Padding(4);
			this->bttnCocheraOn->Name = L"bttnCocheraOn";
			this->bttnCocheraOn->Size = System::Drawing::Size(235, 74);
			this->bttnCocheraOn->TabIndex = 35;
			this->bttnCocheraOn->Text = L"Habilitar cochera";
			this->bttnCocheraOn->UseVisualStyleBackColor = true;
			this->bttnCocheraOn->Click += gcnew System::EventHandler(this, &USER_interfaz::bttnCocheraOn_Click);
			// 
			// bttnAlarmaOFF
			// 
			this->bttnAlarmaOFF->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnAlarmaOFF->ForeColor = System::Drawing::Color::Red;
			this->bttnAlarmaOFF->Location = System::Drawing::Point(84, 435);
			this->bttnAlarmaOFF->Margin = System::Windows::Forms::Padding(4);
			this->bttnAlarmaOFF->Name = L"bttnAlarmaOFF";
			this->bttnAlarmaOFF->Size = System::Drawing::Size(211, 69);
			this->bttnAlarmaOFF->TabIndex = 39;
			this->bttnAlarmaOFF->Text = L"APAGAR SEGURIDAD";
			this->bttnAlarmaOFF->UseVisualStyleBackColor = true;
			this->bttnAlarmaOFF->Click += gcnew System::EventHandler(this, &USER_interfaz::bttnAlarmaOFF_Click);
			// 
			// txtResponsible
			// 
			this->txtResponsible->BackColor = System::Drawing::SystemColors::Info;
			this->txtResponsible->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtResponsible->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F));
			this->txtResponsible->Location = System::Drawing::Point(204, 57);
			this->txtResponsible->Name = L"txtResponsible";
			this->txtResponsible->Size = System::Drawing::Size(348, 28);
			this->txtResponsible->TabIndex = 41;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 57);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 25);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Bienvenid@";
			this->label1->Click += gcnew System::EventHandler(this, &USER_interfaz::label1_Click);
			// 
			// USER_interfaz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(640, 547);
			this->Controls->Add(this->txtResponsible);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bttnAlarmaOFF);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->bttnSeguroOff);
			this->Controls->Add(this->bttnSeguroOn);
			this->Controls->Add(this->bttnCocheraOn);
			this->Controls->Add(this->bttnLogout);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"USER_interfaz";
			this->Text = L"AlquilEasier - inquilino";
			this->Load += gcnew System::EventHandler(this, &USER_interfaz::USER_interfaz_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void USER_interfaz_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		USER_Recibos^ recibo = gcnew USER_Recibos();
		recibo->FormClosed += gcnew FormClosedEventHandler(this, &USER_interfaz::USER_RecibosClosed);
		recibo->Show();
		this->Hide();
	}
		   // Funci�n para mostrar nuevamente ADMIN_interfaz cuando ApartmentForm se cierra
		   void USER_interfaz::USER_RecibosClosed(System::Object^ sender, FormClosedEventArgs^ e)
		   {
			   this->Show();
		   }
	private: System::Void bttnLogout_Click(System::Object^ sender, System::EventArgs^ e) {

		// Crear una instancia de LoginForm y pasar una referencia a esta forma (this)
		SalesSystemGUIApp::LoginForm^ loginform = gcnew SalesSystemGUIApp::LoginForm(this);

		// Mostrar el formulario de login
		loginform->Show();

		// Cerrar el formulario actual
		this->Close();

	}

		   void ComunicarArduinoCochera(int encendido) {

			   try {
				   String^ result = Service::EnviarOnOff(encendido);

				   String^ resultString = result->ToString();

				   // resultString ES LA VARIABLE RETORNADA POR EL ARDUINO, IMPORTANTE!, VALOR V�LIDO ES != "50\r" 

				   if (resultString->Equals("50\r")) {
					   MessageBox::Show("No se ha logrado iniciar el sistema de cochera.");
				   }
				   else {
					   MessageBox::Show("Se ha activado la cochera, proceda a ingresar por favor");

					   Alarma^ alarmaCochera = gcnew Alarma();
					   alarmaCochera->Cochera = true;
					   // Asignar otros datos de la alarma si es necesario
					   Service::RegistrarAlarma(alarmaCochera);
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Ha ocurrido un problema: " + ex->Message);
			   }

		   }

		   void ComunicarArduinoSeguroOn(int encendido) {

			   try {
				   String^ result = Service::EnviarOnOff(encendido);

				   String^ resultString = result->ToString();

				   // resultString ES LA VARIABLE RETORNADA POR EL ARDUINO, IMPORTANTE!, VALOR V�LIDO ES != "50\r" 

				   if (resultString->Equals("50\r")) {
					   MessageBox::Show("Su vivienda est� asegurada.");
				   }
				   else {
					   MessageBox::Show("No se ha logrado asegurar su vivienda, comprobar sensor.");
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Ha ocurrido un problema: " + ex->Message);
			   }

		   }

		   void ComunicarArduinoSeguroOff(int encendido) {

			   try {
				   String^ result = Service::EnviarOnOff(encendido);

				   String^ resultString = result->ToString();

				   // resultString ES LA VARIABLE RETORNADA POR EL ARDUINO, IMPORTANTE!, VALOR V�LIDO ES != "50\r" 

				   if (resultString->Equals("50\r")) {
					   MessageBox::Show("Seguridad desactivada, puede ingresar a su vivienda.");
				   }
				   else {
					   MessageBox::Show("No se ha logrado desactivar la seguridad, comprobar sensor.");
				   }

			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Ha ocurrido un problema: " + ex->Message);
			   }

		   }

		   void ComunicarArduinoALARMAOFF(int encendido) {

			   try {
				   String^ result = Service::EnviarOnOff(encendido);

				   String^ resultString = result->ToString();

				   // resultString ES LA VARIABLE RETORNADA POR EL ARDUINO, IMPORTANTE!, VALOR V�LIDO ES != "50\

				   if (resultString->Equals("50\r")) {
					   MessageBox::Show("�ALARMA APAGADA, IMPORTANTE VOLVER A ENCENDER!");

					   Alarma^ alarmaIncendioRobo = gcnew Alarma();
					   alarmaIncendioRobo->IncendioRobo = true;
					   // Asignar otros datos de la alarma si es necesario
					   Service::RegistrarAlarma(alarmaIncendioRobo);
				   }
				   else {
					   MessageBox::Show("No se ha logrado desactivar las alarmas, contactar soporte.");
				   }

			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Ha ocurrido un problema: " + ex->Message);
			   }

		   }

	private: System::Void bttnCocheraOn_Click(System::Object^ sender, System::EventArgs^ e) {

		ComunicarArduinoCochera(1);

	}
	private: System::Void bttnSeguroOn_Click(System::Object^ sender, System::EventArgs^ e) {

		ComunicarArduinoSeguroOn(2);

	}
	private: System::Void bttnSeguroOff_Click(System::Object^ sender, System::EventArgs^ e) {

		ComunicarArduinoSeguroOff(3);

	}
	private: System::Void bttnAlarmaOFF_Click(System::Object^ sender, System::EventArgs^ e) {

		ComunicarArduinoALARMAOFF(4);

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
