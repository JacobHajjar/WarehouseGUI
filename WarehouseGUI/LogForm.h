#pragma once

namespace WarehouseGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogForm
	/// </summary>
	public ref class LogForm : public System::Windows::Forms::Form
	{
	public:
		LogForm(bool type) //constructor
		{
			InitializeComponent();
			panel1->Hide();
			panel2->Hide();
			if (type == true) {
				panel1->Show();
			}
			else {
				panel2->Show();
			}
			std::ifstream input("productLogs.txt"); 
			std::string line;
			std::string productLog;
			while (getline(input, line)) {
				textBox1->Text = textBox1->Text + msclr::interop::marshal_as<String^>(line) + Environment::NewLine;
			}
			input.close();

			std::ifstream input2("UserLogs.txt");
			std::string userLog;
			while (getline(input2, line)) {
				textBox2->Text = textBox2->Text + msclr::interop::marshal_as<String^>(line) + Environment::NewLine;
			}
			input2.close();

			textBox1->Select(0, 0);
			textBox2->Select(0, 0);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(413, 511);
			this->panel1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(0, 9);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(413, 501);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LogForm::textBox1_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(12, 15);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(413, 508);
			this->panel2->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(0, 7);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(413, 501);
			this->textBox2->TabIndex = 1;
			// 
			// LogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 535);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"LogForm";
			this->Text = L"Logs";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
