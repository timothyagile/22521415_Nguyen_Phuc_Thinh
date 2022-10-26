#include <iostream>
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
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}
float Tong(float x, int n)
{
	float s = 0;
	int t = x;
	int i = 0;
	while (i <= n)
	{
		s = s + (float)1 / t;
		i = i + 1;
		t = t * (x + i);

	}
	return s;
}