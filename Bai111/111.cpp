#include <iostream>
#include <cmath>
using namespace std;
float XuLy();
int main()
{	
	cout << "Gia tri cua so pi voi do chinh xac 10^-6 la: " << XuLy();
	return 0;
}
float XuLy()
{
	float s = 3;
	float e = 1;
	int i = 2;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}