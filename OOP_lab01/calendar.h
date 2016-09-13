#pragma once

#include <iostream>
using namespace std;

// ���������� ������
class Calendar // ��� ������
{
private: // ������������ ������� private
	int day, // ����
		month,
		year; // �����

public: // ������������ ������� public
	Calendar(int date_day, int date_month, int date_year) // ����������� ������
	{
		setDate(date_day, date_month, date_year); // ����� ������� ��������� ����
	}
	void setDate(int date_day, int date_month, int date_year) // ��������� ���� � ������� ��.��.��
	{
		day = date_day; // ������������� ����
		month = date_month; // ������������� �����
		year = date_year;
	}
	void message() { cout << "Calendar:" << endl; }
	void getDate() // ���������� ������� ����
	{
		cout << "date: " << day << "." << month << endl;
	}
}; // ����� ���������� ������ CppStudio