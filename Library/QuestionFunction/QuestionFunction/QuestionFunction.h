#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace Microsoft::VisualBasic;
using namespace System::IO;

namespace QuestionFunction {
	public ref class QuestFunc
	{
	public:
		static void lock(Button^ bt1, Button^ bt2);
		static void unlock(Button^ bt1, Button^ bt2, int* mas, int i);
		static int textBox1(TextBox^ tb, Button^ bt);
		static int textBox9(TextBox^ tb, Button^ bt);
		static int BoxCheck2(CheckBox^ cb, CheckBox^ cb1, CheckBox^ cb2, CheckBox^ cb3, Button^ bt);
		static int BoxCheck10(CheckBox^ cb, CheckBox^ cb1, CheckBox^ cb2, CheckBox^ cb3, Button^ bt);
		static int radioB3(RadioButton^ rb, RadioButton^ rb1, RadioButton^ rb2, Button^ bt);
		static int radioB11(RadioButton^ rb, RadioButton^ rb1, RadioButton^ rb2, Button^ bt);
		static int boxList4(ListBox^ lb, ListBox^ lb1, ListBox^ lb2, Button^ bt, Button^ bt1, Button^ bt2, Button^bt3);
		static int boxList12(ListBox^ lb, ListBox^ lb1, ListBox^ lb2, Button^ bt, Button^ bt1, Button^ bt2, Button^bt3);
		static int TrackB5(TrackBar^ tb, Button^ bt);
		static int TrackB13(TrackBar^ tb, Button^ bt);
		static int combBox6(ComboBox^ cb, ComboBox^ cb1, ComboBox^ cb2, Button^ bt);
		static int combBox14(ComboBox^ cb, ComboBox^ cb1, ComboBox^ cb2, Button^ bt);
		static int listCheck7(CheckedListBox^ clb, Button^ bt);
		static int listCheck15(CheckedListBox^ clb, Button^ bt);
		static int ScrollH8(HScrollBar^ hsb, Button^ bt);
		static int ScrollH16(HScrollBar^ hsb, Button^ bt);
	};
}
