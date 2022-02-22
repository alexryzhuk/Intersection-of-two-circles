// Intersection of two circles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x1, y1, r1;
	double x2, y2, r2;
	cout << "Введіть координати та радіус кіл" << endl;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	ofstream fileOut;
	string pas = "C:/Users/Саша/Desktop/кола.txt";
	fileOut.open(pas);
	if (!fileOut.is_open())
	{
		cout << "File dont open" << endl;
	}
	else {
		cout << "File open" << endl;
		fileOut << x1 << " " << y1 << " " << r1 << " " << x2 << " " << y2 << " " << r2 <<  endl;
	}
	fileOut.close();
	ifstream fileIn;
	fileIn.open(pas);
	double x11, y11, r11;
	double x22, y22, r22;
	fileIn >> x11 >> y11 >> r11 >> x22 >> y22 >> r22;
	if (x11 == x22 && y11 == y22 && r11 == r22)
	{
		cout << -1 << endl;
	}
	else if (sqrt((x22 - x11) * (x22 - x11) + (y22 - y11) * (y22 - y11)) == r11 + r22 || sqrt((x22 - x11) * (x22 - x11) + (y22 - y11) * (y22 - y11)) + r22 == r11 || sqrt((x22 - x11) * (x22 - x11) + (y22 - y11) * (y22 - y11)) + r11 == r22)
	{
		cout <<"Кількість перетинів = "<< 1 << endl;
	}
	else if (sqrt((x22 - x11) * (x22 - x11) + (y22 - y11) * (y22 - y11)) > r11 + r22)
	{
		cout << "Кількість перетинів = " << 0 << endl;
	}
	else if (sqrt((x22 - x11) * (x22 - x11) + (y22 - y11) * (y22 - y11)) + r22 < r11 || sqrt((x22 - x11) * (x22 - x11) + (y22 - y11) * (y22 - y11)) + r11 < r22)
	{
		cout << "Кількість перетинів = " << 0 << endl;
	}
	else
	{
		cout << "Кількість перетинів = " << 2 << endl;
	}
	fileOut.close();
}
