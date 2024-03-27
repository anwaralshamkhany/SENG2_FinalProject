#pragma once
#include <vector>
#include <string>
#include "Reading.h"
#include "CPU.h"
#include "Computer.h"
#include <msclr/marshal_cppstd.h>

namespace Project12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	
	std::vector<std::vector<std::string>>CPUdata;
	std::vector<CPU>CPUs;
	std::vector<std::vector<std::string>>Mobodata;
	std::vector<Motherboard>mobo;
	std::vector<std::vector<std::string>>Coolerdata;
	std::vector<Cooler>Coolers;
	std::vector<std::vector<std::string>>GPUdata;
	std::vector<GPU>gpus;
	std::vector<std::vector<std::string>>PSUdata;
	std::vector<PSU>psu;
	std::vector<std::vector<std::string>>Storagedata;
	std::vector<Storage>storage;
	std::vector<std::vector<std::string>>Ramdata;
	std::vector<Ram>ram;
	std::vector<std::vector<std::string>>Casedata;
	std::vector<Case>cases;
	//Computer c1(CPUs[0], mobo[24], Coolers[8], ram[2], storage[5], gpus[3], cases[2], psu[3]);

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm()
		{	
			
			InitializeComponent();
			//Display();

			ReadCPU(CPUdata,CPUs);			
			/*ReadGPU(GPUdata, gpus);
			ReadCooler(Coolerdata,Coolers);
			ReadPSU(PSUdata,psu);
			ReadRam(Ramdata,ram);
			ReadCase(Casedata,cases);
			ReadStorage(Storagedata,storage);
			ReadMobo(Mobodata,mobo);			
			*/
			PopulateDataGridView(dataGridView1);			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::Panel^ MotherBoardPanel;
	private: System::Windows::Forms::DataGridView^ motherboards;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ OutputLabel;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MotherBoardPanel = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->motherboards = (gcnew System::Windows::Forms::DataGridView());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->MotherBoardPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->motherboards))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(256, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to PC Part Picker!";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(301, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Pre-Builds";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(286, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Make Your Own";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(982, 553);
			this->panel1->TabIndex = 3;
			this->panel1->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(259, 309);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 23);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Go Back";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(275, 172);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 48);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Editing";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(275, 238);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 48);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Office";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(275, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 48);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Gaming";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(256, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Choose your Pre-Build";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->MotherBoardPanel);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(982, 553);
			this->panel2->TabIndex = 4;
			this->panel2->Visible = false;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->button19);
			this->panel5->Controls->Add(this->dataGridView3);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(982, 553);
			this->panel5->TabIndex = 14;
			this->panel5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(441, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 17);
			this->label4->TabIndex = 2;
			this->label4->Text = L"RAM";
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(12, 11);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(115, 30);
			this->button19->TabIndex = 1;
			this->button19->Text = L"Go Back";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->BackgroundColor = System::Drawing::Color::LightSeaGreen;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column13,
					this->Column14, this->Column15, this->Column16, this->Column17, this->Column18, this->Column19
			});
			this->dataGridView3->Location = System::Drawing::Point(1, 47);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(1029, 304);
			this->dataGridView3->TabIndex = 0;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Name";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Price";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Speed";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Capacity";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Modules";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Price per Gigabyte";
			this->Column18->MinimumWidth = 6;
			this->Column18->Name = L"Column18";
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Colour";
			this->Column19->MinimumWidth = 6;
			this->Column19->Name = L"Column19";
			// 
			// MotherBoardPanel
			// 
			this->MotherBoardPanel->Controls->Add(this->button20);
			this->MotherBoardPanel->Controls->Add(this->motherboards);
			this->MotherBoardPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MotherBoardPanel->Location = System::Drawing::Point(0, 0);
			this->MotherBoardPanel->Name = L"MotherBoardPanel";
			this->MotherBoardPanel->Size = System::Drawing::Size(982, 553);
			this->MotherBoardPanel->TabIndex = 13;
			this->MotherBoardPanel->Visible = false;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(283, 332);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(155, 34);
			this->button20->TabIndex = 1;
			this->button20->Text = L"Go Back";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// motherboards
			// 
			this->motherboards->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->motherboards->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->motherboards->BackgroundColor = System::Drawing::Color::PaleTurquoise;
			this->motherboards->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->motherboards->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column21,
					this->Column22, this->Column23, this->Column24, this->Column25, this->Column26, this->Column27
			});
			this->motherboards->Location = System::Drawing::Point(0, 37);
			this->motherboards->Name = L"motherboards";
			this->motherboards->RowHeadersWidth = 51;
			this->motherboards->RowTemplate->Height = 24;
			this->motherboards->Size = System::Drawing::Size(982, 238);
			this->motherboards->TabIndex = 0;
			// 
			// Column21
			// 
			this->Column21->HeaderText = L"Name";
			this->Column21->MinimumWidth = 6;
			this->Column21->Name = L"Column21";
			this->Column21->ReadOnly = true;
			// 
			// Column22
			// 
			this->Column22->HeaderText = L"Price";
			this->Column22->MinimumWidth = 6;
			this->Column22->Name = L"Column22";
			this->Column22->ReadOnly = true;
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"Socket";
			this->Column23->MinimumWidth = 6;
			this->Column23->Name = L"Column23";
			this->Column23->ReadOnly = true;
			// 
			// Column24
			// 
			this->Column24->HeaderText = L"Form Factor";
			this->Column24->MinimumWidth = 6;
			this->Column24->Name = L"Column24";
			this->Column24->ReadOnly = true;
			// 
			// Column25
			// 
			this->Column25->HeaderText = L"Chipset";
			this->Column25->MinimumWidth = 6;
			this->Column25->Name = L"Column25";
			this->Column25->ReadOnly = true;
			// 
			// Column26
			// 
			this->Column26->HeaderText = L"Wi-Fi";
			this->Column26->MinimumWidth = 6;
			this->Column26->Name = L"Column26";
			this->Column26->ReadOnly = true;
			// 
			// Column27
			// 
			this->Column27->HeaderText = L"Colour";
			this->Column27->MinimumWidth = 6;
			this->Column27->Name = L"Column27";
			this->Column27->ReadOnly = true;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button18);
			this->panel4->Controls->Add(this->dataGridView2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(982, 553);
			this->panel4->TabIndex = 12;
			this->panel4->Visible = false;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(267, 352);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(159, 36);
			this->button18->TabIndex = 1;
			this->button18->Text = L"Go Back";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::RosyBrown;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column7,
					this->Column8, this->Column9, this->Column10, this->Column11, this->Column12
			});
			this->dataGridView2->Location = System::Drawing::Point(0, 25);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(717, 254);
			this->dataGridView2->TabIndex = 0;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Name";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Price";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"GPU";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Clock Speed";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Length";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"TDP";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button17);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(982, 553);
			this->panel3->TabIndex = 11;
			this->panel3->Visible = false;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(239, 363);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(161, 33);
			this->button17->TabIndex = 1;
			this->button17->Text = L"Go Back";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(716, 206);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Name";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Price";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Cores";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"CLock Speed";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"TDP";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Graphics";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(259, 327);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(99, 39);
			this->button16->TabIndex = 10;
			this->button16->Text = L"Go Back";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(463, 218);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(99, 39);
			this->button15->TabIndex = 9;
			this->button15->Text = L"Case";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(463, 136);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(99, 39);
			this->button14->TabIndex = 8;
			this->button14->Text = L"PSU";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(463, 61);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(99, 39);
			this->button13->TabIndex = 7;
			this->button13->Text = L"CPU Cooler";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(259, 218);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(99, 39);
			this->button12->TabIndex = 6;
			this->button12->Text = L"Cooler";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(259, 136);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(99, 39);
			this->button11->TabIndex = 5;
			this->button11->Text = L"Storage";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(259, 61);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(115, 39);
			this->button10->TabIndex = 4;
			this->button10->Text = L"Motherboard";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(59, 218);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(99, 39);
			this->button9->TabIndex = 3;
			this->button9->Text = L"RAM";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(59, 141);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(99, 39);
			this->button8->TabIndex = 2;
			this->button8->Text = L"GPU";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(59, 61);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 39);
			this->button7->TabIndex = 1;
			this->button7->Text = L"CPU";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(283, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"PC Part List";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"PC Part Picker";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->MotherBoardPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->motherboards))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			panel1->Show();
		}
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			panel1->Hide();
		}


		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			panel2->Show();
		}
		private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
			panel2->Hide();
		}



		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			panel3->Show();
		}

		private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
			panel3->Hide();
		}

	private:System::Void PopulateDataGridView(DataGridView^ dataGridView1)
	{
		// Sample data vectors
		//std::vector<std::string> row1Data = CPUdata[0];
		// Clear existing rows if necessary
		dataGridView1->Rows->Clear();

		// Iterate over each vector<string> in CPUdata
		for (int i = 0; i < CPUdata.size(); i++)
		{
			// Create a new DataGridViewRow for each entry in CPUdata
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView1); // Prepare the row to have cells like dataGridView1

			// Now fill in the cells with values from CPUdata
			for (int j = 0; j < CPUdata[i].size() && j < row->Cells->Count; j++)
			{
				// Add the data to each cell
				row->Cells[j]->Value = gcnew System::String(CPUdata[i][j].c_str());
			}

			// After setting all the cells for the row, add the row to the DataGridView
			dataGridView1->Rows->Add(row);
		}

 			// Add data to DataGridView horizontally
		

		
	}

		   // Assume OutputLabel is the name of the Label on your form.
		   
/*private: System::Void Display()
{
	if (CPUdata.size() > 0 && CPUdata[0].size() > 0)
	{
		
		OutputLabel->Text = gcnew System::String((CPUs[0].getCores()).c_str());
	}
	else
	{
		OutputLabel->Text = "CPU data is not available or empty.";
	}
}*/

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Show();
}


private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Hide();
}


private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->Show();

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->Hide();

}


private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	MotherBoardPanel->Show();

}

private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	MotherBoardPanel->Hide();
}


};

}
