#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= n)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i = i + 1;
		at = ahh;
	}
	cout << "Gia tri cua a" << i - 1 << " la: " << ahh;
	return 0;
}