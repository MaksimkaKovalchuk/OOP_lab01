#pragma once

#include <iostream>
using namespace std;

// ���������� ������
class Calendar // ��� ������
{
private: // ������������ ������� private
	int day, // ����
		month; // �����

public: // ������������ ������� public
	Calendar(int date_day, int date_month) // ����������� ������
	{
		setDate(date_day, date_month); // ����� ������� ��������� ����
	}
	void setDate(int date_day, int date_month) // ��������� ���� � ������� ��.��.��
	{
		day = date_day; // ������������� ����
		month = date_month; // ������������� �����
	}
	void getDate() // ���������� ������� ����
	{
		cout << "date: " << day << "." << month << endl;
	}
}; // ����� ���������� ������ CppStudio