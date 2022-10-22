#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 1;
	}
	cout << "Gia tri cua S voi do chinh xac 10^-6 la: " << s;
	return 0;
}