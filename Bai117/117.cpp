#include <iostream>
using namespace std;
void Nhap(int&);
int XuLy(int);
int main()
{
	int n;
	Nhap(n);
	cout << "Gia tri cua ahh la: " << XuLy(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int XuLy(int n)
{
	int at = 3;
	int att = -1;
	int tt = 2;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		tt = tt * 2;
		ahh = 5 * tt + 5 * at - att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}
