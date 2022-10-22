#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap gia tri cua a: ";
	cin >> a;
	cout << "Nhap gia tri cua b: ";
	cin >> b;
	float min = a;
	if (b < min)
		min = b;
	cout << "Gia tri nho nhat la: " << min;
	return 0;
}