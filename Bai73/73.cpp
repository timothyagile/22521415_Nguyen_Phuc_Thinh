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

	float s = 0;
	float t = 1;
	int m = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m + i;
		s = s + (float)t / m;
		i = i + 1;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}