#include <iostream>
#include <string>
#include <fstream>
#pragma once

namespace KursProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для theory
	/// </summary>
	public ref class theory : public System::Windows::Forms::Form
	{
	public:
		theory(void)
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
		~theory()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ button1;



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
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->webBrowser1->Location = System::Drawing::Point(485, 61);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1045, 782);
			this->webBrowser1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(938, 973);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 70);
			this->button1->TabIndex = 3;
			this->button1->Text = L" Вернуться в\r\nглавное меню";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &theory::button1_Click);
			// 
			// theory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->webBrowser1);
			this->Name = L"theory";
			this->Text = L"theory";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &theory::theory_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	//*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//char mass[5000];
		//string path = ("kek.txt");
		//ifstream file;
		//file.open(path);
		//if (file.is_open())
		//{
			//int i=0;
			//char ch;
			//while (file.get(ch))
			//{
				//mass[i] = ch;
				//i++;
			//}
			//MessageBox::Show("Текст отображен!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
		//}
		//else
			//MessageBox::Show("Текст не отображен!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//listBox1->Items->Add("Привет");

	//}
private: System::Void theory_Load(System::Object^ sender, System::EventArgs^ e) {
	webBrowser1->Navigate(Application::StartupPath + "/Theory_1.html");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form^ f = Application::OpenForms["mainmenu"];
	f->Show();
	this->Hide();
}
};
}
