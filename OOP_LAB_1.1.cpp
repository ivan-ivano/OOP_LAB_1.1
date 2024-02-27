#include <iostream>
#include "Product.h"

using namespace std;

Product makeProduct(int first, double second)
{
	Product p;
	if (!p.Init(first, second))
	{
		cout << "Incorrect value. Try again." << endl;
	}
	return p;
	
}

int main()
{
	Product k;
	k.Read();
	k.Display();
	k.Power();


	Product p;
	int a;
	double b;
	cout << "first = ";
	cin >> a;
	cout << "second = ";
	cin >> b;
	p = makeProduct(a, b);
	p.Display();
	p.Power();

	return 0;
};
