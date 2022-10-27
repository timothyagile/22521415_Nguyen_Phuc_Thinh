#include <iostream>
using namespace std;
void Nhap(int&);
void DoiXung(int);
int main()
{
	int n;
	Nhap(n);
	DoiXung(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
void DoiXung(int n)
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
	if (dn == n)
		cout << "So " << n << " la so doi xung ";
	else
		cout << "So " << n << " la so khong doi xung";
}