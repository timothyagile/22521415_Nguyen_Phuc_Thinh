#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	int max = t % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > max)
			max = dv;
		t = t / 10;
	}
	cout << "Chu so lon nhat cua n la: " << max;
	return 0;
}