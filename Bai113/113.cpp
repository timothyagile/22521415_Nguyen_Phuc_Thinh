#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 2;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i = i + 1;
		at = ahh;
	}
	cout << "Gia tri cua a" << i - 1 << " la: " << ahh;
	return 0;
}