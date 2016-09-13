// OOP_lab01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "calendar.h"

int main(int argc, char*argv[])
{
	Calendar enterthedate(13, 9);
	enterthedate.getDate();
	system("pause");
	return 0;
}