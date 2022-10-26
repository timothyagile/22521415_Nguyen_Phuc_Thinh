#include <iostream>
using namespace std;
void Nhap(int&);
int TichChuSo(int);
int main()
{
	int n;
	Nhap(n);
	cout << "Tich cac chu so cua n la: " << TichChuSo(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int TichChuSo(int n)
{
	int m = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		m = m * dv;
		t = t / 10;
	}
	return m;
}