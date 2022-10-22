#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 1;
	float e = 1;
	float t = 1;
	int m = 2;
	int i = 2;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		t = t * x * x;
		e = (float)t / m;
		s = s + dau * e;
		i = i + 2;
		m = m * (i - 1) * i;
		dau = -dau;
	}
	cout << "Gia tri cua cos(x) voi do chinh xac 10^-6 la: " << s;
	return 0;
}