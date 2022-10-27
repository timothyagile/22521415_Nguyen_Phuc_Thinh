#include <iostream>
using namespace std;
void Nhap(float&, float&, float &);
void Sort(float, float, float);
int main()
{
	float a, b, c;
	Nhap(a, b, c);
	Sort(a, b, c);
	return 0;
}
void Nhap(float& a, float& b, float &c)
{
	cout << "Nhap gia tri cua a: ";
	cin >> a;
	cout << "Nhap gia tri cua b: ";
	cin >> b;
	cout << "Nhap gia tri cua c: ";
	cin >> c;
}
void Sort(float a, float b, float c)
{
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
}