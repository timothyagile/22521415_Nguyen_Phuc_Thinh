#include <iostream>
using namespace std;
int main()
{
	int n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float t = 1;
	int m = 1;
	int i = 0;
	int dau = -1;
	while (i <= 2 * n)
	{
		s = s + dau * (float)t / m;
		t = t * x * x;
		i = i + 2;
		m = m * (i - 1) * i;
		dau = -dau;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}