#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	int dv;
	int flag = 0;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 0)
		cout << "So " << n << " la so toan chan";
	else
		cout << "So " << n << " la so khong toan chan";
	return 0;
}