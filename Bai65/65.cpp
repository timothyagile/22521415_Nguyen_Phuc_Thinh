#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	int min = t % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < min)
			min = dv;
		t = t / 10;
	}
	cout << "Chu so nho nhat cua n la: " << min;
	return 0;
}