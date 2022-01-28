#include "question1.h"
#include "question2.h"
#include "question3.h"
#include "question4.h"
#include "question5.h"
#include "question6.h"
#include "question7.h"
#include "question8.h"
#include "question9.h"
#include "question10.h"
#include "question11.h"
#include "question12.h"
#include "question13.h"
#include "question14.h"
#include "question15.h"
#include "question16.h"
#include "global.h"
#pragma once

namespace KursProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для questions
	/// </summary>
	public ref class questions : public System::Windows::Forms::Form
	{
	public:
		questions(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~questions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
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
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button18);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button17);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->button14);
			this->groupBox2->Controls->Add(this->button13);
			this->groupBox2->Controls->Add(this->button12);
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(489, 142);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Вопросы";
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(409, 92);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(49, 37);
			this->button18->TabIndex = 27;
			this->button18->Text = L"16";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Visible = false;
			this->button18->Click += gcnew System::EventHandler(this, &questions::button18_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(409, 49);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 37);
			this->button10->TabIndex = 19;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &questions::button10_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(353, 92);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 37);
			this->button17->TabIndex = 26;
			this->button17->Text = L"15";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Visible = false;
			this->button17->Click += gcnew System::EventHandler(this, &questions::button17_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(297, 92);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 37);
			this->button16->TabIndex = 25;
			this->button16->Text = L"14";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &questions::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(241, 92);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 37);
			this->button15->TabIndex = 24;
			this->button15->Text = L"13";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &questions::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(185, 92);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 37);
			this->button14->TabIndex = 23;
			this->button14->Text = L"12";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &questions::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(129, 92);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 37);
			this->button13->TabIndex = 22;
			this->button13->Text = L"11";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &questions::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(17, 92);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 37);
			this->button12->TabIndex = 21;
			this->button12->Text = L"9";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &questions::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(73, 92);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 37);
			this->button11->TabIndex = 20;
			this->button11->Text = L"10";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &questions::button11_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(353, 49);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 37);
			this->button9->TabIndex = 18;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &questions::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(297, 49);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 37);
			this->button8->TabIndex = 17;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &questions::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(241, 49);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 37);
			this->button7->TabIndex = 16;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &questions::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(185, 49);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 37);
			this->button6->TabIndex = 14;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &questions::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(129, 49);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 37);
			this->button5->TabIndex = 15;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &questions::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(73, 49);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 37);
			this->button4->TabIndex = 14;
			this->button4->Text = L"2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &questions::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(17, 49);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 37);
			this->button3->TabIndex = 13;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &questions::button3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(48, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(403, 46);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Отобразить оставшиеся вопросы";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &questions::button1_Click);
			// 
			// questions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 245);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"questions";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"questions";
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Name = "Questions";
		question1^ n = gcnew question1();
		n->Show();
		this->Hide();
		button3->Visible = false;
		button4->Visible = false;
		button5->Visible = false;
		button6->Visible = false;
		button7->Visible = false;
		button8->Visible = false;
		button9->Visible = false;
		button10->Visible = false;
		button12->Visible = false;
		button11->Visible = false;
		button13->Visible = false;
		button14->Visible = false;
		button15->Visible = false;
		button16->Visible = false;
		button17->Visible = false;
		button18->Visible = false;
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question2^ n = gcnew question2();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question3^ n = gcnew question3();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question4^ n = gcnew question4();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question5^ n = gcnew question5();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question6^ n = gcnew question6();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question7^ n = gcnew question7();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question8^ n = gcnew question8();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question9^ n = gcnew question9();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question10^ n = gcnew question10();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question11^ n = gcnew question11();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question12^ n = gcnew question12();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question13^ n = gcnew question13();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question14^ n = gcnew question14();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question15^ n = gcnew question15();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Name = "Questions";
	question16^ n = gcnew question16();
	n->Show();
	this->Hide();
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	button6->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
	button9->Visible = false;
	button10->Visible = false;
	button12->Visible = false;
	button11->Visible = false;
	button13->Visible = false;
	button14->Visible = false;
	button15->Visible = false;
	button16->Visible = false;
	button17->Visible = false;
	button18->Visible = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	button3->Visible = true;
	button4->Visible = true;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	button8->Visible = true;
	button9->Visible = true;
	button10->Visible = true;
	button12->Visible = true;
	button11->Visible = true;
	button13->Visible = true;
	button14->Visible = true;
	button15->Visible = true;
	button16->Visible = true;
	button17->Visible = true;
	button18->Visible = true;
	if (check[0] == 1)
	{
		button3->Enabled = false;
	}
	if (check[1] == 1)
	{
		rez = 1;
		button4->Enabled = false;
	}
	if (check[2] == 1)
	{
		rez1 = 1;
		button5->Enabled = false;
	}
	if (check[3] == 1)
	{
		rez2 = 1;
		button6->Enabled = false;
	}
	if (check[4] == 1)
	{
		rez3 = 1;
		button7->Enabled = false;
	}
	if (check[5] == 1)
	{
		rez4 = 1;
		button8->Enabled = false;
	}
	if (check[6] == 1)
	{
		rez5 = 1;
		button9->Enabled = false;
	}
	if (check[7] == 1)
	{
		rez6 = 1;
		button10->Enabled = false;
	}
	if (check[8] == 1)
	{
		rez7 = 1;
		button12->Enabled = false;
	}
	if (check[9] == 1)
	{
		rez8 = 1;
		button11->Enabled = false;
	}
	if (check[10] == 1)
	{
		rez9 = 1;
		button13->Enabled = false;
	}
	if (check[11] == 1)
	{
		rez10 = 1;
		button14->Enabled = false;
	}
	if (check[12] == 1)
	{
		rez11 = 1;
		button15->Enabled = false;
	}
	if (check[13] == 1)
	{
		rez12 = 1;
		button16->Enabled = false;
	}
	if (check[14] == 1)
	{
		rez13 = 1;
		button17->Enabled = false;
	}
	//if (check[15] == 1)
	//{
	//	button18->Enabled = false;
	//}
}
};
}
