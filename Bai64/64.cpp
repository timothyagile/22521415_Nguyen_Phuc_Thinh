#include <iostream>
using namespace std;
void Nhap(int&);
int Max(int);
int main()
{
	int n;
	Nhap(n);
	cout << "Chu so lon nhat cua n la: " << Max(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
int Max(int n)
{
	int t = n;
	int max = t % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > max)
			max = dv;
		t = t / 10;
	}
	return max;
}