#include <iostream>
using namespace std;
int main()
{
	int n;
	float x;
	cout << "Nhap x : ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float t = x;
	int m = 1;
	int i = 1;
	int dau = -1;
	while (i <= n)
	{
		s = s + dau * (float)t / m;
		t = t * x;
		i = i + 1;
		m = m + i;
		dau = -dau;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}