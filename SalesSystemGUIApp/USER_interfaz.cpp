#include "USER_interfaz.h"
#include "SalesSystemGUIApp.h"

System::Void SalesSystemGUIApp::USER_interfaz::USER_interfaz_Load(System::Object^ sender, System::EventArgs^ e)
{
	txtResponsible->Text = SalesSystemMainForm::Usuario->Name + " " + SalesSystemMainForm::Usuario->LastName;
}
