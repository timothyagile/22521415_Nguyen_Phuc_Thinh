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
	float s = 1;
	float t = x;
	int m = 1;
	int i = 1;
	int dau = -1;
	while (i <= 2 * n + 1)
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