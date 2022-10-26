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
	int t = 1;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = sqrt(t + s);
		i = i + 1;
		t = t * i;
	}
	return s;
}
