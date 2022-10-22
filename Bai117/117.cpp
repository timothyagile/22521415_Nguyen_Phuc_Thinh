#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 3;
	int att = -1;
	int tt = 2;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		tt = tt * 2;
		ahh = 5 * tt + 5 * at - att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << "Gia tri cua a" << i - 1 << " la: " << ahh;
	return 0;
}