#include "PersonalForm.h"

#include "SalesSystemGUIApp.h"

System::Void SalesSystemGUIApp::PersonalForm::PersonalForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    // Configurar la primera pestaña por defecto
    BarraOpciones->SelectedIndex = 0;
    //pictureBox1->Image = Image::FromFile("C:\\ProyectoLPOO\\Logo.png");
    pictureBox1->Size = System::Drawing::Size(252, 149); // Tamaño deseado
    pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;  // Estirar la imagen para que se ajuste al tamaño del PictureBox
    // LABEL PARA NOMBRE Y APELLIDO
    Label^ labelNombreCompleto = gcnew Label();
    labelNombreCompleto->Text = "Nuevo Label";
    labelNombreCompleto->Location = System::Drawing::Point(85, 210);
    labelNombreCompleto->Size = System::Drawing::Size(145, 20);
    labelNombreCompleto->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular);
    // Agregar el Label al formulario
    this->Controls->Add(labelNombreCompleto);
    showHorario();

    txtResponsible->Text = SalesSystemMainForm::Usuario->Name + " " + SalesSystemMainForm::Usuario->LastName;

}
