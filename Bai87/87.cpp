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
	int i = 1;
	int dau = 1;
	while (i <= 2*n + 1)
	{
		s = s + dau * t;
		t = t * x * x;
		i = i + 2;
		dau = - dau;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}