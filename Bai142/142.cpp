#include <iostream>
using namespace std;
void Nhap(int&);
int DaoNguoc(int);
int main()
{
	int n;
	Nhap(n);
	cout << "So dao nguoc cua " << n << " la: " << DaoNguoc(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int DaoNguoc(int n)
{
	int dn = 0;
	int t = n;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}