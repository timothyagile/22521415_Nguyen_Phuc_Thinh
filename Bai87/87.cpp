#include <iostream>
using namespace std;
void Nhap(float&, int&);
float Tong(float, int);
int main()
{
	int n;
	float x;
	Nhap(x, n);
	cout << "Gia tri cua S la: " << Tong(x, n);
	return 0;
}
void Nhap(float& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}
float Tong(float x, int n)
{
	float s = 0;
	float t = x;
	int i = 1;
	int dau = 1;
	while (i <= 2 * n + 1)
	{
		s = s + dau * t;
		t = t * x * x;
		i = i + 2;
		dau = -dau;
	}
	return s;
}