#include <iostream>
using namespace std;
void Nhap(int&);
int SoLuongChuSo(int);
int main()
{
	int n;
	Nhap(n);
	cout << "So luong chu so cua n la: " << SoLuongChuSo(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int SoLuongChuSo(int n)
{
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		dem = dem + 1;
		t = t / 10;
	}
	return dem;
}