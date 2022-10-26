#include <iostream>
using namespace std;
void Nhap(int&);
int TongChuSo(int);
int main()
{
	int n;
	Nhap(n);
	cout << "Tong cac chu so le cua n la: " << TongChuSo(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int TongChuSo(int n)
{
	int s = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			s = s + dv;
		t = t / 10;
	}
	return s;
}