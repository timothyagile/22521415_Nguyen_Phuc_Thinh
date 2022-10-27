#include <iostream>
#include <cmath>
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
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= n)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}