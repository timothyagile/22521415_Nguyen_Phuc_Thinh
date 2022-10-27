#include <iostream>
using namespace std;
void Nhap(float&, float&);
void Min(float, float);
int main()
{
	float a, b;
	Nhap(a, b);
	Min(a, b);
	return 0;
}
void Nhap(float& a, float& b)
{
	cout << "Nhap gia tri cua a: ";
	cin >> a;
	cout << "Nhap gia tri cua b: ";
	cin >> b;
}
void Min(float a, float b)
{
	float min = a;
	if (b < min)
		min = b;
	cout << "Gia tri nho nhat la: " << min;
}