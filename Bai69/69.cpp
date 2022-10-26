#include <iostream>
using namespace std;
void Nhap(int&, float &);
int Tong(int, float);
int main()
{
	float x;
	int n;
	Nhap(n, x);
	cout << "Gia tri cua S la: " << Tong(n, x);
	return 0;
}
void Nhap(int& n, float &x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
}
int Tong(int n, float x)
{
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + t;
		i = i + 1;
	}
	return s;
}