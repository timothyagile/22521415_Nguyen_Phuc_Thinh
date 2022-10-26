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
	float s = 1;
	float t = 1;
	int m = 2;
	int i = 2;
	while (i <= 2 * n)
	{
		t = t * x * x;
		s = s + (float)t / m;
		i = i + 2;
		m = m * (i - 1) * i;
	}
	return s;
}