#pragma once

#include <iostream>
using namespace std;

// объ€вление класса
class Calendar // им€ класса
{
private: // спецификатор доступа private
	int day, // день
		month,
		year; // мес€ц

public: // спецификатор доступа public
	Calendar(int date_day, int date_month, int date_year) // конструктор класса
	{
		setDate(date_day, date_month, date_year); // вызов функции установки даты
	}
	void setDate(int date_day, int date_month, int date_year) // установка даты в формате дд.мм.гг
	{
		day = date_day; // инициализаци€ день
		month = date_month; // инициализаци€ мес€ц
		year = date_year;
	}
	void message() { cout << "Calendar:" << endl; }
	void getDate() // отобразить текущую дату
	{
		cout << "date: " << day << "." << month << endl;
	}
}; // конец объ€влени€ класса CppStudio