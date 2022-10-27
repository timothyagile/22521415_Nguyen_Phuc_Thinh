#include <iostream>
using namespace std;
void Nhap(int&);
void KiemTra(int);
int main()
{
	int n;
	Nhap(n);
	KiemTra(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
void KiemTra(int n)
{
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i = i + 1;
	}
	if (dem == 2)
		cout << "So " << n << " la so nguyen to";
	else
		cout << "So " << n << " khong la so nguyen to";
}