#pragma once
namespace ZemlaGrina {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// Сохраняем исходную карту без сетки и отметок.
			if (pictureBox1->Image != nullptr)
				earthMap = gcnew Bitmap(pictureBox1->Image);
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ N_sputnikov;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ X;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ Y_nev;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ X_nev;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Y;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ Delta;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ Y_IST;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ X_IST;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Z_nev;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ Z;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ Z_IST;
	private: System::Windows::Forms::Label^ label9;
		   // Исходная карта без нанесённых поверх неё объектов.
		   Bitmap^ earthMap = nullptr;
		   // Средний радиус Земли, м.
		   double earthRadius = 6371000.0;
		   // Высота источника над поверхностью Земли, м.
		   double sourceHeight = 0.0;
	private: System::Windows::Forms::Button^ button3;
	protected:
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->N_sputnikov = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->X = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Z_nev = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Z = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Y_nev = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->X_nev = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Y = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Delta = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Y_IST = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->X_IST = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Z_IST = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 32);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1187, 687);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// N_sputnikov
			// 
			this->N_sputnikov->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->N_sputnikov->Location = System::Drawing::Point(1331, 131);
			this->N_sputnikov->Margin = System::Windows::Forms::Padding(4);
			this->N_sputnikov->Multiline = true;
			this->N_sputnikov->Name = L"N_sputnikov";
			this->N_sputnikov->Size = System::Drawing::Size(45, 37);
			this->N_sputnikov->TabIndex = 1;
			this->N_sputnikov->Text = L"4";
			this->N_sputnikov->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1218, 128);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 40);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Кол-во \r\nспутников :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(39, 42);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Х :";
			// 
			// X
			// 
			this->X->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->X->Location = System::Drawing::Point(75, 26);
			this->X->Margin = System::Windows::Forms::Padding(4);
			this->X->Multiline = true;
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(85, 35);
			this->X->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(1225, 30);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(476, 39);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Выбрать расположение приёмника";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Z_nev);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->Z);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->Y_nev);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->X_nev);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->Y);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->X);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(1211, 399);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(498, 123);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Найденые коорд. источника";
			// 
			// Z_nev
			// 
			this->Z_nev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Z_nev->Location = System::Drawing::Point(405, 69);
			this->Z_nev->Margin = System::Windows::Forms::Padding(4);
			this->Z_nev->Multiline = true;
			this->Z_nev->Name = L"Z_nev";
			this->Z_nev->Size = System::Drawing::Size(85, 35);
			this->Z_nev->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(337, 85);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 20);
			this->label10->TabIndex = 14;
			this->label10->Text = L"невZ :";
			// 
			// Z
			// 
			this->Z->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Z->Location = System::Drawing::Point(405, 26);
			this->Z->Margin = System::Windows::Forms::Padding(4);
			this->Z->Multiline = true;
			this->Z->Name = L"Z";
			this->Z->Size = System::Drawing::Size(85, 35);
			this->Z->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(369, 42);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 20);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Z :";
			// 
			// Y_nev
			// 
			this->Y_nev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Y_nev->Location = System::Drawing::Point(234, 70);
			this->Y_nev->Margin = System::Windows::Forms::Padding(4);
			this->Y_nev->Multiline = true;
			this->Y_nev->Name = L"Y_nev";
			this->Y_nev->Size = System::Drawing::Size(85, 35);
			this->Y_nev->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(166, 86);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"невУ :";
			// 
			// X_nev
			// 
			this->X_nev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->X_nev->Location = System::Drawing::Point(75, 69);
			this->X_nev->Margin = System::Windows::Forms::Padding(4);
			this->X_nev->Multiline = true;
			this->X_nev->Name = L"X_nev";
			this->X_nev->Size = System::Drawing::Size(85, 35);
			this->X_nev->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(7, 85);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"невХ :";
			// 
			// Y
			// 
			this->Y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Y->Location = System::Drawing::Point(234, 27);
			this->Y->Margin = System::Windows::Forms::Padding(4);
			this->Y->Multiline = true;
			this->Y->Name = L"Y";
			this->Y->Size = System::Drawing::Size(85, 35);
			this->Y->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(198, 43);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"У :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(1217, 181);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(265, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Испортить коорд. спутника на, %";
			// 
			// Delta
			// 
			this->Delta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Delta->Location = System::Drawing::Point(1499, 178);
			this->Delta->Margin = System::Windows::Forms::Padding(4);
			this->Delta->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->Delta->Name = L"Delta";
			this->Delta->Size = System::Drawing::Size(202, 26);
			this->Delta->TabIndex = 9;
			this->Delta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1222, 213);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(479, 39);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Рассчитать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(1225, 260);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(476, 132);
			this->dataGridView1->TabIndex = 11;
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(1225, 530);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(476, 215);
			this->chart1->TabIndex = 12;
			this->chart1->Text = L"chart1";
			// 
			// Y_IST
			// 
			this->Y_IST->Location = System::Drawing::Point(1445, 78);
			this->Y_IST->Margin = System::Windows::Forms::Padding(4);
			this->Y_IST->Multiline = true;
			this->Y_IST->Name = L"Y_IST";
			this->Y_IST->Size = System::Drawing::Size(85, 35);
			this->Y_IST->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(1378, 92);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 20);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Уист :";
			// 
			// X_IST
			// 
			this->X_IST->Location = System::Drawing::Point(1285, 77);
			this->X_IST->Margin = System::Windows::Forms::Padding(4);
			this->X_IST->Multiline = true;
			this->X_IST->Name = L"X_IST";
			this->X_IST->Size = System::Drawing::Size(85, 35);
			this->X_IST->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(1220, 93);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Хист :";
			// 
			// Z_IST
			// 
			this->Z_IST->Location = System::Drawing::Point(1616, 77);
			this->Z_IST->Margin = System::Windows::Forms::Padding(4);
			this->Z_IST->Multiline = true;
			this->Z_IST->Name = L"Z_IST";
			this->Z_IST->Size = System::Drawing::Size(85, 35);
			this->Z_IST->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(1551, 93);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 20);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Zист :";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1389, 127);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(312, 39);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Выбрать расположение спутников";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1714, 758);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Z_IST);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Y_IST);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->X_IST);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Delta);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->N_sputnikov);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Земля Гриня";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Delta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
		// Координаты спутников и измеренные амплитуды.
		array<double>^ satX = nullptr;
		array<double>^ satY = nullptr;
		array<double>^ satZ = nullptr;
		array<double>^ satA = nullptr;
		int satelliteCount = 0;
		Random^ random = gcnew Random();
		// --- Ручная расстановка спутников ---
		bool satellitePlacementMode = false;
		bool satellitesReady = false;         // спутники уже расставлены вручную
		int placedSatellites = 0;
		array<double>^ pendingSatX = nullptr;
		array<double>^ pendingSatY = nullptr;
		array<double>^ pendingSatZ = nullptr;
		array<double>^ pendingSatA = nullptr;
		int pendingCapacity = 0;
		// Отрисовка сетки и выбранного источника.
		void DrawMap(bool showPoint, double latitude, double longitude)
		{
			if (earthMap == nullptr)
				return;
			Bitmap^ map = gcnew Bitmap(earthMap);
			Graphics^ g = Graphics::FromImage(map);
			int width = map->Width;
			int height = map->Height;
			int centerX = width / 2;
			int centerY = height / 2;
			Pen^ gridPen = gcnew Pen(Color::Yellow, 1.0f);
			gridPen->DashStyle = DashStyle::Dash;
			// Нулевые долгота и широта.
			g->DrawLine(gridPen, centerX, 0, centerX, height);
			g->DrawLine(gridPen, 0, centerY, width, centerY);
			// Долгота: от -180 до +180 градусов, шаг 10°.
			for (int lon = -170; lon <= 170; lon += 10)
			{
				if (lon == 0)
					continue;
				int x = centerX +
					(int)((double)lon / 360.0 * width);
				g->DrawLine(gridPen, x, 0, x, height);
			}
			// Широта: от -90 до +90 градусов, шаг 10°.
			for (int lat = -80; lat <= 80; lat += 10)
			{
				if (lat == 0)
					continue;
				int y = centerY -
					(int)((double)lat / 180.0 * height);
				g->DrawLine(gridPen, 0, y, width, y);
			}
			System::Drawing::Font^ font =
				gcnew System::Drawing::Font(L"Arial", 9);
			SolidBrush^ textBrush =
				gcnew SolidBrush(Color::Yellow);
			g->DrawString(L"0°", font, textBrush,
				(float)(centerX + 3), (float)(centerY + 3));
			g->DrawString(L"-180°", font, textBrush, 3.0f,
				(float)(centerY + 3));
			g->DrawString(L"+90°", font, textBrush,
				(float)(centerX + 3), 3.0f);
			g->DrawString(L"-90°", font, textBrush,
				(float)(centerX + 3), (float)(height - 20));
			// Отметка выбранной точки.
			if (showPoint)
				DrawPointOnGraphics(g, width, height, latitude, longitude,
					Color::Red, Color::White, L"");
			delete gridPen;
			delete font;
			delete textBrush;
			delete g;
			// Не удаляем earthMap: это оригинал.
			Image^ oldImage = pictureBox1->Image;
			pictureBox1->Image = map;
			if (oldImage != nullptr && oldImage != earthMap)
				delete oldImage;
		}
		// Вспомогательная функция рисования точки с подписью.
		void DrawPointOnGraphics(Graphics^ g, int width, int height,
			double latitude, double longitude,
			Color fill, Color border, String^ caption)
		{
			int px = (int)((longitude + 180.0) / 360.0 * width);
			int py = (int)((90.0 - latitude) / 180.0 * height);
			SolidBrush^ brush = gcnew SolidBrush(fill);
			Pen^ pen = gcnew Pen(border, 2.0f);
			g->FillEllipse(brush, px - 5, py - 5, 10, 10);
			g->DrawEllipse(pen, px - 5, py - 5, 10, 10);
			if (caption != nullptr && caption->Length > 0)
			{
				System::Drawing::Font^ font =
					gcnew System::Drawing::Font(L"Arial", 9);
				SolidBrush^ capBrush = gcnew SolidBrush(fill);
				g->DrawString(caption, font, capBrush,
					(float)(px + 8), (float)(py + 8));
				delete capBrush;
				delete font;
			}
			delete brush;
			delete pen;
		}
		// Кнопка включает координатную сетку и режим выбора источника.
	private: System::Void button1_Click(
		System::Object^ sender,
		System::EventArgs^ e)
	{
		if (earthMap == nullptr)
		{
			MessageBox::Show(
				L"Не удалось загрузить карту Земли.",
				L"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}
		// Отменяем режим расстановки спутников, если он был активен.
		satellitePlacementMode = false;
		satellitesReady = false;
		placedSatellites = 0;
		pendingCapacity = 0;
		button3->Enabled = true;
		DrawMap(false, 0.0, 0.0);
		pictureBox1->Cursor = Cursors::Cross;
	}
		   // Выбор источника или постановка спутника щелчком по карте.
	private: System::Void pictureBox1_MouseClick(
		System::Object^ sender,
		System::Windows::Forms::MouseEventArgs^ e)
	{
		if (earthMap == nullptr || pictureBox1->Image == nullptr)
			return;
		if (e->Button != System::Windows::Forms::MouseButtons::Left)
			return;
		double width = pictureBox1->ClientSize.Width;
		double height = pictureBox1->ClientSize.Height;
		if (width <= 0 || height <= 0)
			return;
		// Защита от щелчка за пределами области карты.
		if (e->X < 0 || e->X >= width ||
			e->Y < 0 || e->Y >= height)
			return;
		// --- РЕЖИМ РУЧНОЙ РАССТАНОВКИ СПУТНИКОВ ---
		if (satellitePlacementMode)
		{
			double longitude = e->X / width * 360.0 - 180.0;
			double latitude = 90.0 - e->Y / height * 180.0;
			// Спутник ставим на орбиту над указанной точкой поверхности.
			double orbitRadius = earthRadius + 700000.0;
			double phi = latitude * Math::PI / 180.0;
			double lambda = longitude * Math::PI / 180.0;
			double sx = orbitRadius * Math::Cos(phi) * Math::Cos(lambda);
			double sy = orbitRadius * Math::Cos(phi) * Math::Sin(lambda);
			double sz = orbitRadius * Math::Sin(phi);
			int idx = placedSatellites;
			pendingSatX[idx] = sx;
			pendingSatY[idx] = sy;
			pendingSatZ[idx] = sz;
			// Амплитуда моделируется по расстоянию до источника.
			double trueX = 0.0, trueY = 0.0, trueZ = 0.0;
			Double::TryParse(X_IST->Text, trueX);
			Double::TryParse(Y_IST->Text, trueY);
			Double::TryParse(Z_IST->Text, trueZ);
			double dx = sx - trueX;
			double dy = sy - trueY;
			double dz = sz - trueZ;
			double dist = Math::Sqrt(dx * dx + dy * dy + dz * dz);
			if (dist < 1.0)
				dist = 1.0;
			pendingSatA[idx] = 10000000.0 / dist;
			placedSatellites++;
			// Рисуем синюю точку поверх текущего изображения,
			// не стирая ранее поставленные точки.
			Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
			Graphics^ g = Graphics::FromImage(bmp);
			int px = (int)((longitude + 180.0) / 360.0 * bmp->Width);
			int py = (int)((90.0 - latitude) / 180.0 * bmp->Height);
			SolidBrush^ blue = gcnew SolidBrush(Color::Blue);
			Pen^ white = gcnew Pen(Color::White, 1.5f);
			g->FillEllipse(blue, px - 5, py - 5, 10, 10);
			g->DrawEllipse(white, px - 5, py - 5, 10, 10);
			System::Drawing::Font^ f =
				gcnew System::Drawing::Font(L"Arial", 8);
			SolidBrush^ capBrush = gcnew SolidBrush(Color::Blue);
			g->DrawString(
				String::Format(L"С{0}", placedSatellites),
				f, capBrush, (float)(px + 6), (float)(py - 14));
			delete capBrush;
			delete f;
			delete blue;
			delete white;
			delete g;
			Image^ oldImage = pictureBox1->Image;
			pictureBox1->Image = bmp;
			if (oldImage != nullptr && oldImage != earthMap)
				delete oldImage;
			// Обновляем подпись кнопки — сколько уже поставлено.
			button3->Text = String::Format(
				L"Выбрать расположение спутников ({0}/{1})",
				placedSatellites, pendingCapacity);
			// Все спутники поставлены — фиксируем результат.
			if (placedSatellites >= pendingCapacity)
				FinishSatellitePlacement();
			return;
		}
		// --- ОБЫЧНЫЙ РЕЖИМ: ВЫБОР ИСТОЧНИКА ---
		double longitude = e->X / width * 360.0 - 180.0;
		double latitude = 90.0 - e->Y / height * 180.0;
		double phi = latitude * Math::PI / 180.0;
		double lambda = longitude * Math::PI / 180.0;
		double r = earthRadius + sourceHeight;
		double Xist = r * Math::Cos(phi) * Math::Cos(lambda);
		double Yist = r * Math::Cos(phi) * Math::Sin(lambda);
		double Zist = r * Math::Sin(phi);
		X_IST->Text = Xist.ToString(L"F2");
		Y_IST->Text = Yist.ToString(L"F2");
		Z_IST->Text = Zist.ToString(L"F2");
		DrawMap(true, latitude, longitude);
	}
		   // Расстояние от предполагаемого источника до спутника.
		   double DistanceToSatellite(
			   double X, double Y, double Z, int i)
		   {
			   double dx = X - satX[i];
			   double dy = Y - satY[i];
			   double dz = Z - satZ[i];
			   return Math::Sqrt(dx * dx + dy * dy + dz * dz);
		   }
		   // Целевая функция метода относительных амплитуд.
		   double ObjectiveFunction(double X, double Y, double Z)
		   {
			   if (satelliteCount < 4)
				   return 1e100;
			   int ref = 0;
			   for (int i = 1; i < satelliteCount; i++)
			   {
				   if (satA[i] > satA[ref])
					   ref = i;
			   }
			   double dRef = DistanceToSatellite(X, Y, Z, ref);
			   if (dRef < 1.0)
				   return 1e100;
			   double sum = 0.0;
			   for (int i = 0; i < satelliteCount; i++)
			   {
				   if (i == ref)
					   continue;
				   double di = DistanceToSatellite(X, Y, Z, i);
				   if (di < 1.0 || satA[ref] <= 0.0)
					   return 1e100;
				   double measuredRatio = satA[i] / satA[ref];
				   double calculatedRatio = dRef / di;
				   double residual = measuredRatio - calculatedRatio;
				   sum += residual * residual;
			   }
			   double radius = Math::Sqrt(X * X + Y * Y + Z * Z);
			   double surfaceResidual = (radius - earthRadius) / earthRadius;
			   sum += surfaceResidual * surfaceResidual;
			   return sum;
		   }
		   array<double>^ ExplorePoint(array<double>^ point, double step)
		   {
			   array<double>^ best = gcnew array<double>(3);
			   for (int j = 0; j < 3; j++)
				   best[j] = point[j];
			   double bestValue =
				   ObjectiveFunction(best[0], best[1], best[2]);
			   for (int j = 0; j < 3; j++)
			   {
				   array<double>^ test = gcnew array<double>(3);
				   for (int k = 0; k < 3; k++)
					   test[k] = best[k];
				   test[j] += step;
				   double valuePlus =
					   ObjectiveFunction(test[0], test[1], test[2]);
				   if (valuePlus < bestValue)
				   {
					   best = test;
					   bestValue = valuePlus;
				   }
				   else
				   {
					   for (int k = 0; k < 3; k++)
						   test[k] = best[k];
					   test[j] -= step;
					   double valueMinus =
						   ObjectiveFunction(test[0], test[1], test[2]);
					   if (valueMinus < bestValue)
					   {
						   best = test;
						   bestValue = valueMinus;
					   }
				   }
			   }
			   return best;
		   }
		   array<double>^ HookeJeeves(
			   double startX, double startY, double startZ)
		   {
			   array<double>^ basePoint = gcnew array<double>(3);
			   basePoint[0] = startX;
			   basePoint[1] = startY;
			   basePoint[2] = startZ;
			   double step = 1000000.0;
			   double tolerance = 10.0;
			   int iteration = 0;
			   const int maxIterations = 10000;
			   while (step > tolerance && iteration < maxIterations)
			   {
				   iteration++;
				   array<double>^ explored = ExplorePoint(basePoint, step);
				   double oldValue =
					   ObjectiveFunction(
						   basePoint[0], basePoint[1], basePoint[2]);
				   double newValue =
					   ObjectiveFunction(
						   explored[0], explored[1], explored[2]);
				   if (newValue < oldValue)
				   {
					   array<double>^ pattern = gcnew array<double>(3);
					   for (int j = 0; j < 3; j++)
						   pattern[j] = explored[j] +
						   (explored[j] - basePoint[j]);
					   array<double>^ patternExplored =
						   ExplorePoint(pattern, step);
					   double patternValue =
						   ObjectiveFunction(
							   patternExplored[0],
							   patternExplored[1],
							   patternExplored[2]);
					   if (patternValue < newValue)
						   basePoint = patternExplored;
					   else
						   basePoint = explored;
				   }
				   else
				   {
					   step *= 0.5;
				   }
			   }
			   return basePoint;
		   }
		   void DrawSatellitesOnMap()
		   {
			   if (pictureBox1->Image == nullptr ||
				   satX == nullptr || satelliteCount == 0)
				   return;
			   Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
			   Graphics^ g = Graphics::FromImage(bmp);
			   SolidBrush^ blueBrush = gcnew SolidBrush(Color::Blue);
			   Pen^ whitePen = gcnew Pen(Color::White, 1.5f);
			   int width = bmp->Width;
			   int height = bmp->Height;
			   for (int i = 0; i < satelliteCount; i++)
			   {
				   double r = Math::Sqrt(
					   satX[i] * satX[i] +
					   satY[i] * satY[i] +
					   satZ[i] * satZ[i]);
				   if (r <= 0.0)
					   continue;
				   double latitude =
					   Math::Asin(satZ[i] / r) * 180.0 / Math::PI;
				   double longitude =
					   Math::Atan2(satY[i], satX[i]) * 180.0 / Math::PI;
				   int px = (int)((longitude + 180.0) / 360.0 * width);
				   int py = (int)((90.0 - latitude) / 180.0 * height);
				   g->FillEllipse(blueBrush, px - 5, py - 5, 10, 10);
				   g->DrawEllipse(whitePen, px - 5, py - 5, 10, 10);
			   }
			   delete blueBrush;
			   delete whitePen;
			   delete g;
			   Image^ oldImage = pictureBox1->Image;
			   pictureBox1->Image = bmp;
			   if (oldImage != nullptr && oldImage != earthMap)
				   delete oldImage;
		   }
		   // Заполнение таблицы текущими массивами спутников.
		   void FillSatelliteTable()
		   {
			   dataGridView1->Rows->Clear();
			   dataGridView1->Columns->Clear();
			   dataGridView1->AutoGenerateColumns = false;
			   dataGridView1->AllowUserToAddRows = false;
			   dataGridView1->ReadOnly = true;
			   dataGridView1->RowHeadersVisible = false;
			   dataGridView1->AutoSizeColumnsMode =
				   DataGridViewAutoSizeColumnsMode::DisplayedCells;
			   dataGridView1->Columns->Add(L"Num", L"№");
			   dataGridView1->Columns->Add(L"SatX", L"X, м");
			   dataGridView1->Columns->Add(L"SatY", L"Y, м");
			   dataGridView1->Columns->Add(L"SatZ", L"Z, м");
			   dataGridView1->Columns->Add(L"Amplitude", L"A");
			   for (int i = 0; i < satelliteCount; i++)
			   {
				   dataGridView1->Rows->Add(
					   (i + 1).ToString(),
					   satX[i].ToString(L"F0"),
					   satY[i].ToString(L"F0"),
					   satZ[i].ToString(L"F0"),
					   satA[i].ToString(L"G6"));
			   }
		   }
		   // Завершение ручной расстановки спутников.
		   void FinishSatellitePlacement()
		   {
			   satellitePlacementMode = false;
			   satellitesReady = true;
			   satelliteCount = pendingCapacity;
			   satX = gcnew array<double>(satelliteCount);
			   satY = gcnew array<double>(satelliteCount);
			   satZ = gcnew array<double>(satelliteCount);
			   satA = gcnew array<double>(satelliteCount);
			   for (int i = 0; i < satelliteCount; i++)
			   {
				   satX[i] = pendingSatX[i];
				   satY[i] = pendingSatY[i];
				   satZ[i] = pendingSatZ[i];
				   satA[i] = pendingSatA[i];
			   }
			   pendingSatX = nullptr;
			   pendingSatY = nullptr;
			   pendingSatZ = nullptr;
			   pendingSatA = nullptr;
			   pictureBox1->Cursor = Cursors::Default;
			   button3->Text = L"Выбрать расположение спутников";
			   button3->Enabled = false;
			   FillSatelliteTable();
			   MessageBox::Show(
				   L"Все спутники расставлены. "
				   L"Нажмите «Рассчитать» для поиска координат источника.",
				   L"Готово",
				   MessageBoxButtons::OK,
				   MessageBoxIcon::Information);
		   }

		   // Генерация спутников с заданной амплитудой шума (в метрах).
		   // Амплитуды вычисляются по истинным (не испорченным) координатам.
		   void GenerateSatellites(int N, double trueX, double trueY, double trueZ, double noiseAmplitude)
		   {
			   satelliteCount = N;
			   satX = gcnew array<double>(N);
			   satY = gcnew array<double>(N);
			   satZ = gcnew array<double>(N);
			   satA = gcnew array<double>(N);
			   double orbitRadius = earthRadius + 700000.0;
			   for (int i = 0; i < N; i++)
			   {
				   double u = 2.0 * random->NextDouble() - 1.0;
				   double angle = 2.0 * Math::PI * random->NextDouble();
				   double horizontal = Math::Sqrt(1.0 - u * u);
				   double realX = orbitRadius * horizontal * Math::Cos(angle);
				   double realY = orbitRadius * horizontal * Math::Sin(angle);
				   double realZ = orbitRadius * u;
				   double dx = realX - trueX;
				   double dy = realY - trueY;
				   double dz = realZ - trueZ;
				   double distance = Math::Sqrt(dx * dx + dy * dy + dz * dz);
				   if (distance < 1.0)
					   distance = 1.0;
				   satA[i] = 10000000.0 / distance;
				   // Портим координаты на заданную величину (симметричный шум)
				   satX[i] = realX + (2.0 * random->NextDouble() - 1.0) * noiseAmplitude;
				   satY[i] = realY + (2.0 * random->NextDouble() - 1.0) * noiseAmplitude;
				   satZ[i] = realZ + (2.0 * random->NextDouble() - 1.0) * noiseAmplitude;
			   }
		   }

		   // Расчёт по кнопке.
	private: System::Void button2_Click(
		System::Object^ sender,
		System::EventArgs^ e)
	{
		double trueX, trueY, trueZ;
		if (!Double::TryParse(X_IST->Text, trueX) ||
			!Double::TryParse(Y_IST->Text, trueY) ||
			!Double::TryParse(Z_IST->Text, trueZ))
		{
			MessageBox::Show(
				L"Сначала нажмите «Выбрать расположение приёмника» "
				L"и щёлкните по карте Земли.",
				L"Нет координат источника",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}
		int N;
		if (!Int32::TryParse(N_sputnikov->Text, N) || N < 4)
		{
			MessageBox::Show(
				L"Для определения трёхмерных координат задайте "
				L"не менее четырёх спутников.",
				L"Ошибка ввода",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}
		try
		{
			double orbitRadius = earthRadius + 700000.0;
			// Текущее значение Delta — процент порчи
			double perc = Convert::ToDouble(Delta->Value);
			double noiseAmp = (perc / 100.0) * orbitRadius;

			// Если спутники уже расставлены вручную — генерацию не выполняем.
			bool useManual = satellitesReady &&
				satX != nullptr &&
				satelliteCount == N;

			if (!useManual)
			{
				GenerateSatellites(N, trueX, trueY, trueZ, noiseAmp);
				FillSatelliteTable();
			}

			// Обновляем карту: сетка + спутники + источник.
			DrawMap(true, 0.0, 0.0);
			double radius = Math::Sqrt(
				trueX * trueX + trueY * trueY + trueZ * trueZ);
			double latitude = Math::Asin(trueZ / radius) *
				180.0 / Math::PI;
			double longitude = Math::Atan2(trueY, trueX) *
				180.0 / Math::PI;
			DrawMap(true, latitude, longitude);
			DrawSatellitesOnMap();

			// Один расчёт для отображения в текстовых полях
			array<double>^ result =
				HookeJeeves(earthRadius, 0.0, 0.0);
			double foundX = result[0];
			double foundY = result[1];
			double foundZ = result[2];
			X->Text = foundX.ToString(L"F2");
			Y->Text = foundY.ToString(L"F2");
			Z->Text = foundZ.ToString(L"F2");
			X_nev->Text = (foundX - trueX).ToString(L"F2");
			Y_nev->Text = (foundY - trueY).ToString(L"F2");
			Z_nev->Text = (foundZ - trueZ).ToString(L"F2");
			double finalResidual =
				ObjectiveFunction(foundX, foundY, foundZ);

			// ========== Построение графика зависимости СКО от % порчи ==========
			chart1->Series[0]->Points->Clear();
			chart1->Series[0]->Name = L"СКО ошибки";
			chart1->Series[0]->ChartType = SeriesChartType::Line;
			chart1->Series[0]->MarkerStyle = MarkerStyle::Circle;
			chart1->Series[0]->MarkerSize = 7;
			chart1->Series[0]->BorderWidth = 2;

			chart1->ChartAreas[0]->AxisX->Title = L"Ошибка координат спутников, %";
			chart1->ChartAreas[0]->AxisY->Title = L"СКО координат источника, м";
			chart1->ChartAreas[0]->AxisX->Minimum = 0;
			chart1->ChartAreas[0]->AxisX->Interval = 1;
			chart1->ChartAreas[0]->AxisX->MajorGrid->LineColor = Color::LightGray;
			chart1->ChartAreas[0]->AxisY->MajorGrid->LineColor = Color::LightGray;

			chart1->Titles->Clear();
			chart1->Titles->Add(L"Зависимость СКО от порчи координат спутников");

			const int numTrials = 6;          // число экспериментов на каждую точку
			const double maxPercGraph = 10.0; // максимальный процент на графике
			const double stepPerc = 1.0;

			for (double p = 0.0; p <= maxPercGraph + 0.001; p += stepPerc)
			{
				double noise = (p / 100.0) * orbitRadius;
				double sumSq = 0.0;
				int valid = 0;

				for (int t = 0; t < numTrials; t++)
				{
					// Новая случайная конфигурация спутников с данным уровнем шума
					GenerateSatellites(N, trueX, trueY, trueZ, noise);

					array<double>^ res = HookeJeeves(earthRadius, 0.0, 0.0);
					double dx = res[0] - trueX;
					double dy = res[1] - trueY;
					double dz = res[2] - trueZ;
					double err = Math::Sqrt(dx * dx + dy * dy + dz * dz);
					sumSq += err * err;
					valid++;
				}

				double rms = (valid > 0) ? Math::Sqrt(sumSq / valid) : 0.0;
				chart1->Series[0]->Points->AddXY(p, rms);
			}

			// Восстанавливаем спутники для текущего значения Delta (чтобы таблица и карта соответствовали)
			if (!useManual)
			{
				GenerateSatellites(N, trueX, trueY, trueZ, noiseAmp);
				FillSatelliteTable();
				DrawSatellitesOnMap();
			}

			MessageBox::Show(
				String::Format(
					L"Расчёт завершён.\n\n"
					L"Найденные координаты, м:\n"
					L"X = {0:F2}\nY = {1:F2}\nZ = {2:F2}\n\n"
					L"Сумма квадратов невязок = {3:G8}\n\n"
					L"На графике — зависимость СКО ошибки\n"
					L"от процента порчи координат спутников.",
					foundX, foundY, foundZ, finalResidual),
				L"Результат расчёта",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(
				L"Ошибка расчёта: " + ex->Message,
				L"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
		   // Ручная расстановка спутников по клику на карте.
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (earthMap == nullptr)
		{
			MessageBox::Show(
				L"Не удалось загрузить карту Земли.",
				L"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}
		int N;
		if (!Int32::TryParse(N_sputnikov->Text, N) || N < 4)
		{
			MessageBox::Show(
				L"Для определения трёхмерных координат задайте "
				L"не менее четырёх спутников.",
				L"Ошибка ввода",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}
		double trueX, trueY, trueZ;
		if (!Double::TryParse(X_IST->Text, trueX) ||
			!Double::TryParse(Y_IST->Text, trueY) ||
			!Double::TryParse(Z_IST->Text, trueZ))
		{
			MessageBox::Show(
				L"Сначала нажмите «Выбрать расположение приёмника» "
				L"и щёлкните по карте Земли.",
				L"Нет координат источника",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}
		// Инициализируем накопители.
		pendingCapacity = N;
		placedSatellites = 0;
		satellitesReady = false;
		pendingSatX = gcnew array<double>(N);
		pendingSatY = gcnew array<double>(N);
		pendingSatZ = gcnew array<double>(N);
		pendingSatA = gcnew array<double>(N);
		// Очищаем таблицу до завершения расстановки.
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		satellitePlacementMode = true;
		// Перерисовываем карту с сеткой и ранее выбранным источником.
		DrawMap(true, 0.0, 0.0);
		double radius = Math::Sqrt(
			trueX * trueX + trueY * trueY + trueZ * trueZ);
		if (radius > 0.0)
		{
			double latitude = Math::Asin(trueZ / radius) * 180.0 / Math::PI;
			double longitude = Math::Atan2(trueY, trueX) * 180.0 / Math::PI;
			DrawMap(true, latitude, longitude);
		}
		pictureBox1->Cursor = Cursors::Cross;
		button3->Enabled = false;
		button3->Text = String::Format(
			L"Выбрать расположение спутников (0/{0})", N);
		MessageBox::Show(
			String::Format(
				L"Режим расстановки спутников включён.\n"
				L"Кликните по карте {0} раз(а).\n"
				L"Точки появятся синим.",
				N),
			L"Расстановка спутников",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	};
};