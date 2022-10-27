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
	int s = 0;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == n)
		cout << "So " << n << " la so hoan thien";
	else
		cout << "So " << n << " la so khong hoan thien";
}