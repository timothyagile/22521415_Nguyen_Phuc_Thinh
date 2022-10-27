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
void Nhap(int &n)
{
	cout << "Nhap n: ";
	cin >> n;
}
void KiemTra(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		cout << "Nam " << n << " la nam nhuan";
	else
		cout << "Nam " << n << " khong la nam nhuan";
}
