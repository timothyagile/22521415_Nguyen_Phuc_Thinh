#include <iostream>
using namespace std;
void Nhap(float&, int&);
float Tong(float, int);
int main()
{
	float x;
	int n;
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
	int m = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m + i;
		s = s + (float)t / m;
		i = i + 1;
	}
	return s;
}