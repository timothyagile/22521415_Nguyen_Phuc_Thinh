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
	int att = 1;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		ahh = 4 * at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}