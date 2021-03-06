#pragma once
#include <msclr\marshal_cppstd.h>
#include "functions.h"
#include "LogForm.h"
#define minStock 10


namespace WarehouseGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	std::vector<productClass> products;
	std::vector<userClass> users;
	std::vector<productClass> productFiltered;
	bool filtered = false;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{

			InitializeComponent();
			panel2->Hide();
			panel3->Hide();
			panel4->Hide();
			panel5->Hide();
			users = readUsers();
			products = readDatabase();
			//dataGridView1->Rows->Add(products.size());
			//dataGridView3->Rows->Add(products.size());
			checkBox1->Checked = true;
			checkBox4->Checked = true;
			//
			//TODO: Add the constructor code here
			//
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










	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button11;





	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column7;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::DataGridView^ dataGridView3;





	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Notes;
private: System::Windows::Forms::DataGridViewCheckBoxColumn^ Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label18;


private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ button23;








	private: System::ComponentModel::IContainer^ components;

















	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Notes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Controls->Add(this->button20);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->checkBox2);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Location = System::Drawing::Point(55, 20);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(713, 481);
			this->panel2->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->Location = System::Drawing::Point(117, 448);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 20);
			this->label17->TabIndex = 24;
			this->label17->Text = L"from";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox9->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox9->Location = System::Drawing::Point(243, 446);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(54, 26);
			this->textBox9->TabIndex = 23;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox10->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox10->Location = System::Drawing::Point(160, 446);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(54, 26);
			this->textBox10->TabIndex = 22;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label18->Location = System::Drawing::Point(217, 448);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(23, 20);
			this->label18->TabIndex = 21;
			this->label18->Text = L"to";
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::RoyalBlue;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(15, 445);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(100, 28);
			this->button22->TabIndex = 18;
			this->button22->Text = L"Filter stock";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::RoyalBlue;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(623, 96);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(74, 28);
			this->button20->TabIndex = 17;
			this->button20->Text = L"Export";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::RoyalBlue;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(424, 14);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(112, 28);
			this->button15->TabIndex = 16;
			this->button15->Text = L"User Logs";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::RoyalBlue;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(424, 56);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(112, 28);
			this->button14->TabIndex = 15;
			this->button14->Text = L"Stock Logs";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::RoyalBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(542, 56);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(156, 28);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Add / Remove Stock";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gold;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Location = System::Drawing::Point(542, 15);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 27);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Save edits";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column8,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Notes
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 133);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(683, 306);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column8->Width = 25;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Product Name";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Product ID";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 110;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"# of Stock";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 110;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Aisle Location";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Notes
			// 
			this->Notes->HeaderText = L"Comments";
			this->Notes->MinimumWidth = 6;
			this->Notes->Name = L"Notes";
			this->Notes->Width = 125;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(623, 15);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 27);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Logout";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::RoyalBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(200, 99);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Stock";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::RoyalBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(87, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Name";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(10, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Sort by:";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::RoyalBlue;
			this->button5->Enabled = false;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(212, 56);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 26);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Search";
			this->button5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(255, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"or";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->checkBox2->ForeColor = System::Drawing::Color::Black;
			this->checkBox2->Location = System::Drawing::Point(284, 12);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(45, 24);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"ID";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->checkBox1->ForeColor = System::Drawing::Color::Black;
			this->checkBox1->Location = System::Drawing::Point(181, 12);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(68, 24);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"name";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(10, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 20);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Search for product by:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->Location = System::Drawing::Point(15, 56);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(199, 26);
			this->textBox3->TabIndex = 1;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->button10);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Location = System::Drawing::Point(142, 147);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(549, 212);
			this->panel3->TabIndex = 2;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::RoyalBlue;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(211, 145);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(129, 31);
			this->button11->TabIndex = 12;
			this->button11->Text = L"Clear Entries";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gold;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(431, 13);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 25);
			this->button10->TabIndex = 11;
			this->button10->Text = L"Back";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label12->Location = System::Drawing::Point(206, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(110, 20);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Enter product:";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button9->Location = System::Drawing::Point(364, 145);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(128, 31);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Remove Stock";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button6->Location = System::Drawing::Point(43, 145);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 31);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Add Stock";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label11->Location = System::Drawing::Point(394, 65);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(70, 20);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Location";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->Location = System::Drawing::Point(296, 65);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 20);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Stock";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(192, 65);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 20);
			this->label9->TabIndex = 5;
			this->label9->Text = L"ID";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(61, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Name";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(382, 93);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(110, 20);
			this->textBox7->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(269, 93);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(110, 20);
			this->textBox6->TabIndex = 2;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(156, 93);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(110, 20);
			this->textBox5->TabIndex = 1;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged_1);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(43, 93);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 20);
			this->textBox4->TabIndex = 0;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(0, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(450, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 113);
			this->label1->MaximumSize = System::Drawing::Size(450, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(450, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign In";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->MaximumSize = System::Drawing::Size(450, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(450, 93);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Welcome to the Omni-Warehouse";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(143, 203);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(0, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(450, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(143, 272);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(170, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(143, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(185, 62);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(449, 427);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label13->Location = System::Drawing::Point(179, 373);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Create new account";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->button13);
			this->panel4->Controls->Add(this->dataGridView2);
			this->panel4->Location = System::Drawing::Point(176, 73);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(468, 359);
			this->panel4->TabIndex = 3;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::RoyalBlue;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(265, 319);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(92, 28);
			this->button12->TabIndex = 3;
			this->button12->Text = L"Save";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::RoyalBlue;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(363, 319);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(92, 28);
			this->button13->TabIndex = 2;
			this->button13->Text = L"Return to Login";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column5,
					this->Column6, this->Column7
			});
			this->dataGridView2->Location = System::Drawing::Point(9, 10);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(449, 301);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Username";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Password";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Admin Access";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column7->Width = 125;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->textBox11);
			this->panel5->Controls->Add(this->textBox12);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->button23);
			this->panel5->Controls->Add(this->button21);
			this->panel5->Controls->Add(this->dataGridView3);
			this->panel5->Controls->Add(this->button16);
			this->panel5->Controls->Add(this->button17);
			this->panel5->Controls->Add(this->button18);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->button19);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->checkBox3);
			this->panel5->Controls->Add(this->checkBox4);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->textBox8);
			this->panel5->Location = System::Drawing::Point(55, 22);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(713, 481);
			this->panel5->TabIndex = 15;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label19->Location = System::Drawing::Point(117, 449);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 20);
			this->label19->TabIndex = 29;
			this->label19->Text = L"from";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox11->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox11->Location = System::Drawing::Point(243, 447);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(54, 26);
			this->textBox11->TabIndex = 28;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox12->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox12->Location = System::Drawing::Point(160, 447);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(54, 26);
			this->textBox12->TabIndex = 27;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label20->Location = System::Drawing::Point(217, 449);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(23, 20);
			this->label20->TabIndex = 26;
			this->label20->Text = L"to";
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::RoyalBlue;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(15, 446);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(100, 28);
			this->button23->TabIndex = 25;
			this->button23->Text = L"Filter stock";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::RoyalBlue;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(623, 94);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(74, 28);
			this->button21->TabIndex = 18;
			this->button21->Text = L"Export";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column9,
					this->dataGridViewTextBoxColumn1, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5
			});
			this->dataGridView3->Location = System::Drawing::Point(15, 133);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(683, 305);
			this->dataGridView3->TabIndex = 11;
			this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellClick);
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column9->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column9->Width = 25;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Product Name";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Product ID";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 110;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"# of Stock";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 110;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Aisle Location";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Comments";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Location = System::Drawing::Point(623, 15);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 27);
			this->button16->TabIndex = 10;
			this->button16->Text = L"Logout";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::RoyalBlue;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(200, 99);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 28);
			this->button17->TabIndex = 9;
			this->button17->Text = L"Stock";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::RoyalBlue;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(87, 99);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(100, 28);
			this->button18->TabIndex = 8;
			this->button18->Text = L"Name";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label14->Location = System::Drawing::Point(10, 99);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(63, 20);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Sort by:";
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::RoyalBlue;
			this->button19->Enabled = false;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Location = System::Drawing::Point(212, 50);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(88, 26);
			this->button19->TabIndex = 6;
			this->button19->Text = L"Search";
			this->button19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label15->Location = System::Drawing::Point(255, 13);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 20);
			this->label15->TabIndex = 5;
			this->label15->Text = L"or";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->checkBox3->ForeColor = System::Drawing::Color::Black;
			this->checkBox3->Location = System::Drawing::Point(284, 12);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(45, 24);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"ID";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->checkBox4->ForeColor = System::Drawing::Color::Black;
			this->checkBox4->Location = System::Drawing::Point(181, 12);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(68, 24);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"name";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label16->Location = System::Drawing::Point(10, 11);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(165, 20);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Search for product by:";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox8->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox8->Location = System::Drawing::Point(15, 50);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(199, 26);
			this->textBox8->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(822, 513);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Omni-Warehouse";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void refreshListAdmin(System::Object^ sender, System::EventArgs^ e, std::vector<productClass> v) { // refresh admin list from vector
	dataGridView1->Rows->Clear();
	if (v.size() > 0) {
		dataGridView1->Rows->Add(v.size());
	}
	
	for (int i = 0; i < v.size(); i++) {
		dataGridView1->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(v[i].itemName);
		dataGridView1->Rows[i]->Cells[2]->Value = v[i].itemNum;
		dataGridView1->Rows[i]->Cells[3]->Value = v[i].stock;
		dataGridView1->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<String^>(v[i].itemLoc);
		dataGridView1->Rows[i]->Cells[5]->Value = msclr::interop::marshal_as<String^>(v[i].comment);
	}
}
private: System::Void refreshListEmp(System::Object^ sender, System::EventArgs^ e, std::vector<productClass> v) { // refresh employee list from vector
	dataGridView3->Rows->Clear();
	if (v.size() > 0) {
		dataGridView3->Rows->Add(v.size());
	}

	for (int i = 0; i < v.size(); i++) {
		dataGridView3->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(v[i].itemName);
		dataGridView3->Rows[i]->Cells[2]->Value = v[i].itemNum;
		dataGridView3->Rows[i]->Cells[3]->Value = v[i].stock;
		dataGridView3->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<String^>(v[i].itemLoc);
		dataGridView3->Rows[i]->Cells[5]->Value = msclr::interop::marshal_as<String^>(v[i].comment);
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //login button
	bool loginCorrect = false;

	time_t tt;
	struct tm* ti;
	time(&tt);
	ti = localtime(&tt);//create current timestamp

	for (int i = 0; i < users.size(); i++) {
		if ((msclr::interop::marshal_as<std::string>(textBox1->Text) ==
			users[i].username) && (msclr::interop::marshal_as<std::string>(textBox2->Text) == users[i].password) && (users[i].isAdmin == 1)) { //admin acc
			panel1->Hide();
			panel2->Show();
			textBox2->Text = "";
			refreshListAdmin(sender, e, products);

			loginCorrect = true;
			break;
		}
		else if ((msclr::interop::marshal_as<std::string>(textBox1->Text) ==
			users[i].username) && (msclr::interop::marshal_as<std::string>(textBox2->Text) == users[i].password) && (users[i].isAdmin == 0)) { //user acc
			panel1->Hide();
			panel5->Show();
			textBox2->Text = "";
			refreshListEmp(sender, e, products);
			loginCorrect = true;
			break;
		}
	}
	if (loginCorrect == false) {
		MessageBox::Show("User not found or login typed incorrectly", "Warning",
			MessageBoxButtons::OK);
	}
	else {
		std::fstream out("UserLogs.txt", std::ios::app);
		out << asctime(ti) << "\t- Username: " << msclr::interop::marshal_as<std::string>(textBox1->Text)
			<< " signed in" << std::endl;
		out.close();
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //logout without saving button

	time_t tt;
	struct tm* ti;
	time(&tt);
	ti = localtime(&tt);//create current timestamp


	if (MessageBox::Show("Do you wish to proceed? Any unsaved changes may be lost", "Warning", MessageBoxButtons::YesNo) ==
		System::Windows::Forms::DialogResult::Yes) {
		std::fstream out("UserLogs.txt", std::ios::app);
		out << asctime(ti) << "\t- Username: " << msclr::interop::marshal_as<std::string>(textBox1->Text)
			<< " signed out" << std::endl;
		out.close();
		textBox1->Text = "";
		filtered = false;
		textBox10->Text = "";
		textBox9->Text = "";
		textBox3->Text = "";
		panel2->Hide();
		panel1->Show();
	}
}

private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		if (System::Convert::ToBoolean(dataGridView1->Rows[i]->Cells["Column8"]->Value) == true) {
			dataGridView1->Rows[i]->Cells[0]->Style->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridView1->Rows[i]->Cells[1]->Style->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridView1->Rows[i]->Cells[2]->Style->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridView1->Rows[i]->Cells[3]->Style->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridView1->Rows[i]->Cells[4]->Style->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridView1->Rows[i]->Cells[5]->Style->BackColor = System::Drawing::Color::RoyalBlue;
		}
		else {
			dataGridView1->Rows[i]->Cells[0]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridView1->Rows[i]->Cells[1]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridView1->Rows[i]->Cells[2]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridView1->Rows[i]->Cells[3]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridView1->Rows[i]->Cells[4]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridView1->Rows[i]->Cells[5]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		}
	}
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //sort by name button
	if (filtered) {
		std::sort(productFiltered.begin(), productFiltered.end(), compareNames);
		refreshListAdmin(sender, e, productFiltered);
	}
	else {
		std::sort(products.begin(), products.end(), compareNames);
		refreshListAdmin(sender, e, products);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //sort by number button
	if (filtered) {
		std::sort(productFiltered.begin(), productFiltered.end(), compareStock);
		refreshListAdmin(sender, e, productFiltered);
	}
	else {
		std::sort(products.begin(), products.end(), compareStock);
		refreshListAdmin(sender, e, products);
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { //name checkbox
	if (checkBox1->Checked) {
		checkBox2->Checked = false;
		button5->Enabled = true;
	}
	else if (checkBox1->Checked && checkBox2->Checked) {
		button5->Enabled = false;
	}
	else {
		button5->Enabled = false;
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { //ID checkbox
	if (checkBox2->Checked) {
		checkBox1->Checked = false;
		button5->Enabled = true;
	}
	else if (checkBox1->Checked && checkBox2->Checked) {
		button5->Enabled = false;
	}
	else {
		button5->Enabled = false;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { //Search Button
	bool found = false;
	if (checkBox1->Checked) {
		
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			if (textBox3->Text == dataGridView1->Rows[i]->Cells[1]->Value->ToString()) {
			dataGridView1->CurrentCell = dataGridView1->Rows[i]->Cells[1];
			dataGridView1->FirstDisplayedScrollingRowIndex = i;
			found = true;
			}
		}
		if (found == false) {
			MessageBox::Show("Product not found in Warehouse or typed incorrectly", "System Message",
				MessageBoxButtons::OK);
		}
	}
	else if (checkBox2->Checked) {
		for (int i = 0; i < products.size(); i++) {
			if (textBox3->Text == dataGridView1->Rows[i]->Cells[2]->Value->ToString()) {
				dataGridView1->CurrentCell = dataGridView1->Rows[i]->Cells[2];
				dataGridView1->FirstDisplayedScrollingRowIndex = i;
				found = true;
			}
		}
		if (found == false) {
			MessageBox::Show("Product not found in Warehouse or typed incorrectly", "System Message",
				MessageBoxButtons::OK);
		}
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) { //add & remove stock button
	panel2->Hide();
	panel3->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) { //back button from add & remove stock
	panel3->Hide();
	panel2->Show();
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { //save button
	bool checkNull = false;
	if (filtered == false) {
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			if (dataGridView1->Rows[i]->Cells[1]->Value == nullptr || dataGridView1->Rows[i]->Cells[2]->Value == nullptr
				|| dataGridView1->Rows[i]->Cells[3]->Value == nullptr || dataGridView1->Rows[i]->Cells[4]->Value == nullptr
				|| dataGridView1->Rows[i]->Cells[5]->Value == nullptr) {
				checkNull = true;
				dataGridView1->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(products[i].itemName);
				dataGridView1->Rows[i]->Cells[2]->Value = products[i].itemNum;
				dataGridView1->Rows[i]->Cells[3]->Value = products[i].stock;
				dataGridView1->Rows[i]->Cells[4]->Value = msclr::interop::marshal_as<String^>(products[i].itemLoc);
				dataGridView1->Rows[i]->Cells[5]->Value = msclr::interop::marshal_as<String^>(products[i].comment);

			}
			else {
				products[i].itemName = msclr::interop::marshal_as<std::string>(dataGridView1->Rows[i]->Cells[1]->Value->ToString());
				products[i].stock = std::stoi(msclr::interop::marshal_as<std::string>(dataGridView1->Rows[i]->Cells[3]->Value->ToString()));
				products[i].itemNum = std::stoi(msclr::interop::marshal_as<std::string>(dataGridView1->Rows[i]->Cells[2]->Value->ToString()));
				products[i].itemLoc = msclr::interop::marshal_as<std::string>(dataGridView1->Rows[i]->Cells[4]->Value->ToString());
				products[i].comment = msclr::interop::marshal_as<std::string>(dataGridView1->Rows[i]->Cells[5]->Value->ToString());
			}
		}
		writeDatabase(products);
		if (checkNull == true) {
			MessageBox::Show("Some fields were blank. Changes on those rows have not been saved", "Warning", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("All changes successfully saved", "System Message", MessageBoxButtons::OK);
		}
	}
	else {
		MessageBox::Show("Remove filter before saving. No saves applied", "Warning", MessageBoxButtons::OK);
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) { //product name enter box
	bool inVec = false;
	for (int i = 0; i < products.size(); i++) {
		if (msclr::interop::marshal_as<std::string>(textBox4->Text) == products[i].itemName) {
			inVec = true;
			textBox5->Enabled = false;
			textBox7->Enabled = false;
			break;
		}
		else {
			textBox5->Enabled = true;
			textBox7->Enabled = true;
		}
	}
}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) { // add stock button
	
	time_t tt;
	struct tm* ti;
	time(&tt);
	ti = localtime(&tt);//create current timestamp

	bool inVec = false;
	int pIndex = 0;
	productClass tempProduct;
	if (((textBox4->Text != "") && (textBox6->Text != "")) || ((textBox5->Text != "") && (textBox6->Text != ""))) {
		for (int i = 0; i < products.size(); i++) { // check to see if stock exists under same name
			if (msclr::interop::marshal_as<std::string>(textBox4->Text) == products[i].itemName) {
				inVec = true;
				pIndex = i;
				break;
			}
			else if ((textBox5->Text != "") && (std::stoi(msclr::interop::marshal_as<std::string>(textBox5->Text)) == products[i].itemNum)) {
				inVec = true;
				pIndex = i;
				break;
			}
		}

		if (inVec == true) { //already existing entry
			if (std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text)) <= 0) {
				MessageBox::Show("Stock must be greater than 0", "Warning", MessageBoxButtons::OK);
			}
			else if (std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text)) > 0) {
				products[pIndex].stock = products[pIndex].stock + std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text));
				//add this to item log
				if (products[pIndex].stock >= minStock && products[pIndex].comment == "Low Stock") {
					products[pIndex].comment = "none";
				}
				std::fstream out("productLogs.txt", std::ios::app);
				out << asctime(ti) << "\t- Item Added: " << products[pIndex].itemName
					<< ", quantity: " << std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text)) << "\n";
				out.close();
				MessageBox::Show("Stock successfully added", "System Message", MessageBoxButtons::OK);
			}
		}
		else { //new stock entry
			if ((textBox5->Text != "") && (textBox7->Text != "")) {
				if (std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text)) <= 0) {
					MessageBox::Show("Stock must be greater than 0", "Warning", MessageBoxButtons::OK);
				}
				else if (std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text)) > 0) {
					tempProduct.itemName = msclr::interop::marshal_as<std::string>(textBox4->Text);
					tempProduct.itemNum = std::stoi(msclr::interop::marshal_as<std::string>(textBox5->Text));
					tempProduct.stock = std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text));
					tempProduct.itemLoc = msclr::interop::marshal_as<std::string>(textBox7->Text);
					if (tempProduct.stock < minStock) {
						tempProduct.comment = "Low Stock";
					}
					else {
						tempProduct.comment = "none";
					}
					products.push_back(tempProduct);
					//add the stock to the item added log
					std::fstream out("productLogs.txt", std::ios::app);
					out << asctime(ti) << "\t- Item Added: " << msclr::interop::marshal_as<std::string>(textBox4->Text)
						<< ", quantity: " << std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text)) << "\n";
					out.close();
					MessageBox::Show("Product successfully added", "System Message", MessageBoxButtons::OK);
				}
			}
			else {
				MessageBox::Show("Selected fields must not be blank", "Warning", MessageBoxButtons::OK);
			}
		}
		writeDatabase(products);

		refreshListAdmin(sender, e, products);
		textBox10->Text = "";
		textBox9->Text = "";
		filtered = false;
	}
	else {
		MessageBox::Show("Selected fields must not be blank", "Warning", MessageBoxButtons::OK);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) { //delete stock button

	time_t tt;
	struct tm* ti;
	time(&tt);
	ti = localtime(&tt);//create current timestamp

	bool inVec = false;
	int pIndex = 0;
	productClass tempProduct;
	if (((textBox4->Text != "") && (textBox6->Text != "")) || ((textBox5->Text != "") && (textBox6->Text != ""))) {
		for (int i = 0; i < products.size(); i++) { // check to see if stock exists under same name
			if (msclr::interop::marshal_as<std::string>(textBox4->Text) == products[i].itemName) {
				inVec = true;
				pIndex = i;
				break;
			}
			else if ((textBox5->Text != "") && std::stoi(msclr::interop::marshal_as<std::string>(textBox5->Text)) == products[i].itemNum) {
				inVec = true;
				pIndex = i;
				break;
			}
		}

		if (inVec == true) { //item in the database
			if (std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text)) <= 0) {
				MessageBox::Show("Stock to remove must be greater than 0", "Warning", MessageBoxButtons::OK);
			}
			else if (std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text)) > 0) {
				products[pIndex].stock = products[pIndex].stock - std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text));

				std::fstream out("productLogs.txt", std::ios::app);
				out << asctime(ti) << "\t- Item Removed: " << products[pIndex].itemName
					<< ", quantity: " << std::stoi(msclr::interop::marshal_as<std::string>(textBox6->Text)) << "\n";
				out.close();

				if (products[pIndex].stock <= 0) {
					products.erase(products.begin() + pIndex);
				}
				else if ((products[pIndex].stock > 0 && products[pIndex].stock < minStock) && products[pIndex].comment == "none") {
					products[pIndex].comment = "Low Stock";
				}
				writeDatabase(products);
				
				refreshListAdmin(sender, e, products);
				textBox10->Text = "";
				textBox9->Text = "";
				filtered = false;

				MessageBox::Show("Stock successfully removed", "System Message", MessageBoxButtons::OK);
			}
		}
		else {
			MessageBox::Show("Item not found or typed incorrectly", "Warning", MessageBoxButtons::OK);
		}
	}
	else {
		MessageBox::Show("Selected fields must not be blank", "Warning", MessageBoxButtons::OK);
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) { //create account
	users = readUsers();
	bool isCorrect = true;
	for (int i = 0; i < users.size(); i++) {
		if ((msclr::interop::marshal_as<std::string>(textBox1->Text) == 
			users[i].username) && (msclr::interop::marshal_as<std::string>(textBox2->Text) == users[i].password) && (users[i].isAdmin == 1)) {
			panel1->Hide();
			panel4->Show();
			textBox1->Text = "";
			textBox2->Text = "";
			dataGridView2->Rows->Add(users.size());
			for (int i = 0; i < users.size(); i++) {
				dataGridView2->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(users[i].username);
				dataGridView2->Rows[i]->Cells[1]->Value = msclr::interop::marshal_as<String^>(users[i].password);
				if (users[i].isAdmin == 1) {
					dataGridView2->Rows[i]->Cells["Column7"]->Value = true;
				}
				else {
					dataGridView2->Rows[i]->Cells["Column7"]->Value = false;
				}
			}
			isCorrect = true;
			break;
		}
		else if ((msclr::interop::marshal_as<std::string>(textBox1->Text) ==
			users[i].username) && (msclr::interop::marshal_as<std::string>(textBox2->Text) == users[i].password) && (users[i].isAdmin == 0))
		{
			MessageBox::Show("You do not have access to manage user accounts", "Warning",
				MessageBoxButtons::OK);
			isCorrect = true;
			break;
		}
		else {
			isCorrect = false;
		}
	}
	if (isCorrect == false) {
		MessageBox::Show("You must enter an Administrator's correct login details to manage user accounts", "System Message",
			MessageBoxButtons::OK);
	}

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) { // save accounts
	std::ofstream outFile("users.txt");
	bool saveSuccess = true;
	for (int i = 0; i < dataGridView2->Rows->Count; i++) {
		int isAdmin = 0;
		if (System::Convert::ToBoolean(dataGridView2->Rows[i]->Cells["Column7"]->Value) == true) {
			isAdmin = 1;
		}
		if ((dataGridView2->Rows[i]->Cells[1]->Value != nullptr) && (dataGridView2->Rows[i]->Cells[1]->Value != nullptr)) {
			outFile << msclr::interop::marshal_as<std::string>(dataGridView2->Rows[i]->Cells[0]->Value->ToString()) << " "
				<< msclr::interop::marshal_as<std::string>(dataGridView2->Rows[i]->Cells[1]->Value->ToString()) << " "
				<< isAdmin << std::endl;
		}
		else if (((dataGridView2->Rows[i]->Cells[0]->Value != nullptr) && (dataGridView2->Rows[i]->Cells[1]->Value == nullptr)) || 
			((dataGridView2->Rows[i]->Cells[0]->Value == nullptr) && (dataGridView2->Rows[i]->Cells[1]->Value != nullptr))) {
			saveSuccess = false;
		}
		
	}
	if (saveSuccess == true) {
		MessageBox::Show("Accounts have been saved successfully", "System Message",
			MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Some fields must not be blank", "Warning",
			MessageBoxButtons::OK);
	}
	users = readUsers();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Hide();
	panel1->Show();
	dataGridView2->Rows->Clear();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) { //sort employee list by stock
	if (filtered) {
		std::sort(productFiltered.begin(), productFiltered.end(), compareStock);
		refreshListEmp(sender, e, productFiltered);
	}
	else {
		std::sort(products.begin(), products.end(), compareStock);
		refreshListEmp(sender, e, products);
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) { // sort employee list by name
	if (filtered) {
		std::sort(productFiltered.begin(), productFiltered.end(), compareNames);
		refreshListEmp(sender, e, productFiltered);
	}
	else {
		std::sort(products.begin(), products.end(), compareNames);
		refreshListEmp(sender, e, products);
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) { //search button employee
	bool found = false;
	if (checkBox4->Checked) { //search by name

		for (int i = 0; i < dataGridView3->Rows->Count; i++) {
			if (textBox8->Text == dataGridView3->Rows[i]->Cells[1]->Value->ToString()) {
				dataGridView3->CurrentCell = dataGridView3->Rows[i]->Cells[1];
				dataGridView3->FirstDisplayedScrollingRowIndex = i;
				found = true;
			}
		}
		if (found == false) {
			MessageBox::Show("Product not found in Warehouse or typed incorrectly", "System Message",
				MessageBoxButtons::OK);
		}
	}
	else if (checkBox3->Checked) { //search by number
		for (int i = 0; i < dataGridView3->Rows->Count; i++) {
			if (textBox8->Text == dataGridView3->Rows[i]->Cells[2]->Value->ToString()) {
				dataGridView3->CurrentCell = dataGridView3->Rows[i]->Cells[2];
				dataGridView3->FirstDisplayedScrollingRowIndex = i;
				found = true;
			}
		}
		if (found == false) {
			MessageBox::Show("Product not found in Warehouse or typed incorrectly", "System Message",
				MessageBoxButtons::OK);
		}
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox4->Checked) {
		checkBox3->Checked = false;
		button19->Enabled = true;
	}
	else if (checkBox4->Checked && checkBox3->Checked) {
		button19->Enabled = false;
	}
	else {
		button19->Enabled = false;
	}
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked) {
		checkBox4->Checked = false;
		button19->Enabled = true;
	}
	else if (checkBox4->Checked && checkBox3->Checked) {
		button19->Enabled = false;
	}
	else {
		button19->Enabled = false;
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) { //logout button employee
	time_t tt;
	struct tm* ti;
	time(&tt);
	ti = localtime(&tt);//create current timestamp

	std::fstream out("UserLogs.txt", std::ios::app);
	out << asctime(ti) << "\t- Username: " << msclr::interop::marshal_as<std::string>(textBox1->Text)
		<< " signed out" << std::endl;
	out.close();
	textBox1->Text = "";
	textBox8->Text = "";
	textBox12->Text = "";
	textBox11->Text = "";
	filtered = false;
	panel5->Hide();
	panel1->Show();
}
private: System::Void dataGridView3_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) { //datagridchanged
	
	for (int i = 0; i < dataGridView3->Rows->Count; i++) {
		if (System::Convert::ToBoolean(dataGridView3->Rows[i]->Cells["Column9"]->Value) == true) {
			dataGridView3->Rows[i]->Cells[0]->Style->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridView3->Rows[i]->Cells[1]->Style->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridView3->Rows[i]->Cells[2]->Style->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridView3->Rows[i]->Cells[3]->Style->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridView3->Rows[i]->Cells[4]->Style->BackColor = System::Drawing::Color::RoyalBlue;
			dataGridView3->Rows[i]->Cells[5]->Style->BackColor = System::Drawing::Color::RoyalBlue;
		}
		else {
			dataGridView3->Rows[i]->Cells[0]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridView3->Rows[i]->Cells[1]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridView3->Rows[i]->Cells[2]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridView3->Rows[i]->Cells[3]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridView3->Rows[i]->Cells[4]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridView3->Rows[i]->Cells[5]->Style->BackColor = System::Drawing::SystemColors::ButtonHighlight;
		}
	}
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) { // user log
	LogForm^ form2 = gcnew LogForm(false);
	form2->ShowDialog();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) { //stock log
	LogForm^ form2 = gcnew LogForm(true);
	form2->ShowDialog();
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream outFile("Export.txt");
	bool boxSelected = false;

	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		if (System::Convert::ToBoolean(dataGridView1->Rows[i]->Cells["Column8"]->Value) == true) {
			boxSelected = true;
			outFile << products[i].itemNum << " " << products[i].stock << " " << products[i].itemName << " " << products[i].itemLoc << " "
				<< products[i].comment << " " << "~" << std::endl;
		}
	}
	if (boxSelected == true) {
		MessageBox::Show("Products successfully exported to \"Export.txt\"", "System Message", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("No proucts selected to export", "System Message", MessageBoxButtons::OK);
	}
	outFile.close();
}

private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream outFile("Export.txt");
	bool boxSelected = false;

	for (int i = 0; i < dataGridView3->Rows->Count; i++) {
		if (System::Convert::ToBoolean(dataGridView3->Rows[i]->Cells["Column9"]->Value) == true) {
			boxSelected = true;
			outFile << products[i].itemNum << " " << products[i].stock << " " << products[i].itemName << " " << products[i].itemLoc << " "
				<< products[i].comment << " " << "~" << std::endl;
		}
	}
	if (boxSelected == true) {
		MessageBox::Show("Products successfully exported to \"Export.txt\"", "System Message", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("No proucts selected to export", "System Message", MessageBoxButtons::OK);
	}
	outFile.close();
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) { //filter stock button
	productFiltered.clear();
	std::string box1 = msclr::interop::marshal_as<std::string>(textBox10->Text);
	std::string box2 = msclr::interop::marshal_as<std::string>(textBox9->Text);

	if (box1 == "" && box2 == "") {
		refreshListAdmin(sender, e, products);
		MessageBox::Show("Active filters removed", "System Message", MessageBoxButtons::OK);
		filtered = false;
	}
	else if ((box1 == "" && box2 != "") || (box1 != "" && box2 == "")){
		MessageBox::Show("Some ranges are blank. No filters will be applied", "Warning", MessageBoxButtons::OK);
	}
	else {
		bool check1 = true;
		bool check2 = true;
		for (int i = 0; i < box1.length(); i++) {
			if (std::isdigit(box1[i]) == false) {
				check1 = false;
			}
		}
		for (int i = 0; i < box2.length(); i++) {
			if (std::isdigit(box2[i]) == false) {
				check2 = false;
			}
		}
		if (check1 == true && check2 == true) {
			for (int i = 0; i < products.size(); i++) {
				if (products[i].stock >= std::stoi(box1) && products[i].stock <= std::stoi(box2)) {
					productFiltered.push_back(products[i]);
				}
			}
			refreshListAdmin(sender, e, productFiltered);
			filtered = true;
			MessageBox::Show("Filter successfully applied", "System Message", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("No filters applied. Filter criteria must be an integer", "Warning", MessageBoxButtons::OK);
		}
	}
}
private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	bool inVec = false;
	for (int i = 0; i < products.size(); i++) {
		if (msclr::interop::marshal_as<std::string>(textBox5->Text) == std::to_string(products[i].itemNum)) {
			inVec = true;
			textBox4->Enabled = false;
			textBox7->Enabled = false;
			break;
		}
		else {
			textBox4->Enabled = true;
			textBox7->Enabled = true;
		}
	}
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) { //filter employee 
	productFiltered.clear();
	std::string box1 = msclr::interop::marshal_as<std::string>(textBox12->Text);
	std::string box2 = msclr::interop::marshal_as<std::string>(textBox11->Text);

	if (box1 == "" && box2 == "") {
		refreshListAdmin(sender, e, products);
		MessageBox::Show("Active filters removed", "System Message", MessageBoxButtons::OK);
		filtered = false;
	}
	else if ((box1 == "" && box2 != "") || (box1 != "" && box2 == "")) {
		MessageBox::Show("Some ranges are blank. No filters will be applied", "Warning", MessageBoxButtons::OK);
	}
	else {
		bool check1 = true;
		bool check2 = true;
		for (int i = 0; i < box1.length(); i++) {
			if (std::isdigit(box1[i]) == false) {
				check1 = false;
			}
		}
		for (int i = 0; i < box2.length(); i++) {
			if (std::isdigit(box2[i]) == false) {
				check2 = false;
			}
		}
		if (check1 == true && check2 == true) {
			for (int i = 0; i < products.size(); i++) {
				if (products[i].stock >= std::stoi(box1) && products[i].stock <= std::stoi(box2)) {
					productFiltered.push_back(products[i]);
				}
			}
			refreshListEmp(sender, e, productFiltered);
			filtered = true;
			MessageBox::Show("Filter successfully applied", "System Message", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("No filters applied. Filter criteria must be a positive integer", "Warning", MessageBoxButtons::OK);
		}
	}
}
};
}
