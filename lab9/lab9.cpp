﻿// lab9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()

{
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "input number of the task" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {string M[12] = { "января", "февраля", "марта", "апреля", "мая", "июня", "июля", "августа", "сентября", "октября", "ноября", "декабря" };
			string A[9] = { "первое", "второе", "третье", "четвертое", "пятое", "шестое", "седьмое", "восьмое", "девятое" };
			string B[9] = { "одинадцатое", "двенадцатое", "тринадцатое", "четырнадцатое", "пятнадцатое", "шестнадцатое", "семнадцатое", "восемнадцатое", "девятнадцатое" };
			int a, b;
			cout << "введите номер дня, (1 - 31) и номер месяца, (1 - 12)" << endl;
			cin >> a >> b;
			if ((a > 0 && a < 32) && (b > 0 && b < 13))
			{

				if (a < 10 && b < 13)
					cout << A[(a % 10) - 1].c_str() << " " << M[b - 1].c_str() << endl;
				else if (a < 20 && b < 13)
					cout << B[(a % 10) - 1].c_str() << " " << M[b - 1].c_str() << endl;
				else if (a < 30 && b < 13)
					cout << "двадцать " << A[(a % 10) - 1].c_str() << " " << M[b - 1].c_str() << endl;
				else if (a == 10 && b < 13)
					cout << "десятое" << " " << M[b - 1].c_str() << endl;
				else if (a == 20 && b < 13)
					cout << "двадцатое" << " " << M[b - 1].c_str() << endl;
				else if (a == 10 && b < 13)
					cout << "тридцатое" << " " << M[b - 1].c_str() << endl;
				else 
					cout << "тридцать первое " << M[b - 1].c_str() << endl;
			}
			else
				cout << "error" << endl; }
			break; 

	case 2: {
		char A;
		int B;
		cout << "введите начально направление и команду (0, 1, -1)" << endl;
		cin >> A>>B;
		switch (B)
		{
		case 1: switch (A)
		{
		case 'N': {cout << "ЗАПАД" << endl; }break;
		case 'S': {cout << "ВОСТОК" << endl;}break;
		case 'W': {cout << "ЮГ" << endl;}break;
		case 'E': {cout << "СЕВЕР" << endl; }break;
				}break;
		case	-1: switch (A)
		{
		case 'N': { cout << "ВОСТОК" << endl; }break;
		case 'S': {cout << "ЗАПАД" << endl; }break;
		case 'W': {cout << "СЕВЕР" << endl; }break;
		case 'E': { cout << "ЮГ" << endl; } break;
		}break;
		case 0: switch (A)
		{
		case 'N': { cout << "СЕВЕР" << endl; }break;
		case 'S': { cout << "ЮГ" << endl; }break;
		case 'W': { cout << "ЗАПАД" << endl; }break;
		case 'E': { cout << "ВОСТОК" << endl; }break;
		}break;

		}
	}
			break;

	case 3: {string A[9] = { "одно", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
			string B[9] = {"одинадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"};
			int a;
			cout << "введите кол-во заданий в диапазоне (10-40) " << endl;
			cin >> a;
			if (a > 9 && a < 41)
			{
				if (a > 10 && a < 20)
					cout << B[(a % 10) - 1].c_str() << " учебных заданий" << endl;
				else if ((a > 21 && a < 25) || (a > 31 && a < 35))
				{
					if (a < 30)
						cout << "двадцать " << A[(a % 10) - 1].c_str() << " учебных задания" << endl;
					else
						cout << "тридцать " << A[(a % 10) - 1].c_str() << " учебных задания" << endl;
				}
				else if ((a > 24 && a < 30) || (a > 34 && a < 40))
				{
					if (a < 30)
						cout << "двадцать " << A[(a % 10) - 1].c_str() << " учебных заданий" << endl;
					else
						cout << "тридцать " << A[(a % 10) - 1].c_str() << " учебных заданий" << endl;
				}
				switch (a)
				{
				case 10: {cout << "десять учебных заданий" << endl; } break;
				case 20: {cout << "двадцать учебных заданий" << endl; } break;
				case 30: {cout << "тридцать учебных заданий" << endl; } break;
				case 40: {cout << "сорок учебных заданий" << endl; } break;
				case 21: {cout << "двадцать одно учебное задание" << endl; } break;
				case 31: {cout << "тридцать одно учебное задание" << endl; } break;

				}
			}
			else
				cout << "error" << endl; }
			break;

	case 4: {string A[9] = { "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
			string B[9] = { "одинадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };
			string C[9] = { "десять","двадцать","тридцать","сорок","пятьдесят","шестьдесят","семьдесят","восемьдесят","девяносто" };
			string D[9] = { "сто","двести","триста","четыреста","пятьсот","шестьсот","семьсот","восемьсот","девятьсот" };
			int a;
			cout << "введите число в диапазоне (100-999)" << endl;
			cin >> a;
			if ((a % 100) / 10 != 0)
			{
				if ((a % 100) / 10 == 1)
				cout << D[(a / 100) - 1].c_str() << " " << B[(a % 10) - 1].c_str() << endl;
				else
				cout << D[(a / 100) - 1].c_str() << " " << C[((a % 100) / 10) - 1].c_str() << " " << A[(a % 10) - 1].c_str() << endl;
			}
			else
				cout << D[(a / 100) - 1].c_str() << " " << A[(a % 10) - 1].c_str() << endl;
			if (a % 10 == 0)
				cout << D[(a / 100) - 1].c_str() << " " << C[((a % 100) / 10) - 1].c_str() << endl;
			if (a % 100 == 0)
				cout << D[(a / 100) - 1].c_str() << endl; }
			break;

	case 5: {string A[5] = {"зелен","красн","желт","бел","черн"};
			string B[12] = {"ой крысы","ой коровы","ого тигра","ого зайца","ого дракона","ой змеи","ой лошади","ой овцы","ой обезьяны","ой курицы","ой собаки","ой свиньи"};
			int a,b,c,d;
			cout << "введите год" << endl;
			cin >> a;
			b = (a - 4)%60;
			c = b % 5;
			d = b % 12;		
			cout <<"год "<< A[c].c_str() << B[d].c_str() << endl; }
			break;
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
