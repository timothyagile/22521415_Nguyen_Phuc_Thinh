#include <iostream>
using namespace std;
void Nhap(int&);
float Tong(int);
int main()
{
	int n;
	Nhap(n);
	cout << "Gia tri cua S la: " << Tong(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
float Tong(int n)
{
	float s = 0;
	float m = 1;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		s = s + dau * (float)1 / m;
		i = i + 1;
		m = m + i;
		dau = -dau;
	}
	return s;
}