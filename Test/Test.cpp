#include "pch.h"
#include "CppUnitTest.h"

#include <iostream>
#include <fstream>


#include "C:\\Users\\Олеся\\source\\repos\\TM_1_Lubinets\\TM_1_Lubinets\\cartoon.h"
#include "C:\\Users\\Олеся\\source\\repos\\TM_1_Lubinets\\TM_1_Lubinets\\container.h"
#include "C:\\Users\\Олеся\\source\\repos\\TM_1_Lubinets\\TM_1_Lubinets\\documentary.h"
#include "C:\\Users\\Олеся\\source\\repos\\TM_1_Lubinets\\TM_1_Lubinets\\fiction.h"
#include "C:\\Users\\Олеся\\source\\repos\\TM_1_Lubinets\\TM_1_Lubinets\\movie.h"
#include "C:\\Users\\Олеся\\source\\repos\\TM_1_Lubinets\\TM_1_Lubinets\\cartoon.cpp"
#include "C:\\Users\\Олеся\\source\\repos\\TM_1_Lubinets\\TM_1_Lubinets\\container.cpp"
#include "C:\\Users\\Олеся\\source\\repos\\TM_1_Lubinets\\TM_1_Lubinets\\documentary.cpp"
#include "C:\\Users\\Олеся\\source\\repos\\TM_1_Lubinets\\TM_1_Lubinets\\fiction.cpp"
#include "C:\\Users\\Олеся\\source\\repos\\TM_1_Lubinets\\TM_1_Lubinets\\movie.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace Test
{
	
	std::string project_str = "C:\\Users\\Олеся\\source\\repos\\TM_1_FUN_Lubinets\\Test\\";
	TEST_CLASS(Test)
	{
	public:
		
		//класс cartoon
			TEST_METHOD(cartoon_input)
			{
				ifstream fin(project_str + "in_cartoon.txt");				
				cartoon actual;
				actual.InData(fin);
				cartoon expected;
				expected.set_country("Russia");
				expected.set_title("Title");
				expected.set_way(cartoon::Way_create::DRAWN);
				Assert::AreEqual(expected.get_country(), actual.get_country());
				Assert::AreEqual(expected.get_title(), actual.get_title());
				Assert::AreEqual(int(expected.get_way()), int(actual.get_way()));

			}
			TEST_METHOD(cartoon_output)
			{
				ofstream ofst(project_str + "out_cartoon.txt");
				cartoon car;
				car.set_country("Russia");
				car.set_title("Title");
				car.set_way(cartoon::Way_create::DRAWN);
				car.Out(ofst);
				ifstream fin1(project_str + "out_cartoon_expected.txt");
				ifstream fin2(project_str + "out_cartoon.txt");
				string expected;
				getline(fin1, expected, '\0');
				string actual;
				getline(fin2, actual, '\0');
				Assert::AreEqual(expected, actual);

			}
			//класс fiction
			TEST_METHOD(fiction_input)
			{
				ifstream fin(project_str + "in_fiction.txt");
				fiction actual;
				actual.InData(fin);
				fiction expected;
				expected.set_country("Russia");
				expected.set_title("Title");
				expected.set_director("Ivanov");
				Assert::AreEqual(expected.get_country(), actual.get_country());
				Assert::AreEqual(expected.get_title(), actual.get_title());
				Assert::AreEqual(expected.get_director(), actual.get_director());

			}
			TEST_METHOD(fiction_output)
			{
				ofstream ofst(project_str + "out_fiction.txt");
				fiction car;
				car.set_country("Russia");
				car.set_title("Title");
				car.set_director("Ivanov");
				car.Out(ofst);
				ifstream fin1(project_str + "out_fiction_expected.txt");
				ifstream fin2(project_str + "out_fiction.txt");
				string expected;
				getline(fin1, expected, '\0');
				string actual;
				getline(fin2, actual, '\0');
				Assert::AreEqual(expected, actual);
			}
			//класс documentary
			TEST_METHOD(documentary_input)
			{
				ifstream fin(project_str + "in_documentary.txt");
				documentary actual;
				actual.InData(fin);
				documentary expected;
				expected.set_country("Russia");
				expected.set_title("Title");
				expected.set_year(2020);
				Assert::AreEqual(expected.get_country(), actual.get_country());
				Assert::AreEqual(expected.get_title(), actual.get_title());
				Assert::AreEqual(expected.get_year(), actual.get_year());
			}			
			TEST_METHOD(documentary_output)
			{
				ofstream ofst(project_str + "out_documentary.txt");
				documentary car;
				car.set_country("Russia");
				car.set_title("Title");
				car.set_year(2020);
				car.Out(ofst);
				ifstream fin1(project_str + "out_documentary_expected.txt");
				ifstream fin2(project_str + "out_documentary.txt");
				string expected;
				getline(fin1, expected, '\0');
				string actual;
				getline(fin2, actual, '\0');
				Assert::AreEqual(expected, actual);
			}
			//базовый класс movie
			TEST_METHOD(count)
			{
				movie* fic = new fiction;
				fic->set_title("Title");
				int actual=fic->Count();
				int expected=2;
				Assert::AreEqual(expected, actual);
			}
			TEST_METHOD(Compare)
			{
				movie* fic = new fiction;
				fic->set_title("Title");
				movie* car = new cartoon;
				car->set_title("Titl");
				bool actual = fic->Compare(*car);
				bool expected = 0;
				Assert::AreEqual(expected, actual);
			}
			//Контрейнер
			TEST_METHOD(container_output_test)
			{
				ifstream fin(project_str + "\container_in.txt");
				ofstream fout(project_str + "container_out.txt");
				container mas;
				mas.In(fin);
				mas.Out(fout);
				fout.close();
				ifstream fin1(project_str + "container_out_expected.txt");
				ifstream fin2(project_str + "container_out.txt");
				string expected;
				getline(fin1, expected, '\0');
				string actual;
				getline(fin2, actual, '\0');
				Assert::AreEqual(expected, actual);
			}
			TEST_METHOD(container_filter_test)
			{
				ifstream fin(project_str + "container_in.txt");
				ofstream fout(project_str + "container_out_filter.txt");
				container mas;				
				mas.In(fin);
				mas.Out_cartoon(fout);
				fout.close();
				ifstream fin1(project_str + "container_out_filer_expected.txt");
				ifstream fin2(project_str + "container_out_filter.txt");
				string expected;
				getline(fin1, expected, '\0');
				string actual;
				getline(fin2, actual, '\0');
				Assert::AreEqual(expected, actual);
			}
			TEST_METHOD(container_sort_test)
			{
				ifstream fin(project_str + "container_in.txt");
				ofstream fout(project_str + "container_out_sort.txt");
				container mas;				
				mas.In(fin);
				mas.Sort();
				mas.Out(fout);
				fout.close();
				ifstream fin1(project_str + "container_out_sort_expected.txt");
				ifstream fin2(project_str + "container_out_sort.txt");
				string expected;
				getline(fin1, expected, '\0');
				string actual;
				getline(fin2, actual, '\0');
				Assert::AreEqual(expected, actual);
			}			
	};
}
