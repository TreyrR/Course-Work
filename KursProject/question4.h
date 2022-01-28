#include "question5.h"
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
	/// Сводка для question4
	/// </summary>
	public ref class question4 : public System::Windows::Forms::Form
	{
	public:
		question4(void)
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
		~question4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

















	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(74, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 29);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Вопрос №4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(220, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(720, 58);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Соедините страны с соответствующими мерами устранения\r\nпробок в них";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"ограниченная продажа автомобилей", L"парк автомобилей находится в совместном пользовании нескольких водителей",
					L"запрет на использование автомобилей по будням с 7:00 до 19:00"
			});
			this->listBox1->Location = System::Drawing::Point(232, 141);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(824, 79);
			this->listBox1->TabIndex = 16;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 25;
			this->listBox2->Location = System::Drawing::Point(327, 264);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(844, 29);
			this->listBox2->TabIndex = 17;
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 25;
			this->listBox3->Location = System::Drawing::Point(327, 331);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(844, 29);
			this->listBox3->TabIndex = 18;
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 25;
			this->listBox4->Location = System::Drawing::Point(327, 398);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(844, 29);
			this->listBox4->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(169, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 28);
			this->button1->TabIndex = 20;
			this->button1->Text = L"------->";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &question4::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 28);
			this->button2->TabIndex = 21;
			this->button2->Text = L"------->";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &question4::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(169, 399);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 28);
			this->button3->TabIndex = 22;
			this->button3->Text = L"------->";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &question4::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(322, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 25);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Швейцария";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(322, 370);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 25);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Сингапур";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(322, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 25);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Китай";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(541, 507);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 49);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Ответить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &question4::button4_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(1011, 507);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(221, 49);
			this->button5->TabIndex = 27;
			this->button5->Text = L"Следующий вопрос";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &question4::button5_Click);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(12, 507);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(212, 49);
			this->button6->TabIndex = 28;
			this->button6->Text = L"Панель вопросов";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &question4::button6_Click);
			// 
			// question4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1244, 568);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"question4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"question4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0)
	{
		listBox2->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(0);
	}
	else if (listBox1->SelectedIndex == 1)
	{
		listBox2->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(1);

	}
	else if (listBox1->SelectedIndex == 2)
	{
		listBox2->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(2);
	}
	else
		MessageBox::Show("Вы не выбрали элемент");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		check[3] = 1;
		this->Name = "Question4";
		question5^ n = gcnew question5();
		n->Show();
		this->Hide();
}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		QuestionFunction::QuestFunc::lock(button5, button6);
		mas[3] = QuestionFunction::QuestFunc::boxList4(listBox2, listBox3, listBox4, button1, button2, button3, button4);
		int i = 3;
		QuestionFunction::QuestFunc::unlock(button5, button6, mas, i);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	check[3] = 1;
	Form^ b = Application::OpenForms["Questions"];
	b->Show();
	this->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0)
	{
		listBox4->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(0);
	}
	else if (listBox1->SelectedIndex == 1)
	{
		listBox4->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(1);

	}
	else if (listBox1->SelectedIndex == 2)
	{
		listBox4->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(2);
	}
	else
		MessageBox::Show("Вы не выбрали элемент");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedIndex == 0)
	{
		listBox3->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(0);
	}
	else if (listBox1->SelectedIndex == 1)
	{
		listBox3->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(1);

	}
	else if (listBox1->SelectedIndex == 2)
	{
		listBox3->Items->Add(Convert::ToString(listBox1->SelectedItem));
		listBox1->Items->RemoveAt(2);
	}
	else
		MessageBox::Show("Вы не выбрали элемент");
}
};
}
