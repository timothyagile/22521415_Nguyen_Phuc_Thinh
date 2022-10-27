#include <iostream>
using namespace std;
void Nhap(float&, float&);
void Swap(float, float);
int main()
{
	float a, b;
	Nhap(a, b);
	Swap(a, b);
	return 0;
}
void Nhap(float& a, float& b)
{
	cout << "Nhap gia tri cua a: ";
	cin >> a;
	cout << "Nhap gia tri cua b: ";
	cin >> b;
}
void Swap(float a, float b)
{
	float temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	cout << "Gia tri a, b theo thu tu tang dan la:  " << a << " " << b;
}