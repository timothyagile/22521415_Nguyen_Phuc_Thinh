#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "Nhap gia tri cua a: ";
	cin >> a;
	cout << "Nhap gia tri cua b: ";
	cin >> b;
	cout << "Nhap gia tri cua c: ";
	cin >> c;
	float temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}

	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	cout << "Gia tri a, b, c  theo thu tu tang dan la:  " << a << " " << b << " " << c;
	return 0;
}