#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 1;
	float t = 1;
	int m = 2;
	int i = 2;
	while (i <= 2*n)
	{
		t = t * x * x;
		s = s + (float)t / m;
		i = i + 2;
		m = m * (i - 1) * i;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}