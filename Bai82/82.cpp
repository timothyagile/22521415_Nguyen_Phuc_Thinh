#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, int&);
float Tong(float, int);
int main()
{
	int n;
	float x;
	Nhap(x, n);
	cout << "Gia tri cua s la: " << Tong(x, n);
	return 0;
}
void Nhap(float& x, int& n)
{
	cout << "Nhap x (don vi radian): ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}
float Tong(float x, int n)
{
	float s = 0;
	float t = sin(x);
	int i = 1;
	while (i <= n)
	{
		s = s + t;
		t = t * sin(x);
		i = i + 1;
	}
	return s;
}