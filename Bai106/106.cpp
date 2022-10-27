#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&);
float XuLy(float);
int main()
{
	float x;
	Nhap(x);
	cout << "Gia tri cua sin(x) voi do chinh xac 10^-6 la: " << XuLy(x);
	return 0;
}
void Nhap(float& x)
{
	cout << "Nhap x: ";
	cin >> x;
}
float XuLy(float x)
{
	float s = 0;
	float e = 1;
	float t = x;
	int m = 1;
	int i = 1;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		e = (float)t / m;
		s = s + dau * e;
		t = t * x * x;
		i = i + 2;
		m = m * (i - 1) * i;
		dau = -dau;
	}
	return s;
}