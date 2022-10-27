#include <iostream>
using namespace std;
void Nhap(int&);
int XuLy(int);

int main()
{
	int n;
	Nhap(n);
	cout << "Gia tri cua a la: " << XuLy(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int XuLy(int n) 
{
	int at = 2;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i = i + 1;
		at = ahh;
	}
	return ahh;
}