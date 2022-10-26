#include <iostream>
#include <cmath>;
void Nhap(int&);
float Can(int);
using namespace std;
int main()
{
	int n;
	Nhap(n);
	cout << "Gia tri cua S la: " << Can(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
float Can(int n)
{
	float s = 0;
	int i = 2;
	while (i <= n)
	{
		s = pow(i + s, (float)1 / i);
		i = i + 1;
	}
	return s;
}
