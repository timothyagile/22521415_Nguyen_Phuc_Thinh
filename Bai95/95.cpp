#include <iostream>
#include <cmath>;
using namespace std;
void Nhap(int&);
float Can(int);
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
	float s = sqrt(n);
	int i = n;
	while (i >= 1)
	{
		s = sqrt(i + s);
		i = i - 1;
	}
	return s;
}