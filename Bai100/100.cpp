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
	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		s = pow(t + s, (float)1 / (i + 1));
		i = i + 1;
		t = t * i;
	}
	return s;
}
