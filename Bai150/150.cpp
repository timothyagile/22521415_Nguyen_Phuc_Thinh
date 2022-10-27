#include <iostream>
using namespace std;
void Nhap(int&, int&);
int BoiChung(int, int);
int main()
{
	int a, b;
	Nhap(a, b);
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << BoiChung(a, b);
	return 0;
}
void Nhap(int& a, int& b)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}
int BoiChung(int a, int b)
{
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int bc = abs(a * b) / (m + n);
	return bc;
}