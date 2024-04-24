#pragma once

namespace oykun {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ ans;

	private: System::Windows::Forms::TextBox^ yil;
	private: System::Windows::Forms::TextBox^ oy;


	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ans = (gcnew System::Windows::Forms::Label());
			this->yil = (gcnew System::Windows::Forms::TextBox());
			this->oy = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 40);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Yil:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 141);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Oy:";
			// 
			// ans
			// 
			this->ans->AutoSize = true;
			this->ans->Location = System::Drawing::Point(41, 226);
			this->ans->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->ans->Name = L"ans";
			this->ans->Size = System::Drawing::Size(134, 28);
			this->ans->TabIndex = 2;
			this->ans->Text = L"Kunlar soni : ";
			// 
			// yil
			// 
			this->yil->Location = System::Drawing::Point(188, 40);
			this->yil->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->yil->Name = L"yil";
			this->yil->Size = System::Drawing::Size(148, 36);
			this->yil->TabIndex = 3;
			// 
			// oy
			// 
			this->oy->Location = System::Drawing::Point(188, 141);
			this->oy->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->oy->Name = L"oy";
			this->oy->Size = System::Drawing::Size(148, 36);
			this->oy->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(409, 92);
			this->button1->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 41);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Xisoblash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Beige;
			this->ClientSize = System::Drawing::Size(623, 304);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->oy);
			this->Controls->Add(this->yil);
			this->Controls->Add(this->ans);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int year = Convert::ToInt32(yil->Text);
		int month = Convert::ToInt32(oy->Text);
		if (month == 2)
		{
			if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
			ans->Text = "Kunlar soni : 29";
			else ans->Text = "Kunlar soni : 28";
		}
		else
		{
			if (month > 12 && month < 1) {
				ans->Text = "Xato kiritildi";
			}
			else
			switch (month)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12: ans->Text = "Kunlar soni : 31"; break;
			default:ans->Text = "Kunlar soni : 30";
				break;
			}
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
