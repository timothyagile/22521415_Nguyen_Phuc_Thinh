#include <iostream>
using namespace std;
void Nhap(int&);
void XuLy(int);
int main()
{
	int n;
	Nhap(n);
	XuLy(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
void XuLy(int n)
{
	int at = 1;
	int bt = 1;
	int i = 2;
	int ahh, bhh;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << "Gia tri cua a" << i - 1 << " la: " << ahh << endl;
	cout << "Gia tri cua b" << i - 1 << " la: " << bhh << endl;
}