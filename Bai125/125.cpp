#include <iostream>
using namespace std;
void Nhap(int&, int&);
void GiaTriTuyetDoi(int, int);
int main()
{
	int a, b;
	Nhap(a, b);
	GiaTriTuyetDoi(a, b);
	return 0;
}
void Nhap(int &a, int &b)
{
	cout << "Nhap gia tri cua a: ";
	cin >> a;
	cout << "Nhap gia tri cua b: ";
	cin >> b;
}
void GiaTriTuyetDoi(int a, int b)
{
	if (a < 0)
		a = -a;
	cout << "Gia tri tuyet doi cua a la: " << a << endl;
	if (b < 0)
		b = -b;
	cout << "Gia tri tuyet doi cua b la: " << b;
}