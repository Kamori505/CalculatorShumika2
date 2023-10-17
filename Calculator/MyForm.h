#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnSeven;
	private: System::Windows::Forms::Button^ btnEigth;
	private: System::Windows::Forms::Button^ btnNine;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnFour;

	protected:










	private: System::Windows::Forms::Button^ btnFive;



	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btnOne;


	private: System::Windows::Forms::Button^ btnTwo;

	private: System::Windows::Forms::Button^ btnThree;

	private: System::Windows::Forms::Button^ btnMul;
	private: System::Windows::Forms::Button^ btnDot;


	private: System::Windows::Forms::Button^ btnZero;

	private: System::Windows::Forms::Button^ btnTotal;


	private: System::Windows::Forms::Button^ btnDiv;


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
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnSeven = (gcnew System::Windows::Forms::Button());
			this->btnEigth = (gcnew System::Windows::Forms::Button());
			this->btnNine = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnFour = (gcnew System::Windows::Forms::Button());
			this->btnFive = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnOne = (gcnew System::Windows::Forms::Button());
			this->btnTwo = (gcnew System::Windows::Forms::Button());
			this->btnThree = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnZero = (gcnew System::Windows::Forms::Button());
			this->btnTotal = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(9, 10);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(282, 50);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::txtDisplay_TextChanged);
			// 
			// btnSeven
			// 
			this->btnSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeven->Location = System::Drawing::Point(11, 71);
			this->btnSeven->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSeven->Name = L"btnSeven";
			this->btnSeven->Size = System::Drawing::Size(67, 59);
			this->btnSeven->TabIndex = 0;
			this->btnSeven->Text = L"7";
			this->btnSeven->UseVisualStyleBackColor = true;
			this->btnSeven->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnEigth
			// 
			this->btnEigth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEigth->Location = System::Drawing::Point(82, 71);
			this->btnEigth->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnEigth->Name = L"btnEigth";
			this->btnEigth->Size = System::Drawing::Size(67, 59);
			this->btnEigth->TabIndex = 0;
			this->btnEigth->Text = L"8";
			this->btnEigth->UseVisualStyleBackColor = true;
			this->btnEigth->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnNine
			// 
			this->btnNine->AllowDrop = true;
			this->btnNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNine->Location = System::Drawing::Point(154, 71);
			this->btnNine->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnNine->Name = L"btnNine";
			this->btnNine->Size = System::Drawing::Size(67, 59);
			this->btnNine->TabIndex = 0;
			this->btnNine->Text = L"9";
			this->btnNine->UseVisualStyleBackColor = true;
			this->btnNine->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnAdd
			// 
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(225, 71);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(67, 59);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnFour
			// 
			this->btnFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFour->Location = System::Drawing::Point(11, 135);
			this->btnFour->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnFour->Name = L"btnFour";
			this->btnFour->Size = System::Drawing::Size(67, 59);
			this->btnFour->TabIndex = 0;
			this->btnFour->Text = L"4";
			this->btnFour->UseVisualStyleBackColor = true;
			this->btnFour->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnFive
			// 
			this->btnFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFive->Location = System::Drawing::Point(82, 135);
			this->btnFive->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnFive->Name = L"btnFive";
			this->btnFive->Size = System::Drawing::Size(67, 59);
			this->btnFive->TabIndex = 0;
			this->btnFive->Text = L"5";
			this->btnFive->UseVisualStyleBackColor = true;
			this->btnFive->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnSub
			// 
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(225, 135);
			this->btnSub->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(67, 59);
			this->btnSub->TabIndex = 0;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnOne
			// 
			this->btnOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOne->Location = System::Drawing::Point(11, 199);
			this->btnOne->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnOne->Name = L"btnOne";
			this->btnOne->Size = System::Drawing::Size(67, 59);
			this->btnOne->TabIndex = 0;
			this->btnOne->Text = L"1";
			this->btnOne->UseVisualStyleBackColor = true;
			this->btnOne->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnTwo
			// 
			this->btnTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTwo->Location = System::Drawing::Point(82, 199);
			this->btnTwo->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnTwo->Name = L"btnTwo";
			this->btnTwo->Size = System::Drawing::Size(67, 59);
			this->btnTwo->TabIndex = 0;
			this->btnTwo->Text = L"2";
			this->btnTwo->UseVisualStyleBackColor = true;
			this->btnTwo->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnThree
			// 
			this->btnThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThree->Location = System::Drawing::Point(154, 199);
			this->btnThree->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnThree->Name = L"btnThree";
			this->btnThree->Size = System::Drawing::Size(67, 59);
			this->btnThree->TabIndex = 0;
			this->btnThree->Text = L"3";
			this->btnThree->UseVisualStyleBackColor = true;
			this->btnThree->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnMul
			// 
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMul->Location = System::Drawing::Point(225, 199);
			this->btnMul->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(67, 59);
			this->btnMul->TabIndex = 0;
			this->btnMul->Text = L"*";
			this->btnMul->UseVisualStyleBackColor = true;
			this->btnMul->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDot
			// 
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->Location = System::Drawing::Point(11, 263);
			this->btnDot->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(67, 59);
			this->btnDot->TabIndex = 0;
			this->btnDot->Text = L"<<";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::backspace);
			// 
			// btnZero
			// 
			this->btnZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZero->Location = System::Drawing::Point(82, 263);
			this->btnZero->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnZero->Name = L"btnZero";
			this->btnZero->Size = System::Drawing::Size(67, 59);
			this->btnZero->TabIndex = 0;
			this->btnZero->Text = L"0";
			this->btnZero->UseVisualStyleBackColor = true;
			this->btnZero->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnTotal
			// 
			this->btnTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTotal->Location = System::Drawing::Point(154, 263);
			this->btnTotal->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnTotal->Name = L"btnTotal";
			this->btnTotal->Size = System::Drawing::Size(67, 59);
			this->btnTotal->TabIndex = 0;
			this->btnTotal->Text = L"=";
			this->btnTotal->UseVisualStyleBackColor = true;
			this->btnTotal->Click += gcnew System::EventHandler(this, &MyForm::totalResult);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(225, 263);
			this->btnDiv->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(67, 59);
			this->btnDiv->TabIndex = 0;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(298, 330);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnTotal);
			this->Controls->Add(this->btnThree);
			this->Controls->Add(this->btnNine);
			this->Controls->Add(this->btnZero);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btnTwo);
			this->Controls->Add(this->btnOne);
			this->Controls->Add(this->btnFive);
			this->Controls->Add(this->btnFour);
			this->Controls->Add(this->btnEigth);
			this->Controls->Add(this->btnSeven);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secDigit, result;
		String^ oprator;

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ btnNumbers = safe_cast<Button^>(sender);
	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = btnNumbers->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + btnNumbers->Text;
	}
}
private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ btnNumberOprs = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	oprator =  btnNumberOprs->Text;
}
private: System::Void totalResult(System::Object^ sender, System::EventArgs^ e) {
	secDigit = Double::Parse(txtDisplay->Text);
	if (oprator == "+")
	{
		result = firstDigit + secDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (oprator == "-")
	{
		result = firstDigit - secDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (oprator == "*")
	{
		result = firstDigit * secDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (oprator == "/")
	{
		result = firstDigit / secDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
}
private: System::Void backspace(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 0)
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
	if (txtDisplay->Text == "")
	{
		txtDisplay->Text = "0";
	}
}
};
}
