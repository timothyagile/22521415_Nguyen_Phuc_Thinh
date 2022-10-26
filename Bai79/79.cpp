#include <iostream>
using namespace std;
void Nhap(int&);
int Tong(int);
int main()
{
	int n;
	Nhap(n);
	cout << "Gia tri cua s la: " << Tong(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int Tong(int n)
{
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + t * i;
		i = i + 1;
	}
	return s;
}