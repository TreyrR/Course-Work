#include "pch.h"
#include "MainFunction.h"
#include "cmath"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace Microsoft::VisualBasic;
using namespace System::IO;

namespace MainFunction {
	bool MainFunc::LogIn(String^ login, String^ password)
	{
		if (login == "user" && password == "12321")
			return true;
		else
		{
			MessageBox::Show("Неверный логин или пароль!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
	}
	void MainFunc::setDGV(DataGridView^ dgv)
	{
		dgv->ColumnHeadersVisible = false;
		dgv->RowHeadersVisible = false;
		dgv->AutoSizeRowsMode;
		dgv->AutoSizeColumnsMode;
		dgv->ColumnCount = 16;
		dgv->RowCount = 2;
	}
	int MainFunc::RezTrue(int* mas, int rez)
	{
		for (int i = 0; i < 16; i++)
		{
			if (mas[i] == 1)
				rez = rez + 1;
		}
		return rez;
	}
	void MainFunc::output_mas(int* mas, DataGridView^ grid)
	{
		grid->RowCount = 2;
		for (int i = 0; i < 16; i++) {

			grid->Rows[0]->Cells[i]->Value = "Вопрос №" + (i + 1);
			if (mas[i] == 1) {
				grid->Rows[1]->Cells[i]->Value = "Верно";
			}
			else if (mas[i] == 0) {

				grid->Rows[1]->Cells[i]->Value = "Неверно";
			}
		}
	}
	void MainFunc::vTxt(int*mas, DataGridView^ grid)
	{
		String^ f = Interaction::InputBox("Введите путь, по которому будет сохранён файл и его имя. Расширение добавляется автоматически" + "Например: C:\\Users\\name\\repos\'Имя файла", "Ввод", "Ввод", -1, -1);
		String^ filename = f + ".txt";
		try
		{
			auto fk = System::Text::Encoding::GetEncoding(1251);
			auto z = gcnew IO::StreamWriter(filename, false, fk);
			String^ rezult;
			for (int i = 0; i < 16; i++) {
				if (mas[i] == 1) rezult = "true";
				else if (mas[i] == 0) rezult = "false";
				z->WriteLine((i + 1) + ": " + rezult);
			}
			z->Close();
			MessageBox::Show("Запись успешна");
		}
		catch (System::Exception^ E)
		{
			MessageBox::Show(E->Message + "/nОшибка", "Ошибка");
		}
	}
	void MainFunc::addDB(int*mas) 
	{
		ADOX::Catalog^ k = gcnew ADOX::CatalogClass();
		try {
			k->Create("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=BD.accdb");
		}
		catch (System::Runtime::InteropServices::COMException^ situation)
		{

		}
		finally
		{
			k = nullptr;

		}
		auto p = gcnew OleDbConnection("Provider = Microsoft.Jet.OLEDB.4.0; Data Source=BD.accdb");
		p->Open();
		auto c = gcnew OleDbCommand("Create Table [Результат теста] ([Номер Вопроса] counter, [Результат] char (200))", p);
		try {
			c->ExecuteNonQuery();
		}
		catch (System::Runtime::InteropServices::COMException^ situation)
		{

		}
		p->Close();
		for (int i = 0; i < 16; i++)
		{
			auto p = gcnew OleDbConnection(" Provider=Microsoft.Jet.OLEDB.4.0; Data Source =BD.accdb;");
			p->Open();
			if (mas[i] == 1) {
				auto c = gcnew OleDbCommand(" INSERT INTO [Результат теста] (" + "[Номер Вопроса], [Результат]) VALUES(' " + (i + 1) + " ', ' " + "Верно" + " ')");
				c->Connection = p;
				c->ExecuteNonQuery();
			}
			else if (mas[i] == 0) {
				auto c = gcnew OleDbCommand(" INSERT INTO [Результат теста] (" + "[Номер Вопроса], [Результат]) VALUES(' " + (i + 1) + " ', ' " + "Неверно" + " ')");
				c->Connection = p;
				c->ExecuteNonQuery();
			}
			p->Close();
		}
		MessageBox::Show("В таблицу добавлены записи", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void MainFunc::Word(int*mas) {
		try {
			auto file = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
			file->Visible = true;
			auto inf = Type::Missing;
			auto doc = file->Documents->Add(inf, inf, inf, inf);
			Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
			Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitWindow;
			String^ str;
			String^ rezult;

			file->Selection->TypeText("Результаты тестирования");
			Microsoft::Office::Interop::Word::Table^ tbl = file->ActiveDocument->Tables->Add(file->Selection->Range, 2, 16, t1, t2);
			for (int i; i < 16; i++) {
				if (mas[i] == 1) rezult = "+";
				else if (mas[i] == 0) rezult = "-";

				tbl->Cell(1, i + 1)->Range->InsertAfter(Convert::ToString(i + 1));
				str = String::Format("{0:f0}", rezult);
				tbl->Cell(2, i + 1)->Range->InsertAfter(str);
			}
		}
		catch (System::Exception^ e) {
			MessageBox::Show(e->Message, "", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}

