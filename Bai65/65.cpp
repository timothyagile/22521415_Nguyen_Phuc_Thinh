#include <iostream>
using namespace std;
void Nhap(int&);
int Min(int);
int main()
{
	int n;
	Nhap(n);
	cout << "Chu so nho nhat cua n la: " << Min(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int Min(int n)
{
	int t = n;
	int min = t % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < min)
			min = dv;
		t = t / 10;
	}
	return min;
}