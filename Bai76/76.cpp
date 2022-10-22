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
	float t = x;
	int m = 1;
	int i = 1;
	while (i <= 2 * n + 1)
	{
		s = s + (float)t / m;
		t = t * x * x;
		i = i + 2;
		m = m * (i - 1) * i;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}