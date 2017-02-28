// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void showSum(int, int, int);
void showAverage(double, double, double);

string name;

int main()
{
	
	int number1;
	int number2;
	int number3;
	cout << "Please enter your name:" << endl;
	cin >> name;
	cout << "Please enter a first number:" << endl;
	cin >> number1;
	cout << "Please enter a second number:" << endl;
	cin >> number2;
	cout << "Please enter a third number:" << endl;
	cin >> number3;
	showSum(number1, number2, number3);
	showAverage(number1, number2, number3);
	system("pause");
	return 0;
}

void showSum(int num1, int num2, int num3)
{
	int total;
	total = num1 + num2 + num3;
	cout << name << "'s numbers add up to " << total << endl;
}

void showAverage(double num1, double num2, double num3)
{
	double total;
	total = (num1 + num2 + num3)/3;
	cout << "The average of " << name << "'s numbers is " << total << endl;
}
