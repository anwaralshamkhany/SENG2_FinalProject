#pragma once
#include <vector>
#include <string>
#include "Reading.h"
#include "CPU.h"
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

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm()
		{	
			
			InitializeComponent();

			ReadCPU(CPUdata,CPUs);
			ReadGPU();
			Display();
			
			/*ReadCooler();
			ReadPSU();
			ReadRam();
			ReadCase();
			ReadStorage();
			ReadMobo(); */
			//CPUs[0].Display();
			PopulateDataGridView();			
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
			this->OutputLabel = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(719, 432);
			this->panel1->TabIndex = 3;
			this->panel1->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(262, 315);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(120, 23);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Go Back";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(275, 237);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 48);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Editing";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(275, 172);
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
			this->label2->Location = System::Drawing::Point(259, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Choose your Pre-Build";
			// 
			// panel2
			// 
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
			this->panel2->Size = System::Drawing::Size(719, 432);
			this->panel2->TabIndex = 4;
			this->panel2->Visible = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->OutputLabel);
			this->panel3->Controls->Add(this->button17);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(719, 432);
			this->panel3->TabIndex = 11;
			this->panel3->Visible = false;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(262, 310);
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
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(59, 218);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(99, 39);
			this->button9->TabIndex = 3;
			this->button9->Text = L"RAM";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(59, 141);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(99, 39);
			this->button8->TabIndex = 2;
			this->button8->Text = L"GPU";
			this->button8->UseVisualStyleBackColor = true;
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
			// OutputLabel
			// 
			this->OutputLabel->AutoSize = true;
			this->OutputLabel->Location = System::Drawing::Point(473, 299);
			this->OutputLabel->Name = L"OutputLabel";
			this->OutputLabel->Size = System::Drawing::Size(35, 17);
			this->OutputLabel->TabIndex = 2;
			this->OutputLabel->Text = L"Text";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 432);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
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


	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Show();
	}

	private:System::Void PopulateDataGridView()
	{
		// Sample data vectors
		std::vector<std::string> row1Data = { "Data 1", "Data A", "Value X" };
		std::vector<std::string> row2Data = { "Data 2", "Data B", "Value Y" };
		std::vector<std::string> row3Data = { "Data 3", "Data C", "Value Z" };

		// Add data to DataGridView horizontally
		DataGridViewRow^ row = gcnew DataGridViewRow();

		row->CreateCells(dataGridView1);

		for (size_t i = 0; i < row1Data.size(); i++)
		{

			row->Cells[i]->Value = gcnew System::String(row1Data[i].c_str());
		}

		// Add the row to DataGridView
		dataGridView1->Rows->Add(row);
		/*
		// Add data for the second row
		row = gcnew DataGridViewRow();
		row->CreateCells(dataGridView1);

		for (size_t i = 0; i < row2Data.size(); i++)
		{

			row->Cells[i]->Value = gcnew System::String(row2Data[i].c_str());
		}
		// Add the row to DataGridView
		dataGridView1->Rows->Add(row);


		// Add data for the third row
		row = gcnew DataGridViewRow();
		row->CreateCells(dataGridView1);

		for (size_t i = 0; i < row3Data.size(); i++)
		{

			row->Cells[i]->Value = gcnew System::String(row3Data[i].c_str());
		}

		// Add the row to DataGridView
		dataGridView1->Rows->Add(row);
		*/
	}

		   // Assume OutputLabel is the name of the Label on your form.
private: System::Void Display()
{
	if (CPUdata.size() > 0 && CPUdata[0].size() > 0)
	{
		// Convert std::string to System::String
		OutputLabel->Text = gcnew System::String(CPUdata[0][0].c_str());
	}
	else
	{
		OutputLabel->Text = "CPU data is not available or empty.";
	}
}

};

}
