#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, d;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	d = -b * b + 4 * a * c;
	if (d <= 0)
	{
		if (d == 0)
			cout << "PT co nghiem kep la: " << -b / (2 * a);
		else
			cout << "PT vo nghiem";
	}
	else
	{ 
		cout << "Nghiem cua phuong trinh la: ";
		cout << "x1 = " << (-b + sqrt(d)) / 2 * a;
		cout << "x2 = " << (-b - sqrt(d)) / 2 * a;
	}
	return 0;
}