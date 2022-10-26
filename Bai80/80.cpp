#include <iostream>
using namespace std;
void Nhap(int&, int&);
int Tong(int, int);
int main()
{
	int x, n;
	Nhap(x, n);
	cout << "Gia tri cua s la: " << Tong(x, n);
	return 0;
}
void Nhap(int& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}
int Tong(int x, int n)
{
	int s = 1;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		i = i + 1;
		s = s + i * t;
	}
	return s;
}