#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap gia tri cua a: ";
	cin >> a;
	cout << "Nhap gia tri cua b: ";
	cin >> b;
	if (a < 0)
		a = -a;
	cout << "Gia tri tuyet doi cua a la: " << a << endl;
	if (b < 0)
		b = -b;
	cout << "Gia tri tuyet doi cua b la: " << b;
	return 0;
}