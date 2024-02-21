#include "Product.h"
#include <iostream>

using namespace std;

void Product::SetFirst(unsigned int value)
{
	first = value;
}

void Product::SetSecond(double value)
{
	second = value;
}

bool Product::Init(unsigned int x, double y)
{
	if (x >= 0 || y >= 0)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
};

void Product::Read()
{
	unsigned int x;
	double y;
	do
	{
		cout << "Enter first: "; cin >> x;
		cout << "Enter second: "; cin >> y;
	} while (!Init(x, y));
}

void Product::Display() const
{
	cout << "First: " << first << endl;
	cout << "Second: " << second << endl;
}

void Product::Power()
{
	cout << "All kkal:" << second * first * 10 << endl;
}