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
	float t = 1;
	int m = 1;
	int i = 0;
	int dau = -1;
	while (i <= 2 * n)
	{
		s = s + dau * (float)t / m;
		t = t * x * x;
		i = i + 2;
		m = m * (i - 1) * i;
		dau = -dau;
	}
	return s;
}