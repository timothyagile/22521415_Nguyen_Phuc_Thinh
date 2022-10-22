#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int m = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		m = m*dv;
		t = t / 10;
	}
	cout << "Tich cac chu so cua n la: " << m;
	return 0;
}