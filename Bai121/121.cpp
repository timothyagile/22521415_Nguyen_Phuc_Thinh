#include <iostream>
using namespace std;
void Nhap(int&);
float XuLy(int);
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
float XuLy(int n)
{
	int at = 1;
	int att = 1;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		ahh = at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}