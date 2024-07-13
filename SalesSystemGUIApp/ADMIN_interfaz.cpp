#include "ADMIN_interfaz.h"
#include "SalesSystemGUIApp.h"

System::Void SalesSystemGUIApp::ADMIN_interfaz::ADMIN_interfaz_Load(System::Object^ sender, System::EventArgs^ e)
{
    txtResponsible->Text = SalesSystemMainForm::Usuario->Name + " " + SalesSystemMainForm::Usuario->LastName;
}
