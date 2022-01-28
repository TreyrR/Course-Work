#include "question13.h"
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
	/// Сводка для question12
	/// </summary>
	public ref class question12 : public System::Windows::Forms::Form
	{
	public:
		question12(void)
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
		~question12()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(525, 479);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 49);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Ответить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &question12::button4_Click);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(939, 479);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(221, 49);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Следующий вопрос";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &question12::button1_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 479);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(210, 49);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Панель вопросов";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &question12::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(66, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 29);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Вопрос №12";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(225, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(535, 29);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Сопоставьте подсистему с её составляющей";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"интернет-портал", L"светофоры", L"местоположение ТС" });
			this->listBox1->Location = System::Drawing::Point(88, 212);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(238, 79);
			this->listBox1->TabIndex = 39;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 25;
			this->listBox2->Location = System::Drawing::Point(717, 162);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(202, 29);
			this->listBox2->TabIndex = 40;
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 25;
			this->listBox3->Location = System::Drawing::Point(717, 236);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(202, 29);
			this->listBox3->TabIndex = 41;
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 25;
			this->listBox4->Location = System::Drawing::Point(717, 312);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(202, 29);
			this->listBox4->TabIndex = 42;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(472, 162);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 29);
			this->button2->TabIndex = 43;
			this->button2->Text = L"---------->";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &question12::button2_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(472, 236);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(148, 29);
			this->button5->TabIndex = 44;
			this->button5->Text = L"---------->";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &question12::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(472, 312);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(148, 29);
			this->button6->TabIndex = 45;
			this->button6->Text = L"---------->";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &question12::button6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(725, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 25);
			this->label3->TabIndex = 46;
			this->label3->Text = L"подсистема УДД";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(658, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(298, 25);
			this->label4->TabIndex = 47;
			this->label4->Text = L"подсистема информирования";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(688, 284);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(258, 25);
			this->label5->TabIndex = 48;
			this->label5->Text = L"подсистема сбора данных";
			// 
			// question12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1172, 540);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Name = L"question12";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"question12";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			check[11] = 1;
			question13^ n = gcnew question13();
			n->Show();
			this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	QuestionFunction::QuestFunc::lock(button1, button3);
	mas[11] = QuestionFunction::QuestFunc::boxList12(listBox2, listBox3, listBox4, button2, button5, button6, button4);
	int i = 11;
	QuestionFunction::QuestFunc::unlock(button1, button3, mas, i);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	check[11] = 1;
	Form^ b = Application::OpenForms["Questions"];
	b->Show();
	this->Hide();
}
};
}
