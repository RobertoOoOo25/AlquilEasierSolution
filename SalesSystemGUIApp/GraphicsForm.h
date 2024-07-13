#pragma once

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AlquilEasierModel;
	using namespace AlquilEasierService;
	using namespace System::Collections::Generic;


	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Resumen de GraphicsForm
	/// </summary>
	public ref class GraphicsForm : public System::Windows::Forms::Form
	{
		array<PointF>^ arrPoints = gcnew array<PointF>(360);
		const int R = 100;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ alarmchart;
	private: System::Windows::Forms::Button^ button6;

		   int counter = 2;
	private: System::Windows::Forms::Label^ Label;
	private: System::Windows::Forms::Label^ label1;


	private:

		DateTime lastResetDate;

	public:
		GraphicsForm(void)
		{
			InitializeComponent();
			for (int i = 0; i < 360; i++) {
				arrPoints[i] = PointF(pictureBox1->Width / 2 - 360 + i,
					pictureBox1->Height / 2 + R * Math::Sin(3 * Math::PI / 180 * (i - 3 * R)));
			}
			timer1->Start();

			// Cargar la fecha del último reinicio desde algún lugar persistente, como un archivo o base de datos
			lastResetDate = DateTime::Now.Date; // Inicialmente se considera la fecha de hoy

			// Configurar temporizador para verificar el cambio de día
			Timer^ dailyResetTimer = gcnew Timer();
			dailyResetTimer->Interval = 60000; // 1 minuto para pruebas, puedes ajustarlo según necesites
			dailyResetTimer->Tick += gcnew EventHandler(this, &GraphicsForm::DailyResetTimer_Tick);
			dailyResetTimer->Start();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private: System::Windows::Forms::Label^ labelFechaActual;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GraphicsForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->alarmchart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Label = (gcnew System::Windows::Forms::Label());
			this->labelFechaActual = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alarmchart))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(21, 37);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1016, 556);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &GraphicsForm::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GraphicsForm::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &GraphicsForm::timer1_Tick);
			// 
			// alarmchart
			// 
			chartArea1->Name = L"ChartArea1";
			this->alarmchart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->alarmchart->Legends->Add(legend1);
			this->alarmchart->Location = System::Drawing::Point(161, 62);
			this->alarmchart->Margin = System::Windows::Forms::Padding(4);
			this->alarmchart->Name = L"alarmchart";
			this->alarmchart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			this->alarmchart->Size = System::Drawing::Size(807, 529);
			this->alarmchart->TabIndex = 1;
			this->alarmchart->Text = L"chart1";
			this->alarmchart->Click += gcnew System::EventHandler(this, &GraphicsForm::chart1_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(0, 0);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 28);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Atrás";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &GraphicsForm::button6_Click);
			// 
			// Label
			// 
			this->Label->Location = System::Drawing::Point(763, 20);
			this->Label->Name = L"Label";
			this->Label->Size = System::Drawing::Size(100, 23);
			this->Label->TabIndex = 32;
			// 
			// labelFechaActual
			// 
			this->labelFechaActual->AutoSize = true;
			this->labelFechaActual->Location = System::Drawing::Point(763, 20); // Ajusta la posición según sea necesario
			this->labelFechaActual->Name = L"labelFechaActual";
			this->labelFechaActual->Size = System::Drawing::Size(150, 20);
			this->labelFechaActual->TabIndex = 2;
			this->labelFechaActual->Text = DateTime::Now.ToString("dd/MM/yyyy"); // Mostrar la fecha actual
			this->Controls->Add(this->labelFechaActual);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(670, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Fecha actual:";
			// 
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1063, 596);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelFechaActual);
			this->Controls->Add(this->Label);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->alarmchart);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GraphicsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro de uso de cochera y alarma";
			this->Load += gcnew System::EventHandler(this, &GraphicsForm::GraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alarmchart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		/*Graphics^ g = e->Graphics;
		Pen^ pen = gcnew Pen(Color::Blue);
		g->DrawLine(pen, 0, pictureBox1->Height / 2, pictureBox1->Width, pictureBox1->Height / 2);
		g->DrawLine(pen, pictureBox1->Width / 2, 0, pictureBox1->Width / 2, pictureBox1->Height);
		g->DrawString("X", gcnew System::Drawing::Font("Arial", 10),
			System::Drawing::Brushes::Black, 0.0, pictureBox1->Bottom / 2);
		g->DrawString("Y", gcnew System::Drawing::Font("Arial", 10),
			System::Drawing::Brushes::Black, pictureBox1->Right / 2, pictureBox1->Top);
		g->DrawCurve(pen, arrPoints, 0, counter - 1);*/
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (counter < 360) {
			counter++;
			pictureBox1->Invalidate();
		}
		else {
			timer1->Stop();
			timer1->Enabled = false;
		}
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {

		// Crear series para cada tipo de contador
		System::Windows::Forms::DataVisualization::Charting::Series^ seriesAlarma = gcnew System::Windows::Forms::DataVisualization::Charting::Series("Alarma Activada");
		seriesAlarma->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;

		System::Windows::Forms::DataVisualization::Charting::Series^ seriesCochera = gcnew System::Windows::Forms::DataVisualization::Charting::Series("Cochera Activada");
		seriesCochera->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;

		// Agregar las series al chart
		alarmchart->Series->Add(seriesAlarma);
		alarmchart->Series->Add(seriesCochera);

		List<Alarma^>^ alarmlist = Service::QuearyAllAlarma();
		for (int i = 0; i < alarmlist->Count; i++) {
			seriesAlarma->Points->AddXY(1, alarmlist[i]->ContadorIncendioRobo);
			seriesAlarma->Points[i]->AxisLabel = "Alarma Activada";
			seriesAlarma->Points[i]->Label = "" + alarmlist[i]->ContadorIncendioRobo;

			seriesCochera->Points->AddXY(2, alarmlist[i]->ContadorCochera);
			seriesCochera->Points[i]->AxisLabel = "Cochera Activada";
			seriesCochera->Points[i]->Label = "" + alarmlist[i]->ContadorCochera;
		}

		this->labelFechaActual->Text = DateTime::Now.ToString("dd/MM/yyyy");

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private:

	void DailyResetTimer_Tick(Object^ sender, EventArgs^ e)
	{
		// Verificar si ha cambiado el día desde el último reinicio
		DateTime today = DateTime::Now.Date;
		if (today > lastResetDate)
		{
			// Reiniciar contadores
			ResetCounters();

			// Actualizar lastResetDate a hoy
			lastResetDate = today;
		}
	}

	void ResetCounters()
	{
		// Reiniciar contadores en el gráfico y en la persistencia
		Series^ seriesAlarma = alarmchart->Series["Alarma Activada"];
		Series^ seriesCochera = alarmchart->Series["Cochera Activada"];

		seriesAlarma->Points->Clear();
		seriesCochera->Points->Clear();

		// También puedes reiniciar los contadores en tu base de datos o almacenamiento persistente
		List<Alarma^>^ alarmlist = Service::QuearyAllAlarma();
		for (int i = 0; i < alarmlist->Count; i++)
		{
			alarmlist[i]->ContadorIncendioRobo = 0;
			alarmlist[i]->ContadorCochera = 0;
			Service::RegistrarAlarma(alarmlist[i]); // Guardar cambios
		}
	}

	};
}

