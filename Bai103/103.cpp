#include <iostream>
#include <cmath>
using namespace std;
float XuLy();
int main()
{
	
	cout << "Gia tri cua S voi do chinh xac 10^-6 la: " << XuLy();
	return 0;
}
float XuLy()
{
	float s = 0;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}