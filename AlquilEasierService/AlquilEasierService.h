#pragma once

using namespace System;
using namespace AlquilEasierModel;
using namespace System::Collections::Generic;
using namespace System::IO::Ports;

namespace AlquilEasierService {
	public ref class Service
	{
	private:
		//DB DEPARTAMENOS
		static List<Departamento^>^ DepaDB = gcnew List <Departamento^>();

		//CONTROL DE COCHERAAAAAAAAAAAAAA
		static SerialPort^ ArduinoPort;

	public:
		//CRUD DE DEPARTAMENTOS
		static int AddApartment(Departamento^ depa);
		static int ModifyApartment(Departamento^ depa);
		static int DeleteApartment(int depaID);
		static List<Departamento^>^ ConsultaDepa();
		static Departamento^ ConsultaDepaByID(int depaID);

		//CRUD DE USUARIOS
		static int AddUsuario(Usuario^ usuario);
		static List<Usuario^>^ QueryAllUsuarios();
		static Usuario^ ValidateUsuario(String^ username, String^ password);
		static List<Usuario^>^ QueryAllUsuariosbyId(String^ Id);
		static List<Usuario^>^ QueryAllUsuariosbyName(String^ name);

		//CRUD DE DEUDAS
		static int AddDeuda(Deudas^ deuda);
		static int ModifyDeuda(Deudas^ deuda);
		static int DeleteDeuda(int deudaID);
		static List<Deudas^>^ ConsultaDeuda();
		static Deudas^ ConsultaDeudaByID(int deudaID);

		//Metodo para transacciones de estacionamiento (agregar en el model o se hara con la alarma)
		static int RegistrarAlarma(Alarma^ alarma);
		static List<Alarma^>^ QuearyAllAlarma();
		//static List<Alarma^>^ QuearyAllAlarmaByDate(DateTime^ date);
		
		//ACCIONAR SISTEMA DE COCHERA
		static String^ EnviarOnOff(int encendido);
		static void OpenPort();
		static void ClosePort();

		//CRUD DE HORARIO
		static int AddHorario(Personal^ horario);
		static List<Personal^>^ ConsultaHorario();
		static Personal^ ConsultaHorarioPorFecha(int fecha);

		//CRUD DE INQUILINO
		static int AddInquilino(Inquilino^ inquilino);
		static int ModifyInquilino(Inquilino^ inquilino);
		static int DeleteInquilino(int numDep);
		static List<Inquilino^>^ ConsultaInquilino();
		static Inquilino^ ConsultaInquilinoByNumDep(int numDep);




		//CRUD DEL PERSONAL
		static int AddPersonal(Personal^ personal);
		static int ModifyPersonal(Personal^ personal);
		static int DeletePersonal(int personalID);
		static List<Personal^>^ ConsultaPersonal();
		static Personal^ ConsultaPersonalByID(int personalID);



	};
}