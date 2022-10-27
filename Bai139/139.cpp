#include <iostream>
using namespace std;
void Nhap(float&, float&);
void Giai(float, float);
int main()
{
	float a, b;
	Nhap(a, b);
	Giai(a, b);
	return 0;
}

void Nhap(float &a, float &b)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}
void Giai(float a, float b)
{
	if (a == 0)
	{
		if (b == 0)
			cout << "PT luon dung";
		else
			cout << "PT vo nghiem";
	}
	else
		cout << "Nghiem cua phuong trinh la: " << -b / a;
}