#include <iostream>
#include <cmath>;
using namespace std;
int main()
{
	int n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float t = x;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = sqrt(t + s);
		i = i + 1;
		t = t * x;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}
