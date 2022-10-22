#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float m = 1;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		s = s + dau * (float)1 / m;
		i = i + 1;
		m = m + i;
		dau = -dau;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}