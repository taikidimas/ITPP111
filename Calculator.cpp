// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void add(double, double);
void subtract(double, double);
void times(double, double);
void divide(double, double);

int main()
{
	char op;
	double num1, num2;
	string answer;

	do {

		cout << "Enter Number 1: ";
		cin >> num1;

		cout << "Enter Number 2: ";
		cin >> num2;

		cout << "Enter operator either + or - or * or /: ";
		cin >> op;

		switch (op)
		{
		case '+':
			add(num1, num2);
			break;

		case '-':
			subtract(num1, num2);
			break;

		case '*':
			times(num1, num2);
			break;

		case '/':
			divide(num1, num2);
			break;

		default:
			// If the operator is other than +, -, * or /, error message is shown
			cout << "Error! operator is not correct";
			break;
		}

		cout << "Would you like to do another calculation? Type lowercase y for yes or lowercase n for no!" << endl;
		cin >> answer;

	} while (answer == "y");

	cout << "Thanks for using our Calculator!" << endl;

	system("pause");
	return 0;
}

void add(double no1, double no2)
{
	cout << no1 + no2 << endl;
}
void subtract(double no1, double no2)
{
	cout << no1 - no2 << endl;
}
void times(double no1, double no2)
{
	cout << no1*no2 << endl;
}
void divide(double no1, double no2)
{
	cout << no1 / no2 << endl;
}

