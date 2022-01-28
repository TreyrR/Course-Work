#include "question14.h"
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
	/// Сводка для question13
	/// </summary>
	public ref class question13 : public System::Windows::Forms::Form
	{
	public:
		question13(void)
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
		~question13()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
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
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(580, 465);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 49);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Ответить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &question13::button4_Click);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(998, 465);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(221, 49);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Следующий вопрос";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &question13::button1_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 465);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 49);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Панель вопросов";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &question13::button3_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(485, 235);
			this->trackBar1->Maximum = 2011;
			this->trackBar1->Minimum = 2000;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(261, 56);
			this->trackBar1->TabIndex = 31;
			this->trackBar1->Value = 2006;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &question13::trackBar1_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(66, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 29);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Вопрос №13";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(225, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(886, 87);
			this->label1->TabIndex = 39;
			this->label1->Text = L"В каком году вступил в силу закон в России, о повышении эффективности\r\nработ по н"
				L"ациональной, региональной и международной стандартизации\r\nв области ИТС \"О техни"
				L"ческом регулировании\"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(534, 308);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 25);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Ответ: нет ответа";
			// 
			// question13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1231, 526);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Name = L"question13";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"question13";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	label3->Text = ("Ваш ответ: " + Convert::ToString(trackBar1->Value));
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	QuestionFunction::QuestFunc::lock(button1, button3);
	mas[12] = QuestionFunction::QuestFunc::TrackB13(trackBar1, button4);
	int i = 12;
	QuestionFunction::QuestFunc::unlock(button1, button3, mas, i);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	check[12] = 1;
	Form^ b = Application::OpenForms["Questions"];
	b->Show();
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		check[12] = 1;
		question14^ f = gcnew question14();
		f->Show();
		this->Hide();
}
};
}
