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
	int i = 1;
	int flag = 0;
	while (i <= n)
	{
		if (i * i == n)
			flag = 1;
		i = i + 1;
	}
	if (flag == 1)
		cout << "So " << n << " la so chinh phuong";
	else
		cout << "So " << n << " la so khong khong la so chinh phuong";
}