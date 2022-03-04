#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1_sem2/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace Lab1sem2tests
{
	TEST_CLASS(Lab1sem2tests)
	{
	public:
		
		TEST_METHOD(check_suff)
		{			
			string str = "слово";

			int* arr_suf = new int[str.length()];
			/*Library a;
			arr_suf = a.ArrSuf(str);*/

			int* arr_letter_int = new int[str.length()];
			char* arr_letter_char = new char[str.length()];

			/*for (int i = 0; i < str.length(); i++)
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
			}*/
		}

	};
}
