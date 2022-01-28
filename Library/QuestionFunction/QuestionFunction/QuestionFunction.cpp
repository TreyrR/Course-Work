#include "pch.h"
#include "cmath"
#include "QuestionFunction.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace Microsoft::VisualBasic;
using namespace System::IO;

namespace QuestionFunction {
	void QuestFunc::lock(Button^ bt1, Button^ bt2)
	{
		bt1->Enabled = false;
		bt2->Enabled = false;
	}
	void QuestFunc::unlock(Button^ bt1, Button^ bt2, int* mas, int i)
	{
		if ((mas[i] == 1) || (mas[i] == 0))
		{
			bt1->Enabled = true;
			bt2->Enabled = true;
		}
	}
	int QuestFunc::TrackB5(TrackBar^ tb, Button^bt)
	{
		if (tb->Value == 0)
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if (tb->Value == 1)
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tb->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tb->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::TrackB13(TrackBar^ tb, Button^ bt)
	{
		if (tb->Value == 2006)
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if (tb->Value == 2002)
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tb->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tb->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::combBox6(ComboBox^cb, ComboBox^cb1, ComboBox^cb2, Button^bt)
	{
		if ((cb->SelectedItem == -1) || (cb1->SelectedItem == -1) || (cb2->SelectedIndex == -1))
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((cb->SelectedIndex == 2) && (cb1->SelectedIndex == 0) && (cb2->SelectedIndex == 1))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			cb->Enabled = false;
			cb1->Enabled = false;
			cb2->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			cb->Enabled = false;
			cb1->Enabled = false;
			cb2->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::combBox14(ComboBox^ cb, ComboBox^ cb1, ComboBox^ cb2, Button^ bt)
	{
		if ((cb->SelectedItem == -1) || (cb1->SelectedItem == -1) || (cb2->SelectedIndex == -1))
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((cb->SelectedIndex == 0) && (cb1->SelectedIndex == 1) && (cb2->SelectedIndex == 2))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			cb->Enabled = false;
			cb1->Enabled = false;
			cb2->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			cb->Enabled = false;
			cb1->Enabled = false;
			cb2->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::listCheck7(CheckedListBox^clb, Button^bt)
	{
		if (clb->CheckedItems->Count == 0)
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((clb->CheckedIndices->Count == 2) && (clb->CheckedIndices->Contains(1)) && (clb->CheckedIndices->Contains(2)))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			clb->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			clb->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::listCheck15(CheckedListBox^ clb, Button^ bt)
	{
		if (clb->CheckedItems->Count == 0)
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((clb->CheckedIndices->Count == 3) && (clb->CheckedIndices->Contains(0)) && (clb->CheckedIndices->Contains(1)) && (clb->CheckedIndices->Contains(2)))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			clb->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			clb->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::ScrollH8(HScrollBar^hsb, Button^bt)
	{
		if (hsb->Value == 0)
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if (hsb->Value == 1)
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			hsb->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			hsb->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::ScrollH16(HScrollBar^ hsb, Button^ bt)
	{
		if (hsb->Value == 0)
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if (hsb->Value == 3)
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			hsb->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			hsb->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::textBox9(TextBox^tb, Button^bt)
	{
		if (tb->Text == "")
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((tb->Text == "ГЛОНАСС") || (tb->Text == "глонасс") || (tb->Text == "Глонасс"))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tb->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tb->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::textBox1(TextBox^ tb, Button^ bt)
	{
		if (tb->Text == "")
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((tb->Text == "ИТС") || (tb->Text == "итс") || (tb->Text == "Итс"))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tb->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tb->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::BoxCheck10(CheckBox^cb, CheckBox^cb1, CheckBox^cb2, CheckBox^cb3, Button^bt)
	{
		if ((!cb->Checked) && (!cb1->Checked) && (!cb2->Checked) && (!cb3->Checked))
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((cb->Checked) && (!cb1->Checked) && (cb2->Checked) && (!cb3->Checked))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			cb->Enabled = false;
			cb1->Enabled = false;
			cb2->Enabled = false;
			cb3->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			cb->Enabled = false;
			cb1->Enabled = false;
			cb2->Enabled = false;
			cb3->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::BoxCheck2(CheckBox^ cb, CheckBox^ cb1, CheckBox^ cb2, CheckBox^ cb3, Button^ bt)
	{
		if ((!cb->Checked) && (!cb1->Checked) && (!cb2->Checked) && (!cb3->Checked))
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((cb->Checked) && (cb1->Checked) && (!cb2->Checked) && (!cb3->Checked))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			cb->Enabled = false;
			cb1->Enabled = false;
			cb2->Enabled = false;
			cb3->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			cb->Enabled = false;
			cb1->Enabled = false;
			cb2->Enabled = false;
			cb3->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::radioB3(RadioButton^ rb, RadioButton^rb1, RadioButton^rb2, Button^ bt)
	{
		if ((!rb->Checked) && (!rb1->Checked) && (!rb2->Checked))
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((!rb->Checked) && (rb1->Checked) && (!rb2->Checked))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			rb->Enabled = false;
			rb1->Enabled = false;
			rb2->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			rb->Enabled = false;
			rb1->Enabled = false;
			rb2->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::radioB11(RadioButton^ rb, RadioButton^ rb1, RadioButton^ rb2, Button^ bt)
	{
		if ((!rb->Checked) && (!rb1->Checked) && (!rb2->Checked))
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((!rb->Checked) && (!rb1->Checked) && (rb2->Checked))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			rb->Enabled = false;
			rb1->Enabled = false;
			rb2->Enabled = false;
			bt->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			rb->Enabled = false;
			rb1->Enabled = false;
			rb2->Enabled = false;
			bt->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::boxList4(ListBox^ lb, ListBox^lb1, ListBox^lb2, Button^ bt, Button^ bt1, Button^bt2, Button^bt3)
	{
		if ((lb->Items->Count == 0) || (lb1->Items->Count == 0) || (lb2->Items->Count == 0))
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((lb->Items[0] == "парк автомобилей находится в совместном пользовании нескольких водителей") && (lb1->Items[0] == "ограниченная продажа автомобилей") && (lb2->Items[0] == "запрет на использование автомобилей по будням с 7:00 до 19:00"))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			bt->Enabled = false;
			bt1->Enabled = false;
			bt2->Enabled = false;
			bt3->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			bt->Enabled = false;
			bt1->Enabled = false;
			bt2->Enabled = false;
			bt3->Enabled = false;
			return 0;
		}
	}
	int QuestFunc::boxList12(ListBox^ lb, ListBox^ lb1, ListBox^ lb2, Button^ bt, Button^ bt1, Button^ bt2, Button^bt3)
	{
		if ((lb->Items->Count == 0) || (lb1->Items->Count == 0) || (lb2->Items->Count == 0))
		{
			MessageBox::Show("Вы не ответили на вопрос!", "Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return -1;
		}
		else if ((lb->Items[0] == "светофоры") && (lb1->Items[0] == "интернет-портал") && (lb2->Items[0] == "местоположение ТС"))
		{
			MessageBox::Show("Правильно!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			bt->Enabled = false;
			bt1->Enabled = false;
			bt2->Enabled = false;
			bt3->Enabled = false;
			return 1;
		}
		else
		{
			MessageBox::Show("Неверно", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			bt->Enabled = false;
			bt1->Enabled = false;
			bt2->Enabled = false;
			bt3->Enabled = false;
			return 0;
		}
	}
}
