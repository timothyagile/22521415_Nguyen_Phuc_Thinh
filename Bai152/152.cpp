#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
		int t = n;
	int flag = 1;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		cout << "So " << n << " co dang 3^m";
	return 0;
}