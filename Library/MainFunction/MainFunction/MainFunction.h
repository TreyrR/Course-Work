#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace MainFunction {
	public ref class MainFunc
	{
	public:
		static bool LogIn(String^ login, String^ password);
		static int RezTrue(int* mas, int rez);
		static void setDGV(DataGridView^ dgv);
		static void output_mas(int* mas, DataGridView^ grid);
		static void vTxt(int*mas, DataGridView^ grid);
		static void addDB(int*mas);
		static void Word(int*mas);
	};
}
