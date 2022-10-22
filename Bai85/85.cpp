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
	float t = 1;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + dau * t;
		i = i + 1;
		dau = -dau;
	}
	cout << " Gia tri cua S la: " << s;
	return 0;
}