#include <iostream>
using namespace std;
void Nhap(float&, float&);
void Max(float, float);
int main()
{
	float a, b;
	Nhap(a, b);
	Max(a, b);
	return 0;
}
void Nhap(float& a, float& b)
{
	cout << "Nhap gia tri cua a: ";
	cin >> a;
	cout << "Nhap gia tri cua b: ";
	cin >> b;
}
void Max(float a, float b)
{
	float max = a;
	if (b > max)
		max = b;
	cout << "Gia tri lon nhat la: " << max;
}