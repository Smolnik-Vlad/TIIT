#include "pch.h"
#include "CppUnitTest.h"
#include "Windows.h"
#include "../lab1_sem2/sum.cpp"
#include "../lab1_sem2/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


namespace Lab1sem2tests
{

	TEST_CLASS(Lab1sem2tests)
	{
	public:
		
		TEST_METHOD(check_suff)
		{
			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			string str = "slave";

			int* arr_suf = new int[str.length()];

			Library a;

			arr_suf = a.ArrSuf(str);

			int* arr_letter_int = new int[str.length()];
			char* arr_letter_char = new char[str.length()];

			for (int i = 0; i < str.length(); i++)
			{
				arr_letter_char[i] = str[i];
				arr_letter_int[i] = i;
			}

			for (int i = 0; i < str.length() - 1; i++)
			{
				for (int j = i + 1; j < str.length(); j++)

				{
					if (arr_letter_char[i] > arr_letter_char[j])
					{
						swap(arr_letter_char[i], arr_letter_char[j]);
						swap(arr_letter_int[i], arr_letter_int[j]);
					}
				}
			}


			for (int i = 0; i < str.length(); i++)
			{
				Assert::IsTrue(arr_suf[i] == arr_letter_int[i]);
			}
		};

		TEST_METHOD(check_pref)
		{
			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			int c=1, b=4;
			string str="aabaabab", pref_check;
			Library a;
			pref_check=a.Pref(str, c, b);
			Assert::IsTrue(pref_check==str.substr(c, pref_check.length())&& pref_check ==str.substr(b, pref_check.length()));
			

		};

		TEST_METHOD(check_shift)
		{
			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			string str = "asdbfv", substr_check, shift_check;
			int numb, counter=0;
			char letter;
			Library a;
			numb=a.ArrSuf(str)[0];
			string* arr_str = new string[str.length()];
			for (int i = 0; i < str.length(); i++)
			{
				arr_str[i] = str.substr(i, str.length() - i);
			}
			substr_check = arr_str[numb];
			Assert::IsTrue(substr_check + str.substr(0, str.length() - substr_check.length()) == a.Shift(str));
			

			//Если разность длин исходной строки и суффикса равна количеству прокрутки
			shift_check = a.Shift(str);
			while (str != shift_check)
			{
				letter = str[0];
				str.erase(str.begin());
				str += letter;
				counter++;
			}
			Assert::IsTrue(counter == str.length() - substr_check.length());
		}

	};
}
