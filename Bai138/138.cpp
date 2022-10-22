#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float kq;
	if (x >= 0)
	{
		if (x <= 1)
			kq = 5 * x - 7;
		else
			kq = 2 * x * x * x + 5 * x * x - 8 * x + 3;
	}
	else
		kq = -2 * x * x * x + 6 * x + 9;
	cout << "Gia tri cua f(x) la: " << kq;
}


