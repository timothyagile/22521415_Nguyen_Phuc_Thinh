#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	float x;
	cout << "Nhap x (don vi radian): ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float t = sin(x);
	int i = 1;
	while (i <= n)
	{
		s = s + t;
		t = t * sin(x);
		i = i + 1;
	}
	cout << "Gia tri cua s la: " << s;
	return 0;
}