#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 3;
	int att = -1;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		ahh = 5 * at + 6 * att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << "Gia tri cua a" << i - 1 << " la: " << ahh;
	return 0;
}