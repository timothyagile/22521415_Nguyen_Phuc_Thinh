#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&, float&);
void Giai(float, float, float);
int main()
{
	float a, b, c;
	Nhap(a, b, c);
	Giai(a, b, c);
	return 0;
}
void Nhap(float& a, float &b, float &c)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
}
void Giai(float a, float b, float c)
{
	float d;
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
}