#include <iostream>
using namespace std;
void Nhap(int&);
void XuLy(int);
int main()
{
	int x;
	Nhap(x);
	XuLy(x);
	return 0;
}
void Nhap(int& x)
{
	cout << "Nhap x: ";
	cin >> x;
}
void XuLy(int x)
{
	int f;
	if (x >= 0)
	{
		if (x <= 1)
			cout << "f(x) = " << 5 * x - 7;
		else
			cout << "f(x) = " << 2 * x * x * x + 5 * x * x - 8 * x + 3;
	}
	else
		cout << "f(x) = " << -2 * x * x * x + 6 * x + 9;
}
