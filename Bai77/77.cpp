#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int&, int&);
int Tong(int, int);
int main()
{
	int k, n;
	Nhap(k, n);
	cout << "Gia tri cua s la: " << Tong(k, n);
	return 0;
}

void Nhap(int &k, int &n)
{
	cout << "Nhap k: ";
	cin >> k;
	cout << "Nhap n: ";
	cin >> n;
}
int Tong(int k, int n)
{
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + pow(i, k);
		i = i + 1;
	}
	return s;
}