#include <iostream>
#include <cmath>;
using namespace std;
void Nhap(float&, int&);
float Can(float, int);
int main()
{
	int n;
	float x;
	Nhap(x, n);
	cout << "Gia tri cua S la: " << Can(x, n);
	return 0;
}
void Nhap(float& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}
float Can(float x, int n)
{
	float t = x;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = sqrt(t + s);
		i = i + 1;
		t = t * x;
	}
	return s;
}
