#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int min, max;
	float h, y, x;
	cout << "Enter [min,max] and h\n";
	cin >> min >> max >> h;
	x = min;
	cout << "\tx\t" << endl;
	cout << "while" << endl;
	while (x <= max + h / 2)
	{
		y = log(pow(x, 2)) + pow(x, 2) + 2;
		cout << setw(10) << x << setw(10) << y << endl;
		x += h;
	}
	cout << "do while" << endl;
	x = min;
	cout << "\tx\t" << endl;
	do
	{
		y = log(pow(x, 2)) + pow(x, 2) + 2;
		cout << setw(10) << x << setw(10) << y << endl;
		x += h;
	} 	while (x <= max + h / 2);
}
