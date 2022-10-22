#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> k;
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + pow(i, k);
		i = i + 1;
	}
	cout << "Gia tri cua s la: " << s;
	return 0;
}