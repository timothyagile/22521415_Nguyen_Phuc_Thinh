#include <iostream>
using namespace std;
void Nhap(int &);
int SoDau(int);
int main()
{
	int n;
	Nhap(n);
	cout << "Chu so dau tien cua so " << n << " la: " << SoDau(n);
	return 0;
}
void Nhap(int &n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int SoDau(int n)
{
	int t = n;
	while (t >= 10)
	{
		t = t / 10;
	}
	return t;
}