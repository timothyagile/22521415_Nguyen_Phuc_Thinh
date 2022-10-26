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
	int t = x;
	int i = 1;
	while (i <= 2 * n + 1)
	{
		s = s + t;
		t = t * x * x;
		i = i + 2;
	}
	return s;
}