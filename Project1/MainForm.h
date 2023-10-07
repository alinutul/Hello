#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbFirstName;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::ToolTip^ as;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnok;
	private: System::Windows::Forms::Button^ btnclear;
	private: System::Windows::Forms::TextBox^ tbLastName;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbWelcome;


	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->as = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnok = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbFirstName
			// 
			this->tbFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFirstName->Location = System::Drawing::Point(23, 74);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(861, 35);
			this->tbFirstName->TabIndex = 0;
			this->tbFirstName->TextChanged += gcnew System::EventHandler(this, &MainForm::tbFirstName_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Firstname";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click_1);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnok, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnclear, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(118, 407);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(597, 96);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// btnok
			// 
			this->btnok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnok->Location = System::Drawing::Point(3, 3);
			this->btnok->Name = L"btnok";
			this->btnok->Size = System::Drawing::Size(280, 90);
			this->btnok->TabIndex = 0;
			this->btnok->Text = L"OK";
			this->btnok->UseVisualStyleBackColor = true;
			this->btnok->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// btnclear
			// 
			this->btnclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnclear->Location = System::Drawing::Point(301, 3);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(283, 90);
			this->btnclear->TabIndex = 1;
			this->btnclear->Text = L"Clear";
			this->btnclear->UseVisualStyleBackColor = true;
			this->btnclear->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// tbLastName
			// 
			this->tbLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbLastName->Location = System::Drawing::Point(23, 161);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(861, 35);
			this->tbLastName->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Lastname";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// lbWelcome
			// 
			this->lbWelcome->AutoSize = true;
			this->lbWelcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWelcome->Location = System::Drawing::Point(74, 254);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(299, 73);
			this->lbWelcome->TabIndex = 5;
			this->lbWelcome->Text = L"Welcome";
			this->lbWelcome->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(896, 533);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbFirstName);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"Welcome";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->lbWelcome->Text = "";
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ firstName = this->tbFirstName->Text;
	String^ lastName = this->tbLastName->Text;
	this->lbWelcome->Text = "Hello" + " " + firstName + " " + lastName;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tbFirstName->Text = "";
	this->tbLastName->Text = "";
	this->lbWelcome->Text = "";
}
private: System::Void tbFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {	
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
