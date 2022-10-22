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
	float t = x;
	int i = 1;
	while (i <= n)
	{
		s = s + sin(t);
		t = sin(t);
		i = i + 1;
	}
	cout << "Gia tri cua s la: " << s;
	return 0;
}