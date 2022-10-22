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
	int m = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * x;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
		m = m * i;
	}
	cout << "Gia tri cua e^x voi do chinh xac 10^-6 la: " << s;
	return 0;
}