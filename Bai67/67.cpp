#include <iostream>
using namespace std;
void Nhap(int&);
void KiemTra(int);
int main()
{
	int n;
	Nhap(n);
	KiemTra(n);
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
void KiemTra(int n)
{
	int flag = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t = t / 10;
	}
	if (flag == 1)
		cout << "So n co ton tai chu so le";
	else
		cout << "So n khong ton tai chu so le";
}