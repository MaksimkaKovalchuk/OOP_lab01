#pragma once

#include <iostream>
using namespace std;

// объ€вление класса
class Calendar // им€ класса
{
private: // спецификатор доступа private
	int day, // день
		month; // мес€ц

public: // спецификатор доступа public
	Calendar(int date_day, int date_month) // конструктор класса
	{
		setDate(date_day, date_month); // вызов функции установки даты
	}
	void setDate(int date_day, int date_month) // установка даты в формате дд.мм.гг
	{
		day = date_day; // инициализаци€ день
		month = date_month; // инициализаци€ мес€ц
	}
	void getDate() // отобразить текущую дату
	{
		cout << "date: " << day << "." << month << endl;
	}
}; // конец объ€влени€ класса CppStudio