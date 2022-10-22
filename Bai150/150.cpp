#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int bc = abs(a * b)/ (m + n);
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << bc;
	return 0;
}