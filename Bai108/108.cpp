#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 1;
	float e = 1;
	int m = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
		m = m * i;
	}
	cout << "Gia tri cua hang so euler voi do chinh xac 10^-6 la: " << s;
	return 0;
}