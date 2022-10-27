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
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= n)
	{
		ahh = (at * at + 2) / (2 * at);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}