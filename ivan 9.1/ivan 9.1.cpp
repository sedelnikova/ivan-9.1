// ivan 9.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). 
//Вывести дату в виде текста (например, «пятое января»).

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите, пожалуйста, дату (через пробел): " << endl;
	cin >> a >> b;
	while (a > 31)
	{
		cout << "Введите, пожалуйста, число [1;31]" << endl;
		cin >> a;
	}
	switch (a)
	{
	case 1:
		cout << "Первое " << endl;
		break;
	case 2:
		cout << "Второе " << endl;
		break;
	case 3:
		cout << "Третье " << endl;
		break;
	case 4:
		cout << "Четвертое " << endl;
		break;
	case 5:
		cout << "Пятое " << endl;
		break;
	case 6:
		cout << "Шестое " << endl;
		break;
	case 7:
		cout << "Седьмое " << endl;
		break;
	case 8:
		cout << "Восьмое " << endl;
		break;
	case 9:
		cout << "Девятое " << endl;
		break;
	case 10:
		cout << "Десятое " << endl;
		break;
	case 11:
		cout << "Одиннадцатое " << endl;
		break;
	case 12:
		cout << "Двенадцатое " << endl;
		break;
	case 13:
		cout << "Тринадцатое " << endl;
		break;
	case 14:
		cout << "Четырнадцатое " << endl;
		break;
	case 15:
		cout << "Пятнадцатое " << endl;
		break;
	case 16:
		cout << "Шестнадцатое " << endl;
		break;
	case 17:
		cout << "Семнадцатое " << endl;
		break;
	case 18:
		cout << "Восемнадцатое " << endl;
		break;
	case 19:
		cout << "Девятнадцатое " << endl;
		break;
	case 20:
		cout << "Двадцатое " << endl;
		break;
	case 21:
		cout << "Двадцать первое " << endl;
		break;
	case 22:
		cout << "Двадцать второе " << endl;
		break;
	case 23:
		cout << "Двадцать третье " << endl;
		break;
	case 24:
		cout << "Двадцать четвертое " << endl;
		break;
	case 25:
		cout << "Двадцать пятое " << endl;
		break;
	case 26:
		cout << "Двадцать шестое " << endl;
		break;
	case 27:
		cout << "Двадцать седьмое " << endl;
		break;
	case 28:
		cout << "Двадцать восьмое " << endl;
		break;
	case 29:
		cout << "Двадцать девятое " << endl;
		break;
	case 30:
		cout << "Тридцатое " << endl;
		break;
	case 31:
		cout << "Тридцать первое " << endl;
		break;
	}
	while (b > 12)
	{
		cout << "Введите, пожалуйста, корректное число месяца " << endl;
		cin >> b;
	}
	switch (b)
	{
	case 1:
		cout << "января " << endl;
		break;
	case 2:
		cout << "февраля " << endl;
		break;
	case 3:
		cout << "марта " << endl;
		break;
	case 4:
		cout << "апреля " << endl;
		break;
	case 5:
		cout << "мая " << endl;
		break;
	case 6:
		cout << "июня " << endl;
		break;
	case 7:
		cout << "июля " << endl;
		break;
	case 8:
		cout << "августа " << endl;
		break;
	case 9:
		cout << "сентября " << endl;
		break;
	case 10:
		cout << "октября " << endl;
		break;
	case 11:
		cout << "ноября " << endl;
		break;
	case 12:
		cout << "декабря " << endl;
		break;
	}
	return 0;
}
