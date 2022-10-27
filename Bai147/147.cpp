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
	int t = n;
	int dv;
	int flag = 0;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 0)
		cout << "So " << n << " la so toan le";
	else
		cout << "So " << n << " la so khong toan le";
}