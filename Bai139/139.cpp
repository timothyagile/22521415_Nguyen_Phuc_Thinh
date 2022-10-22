#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
			cout << "PT luon dung";
		else
			cout << "PT vo nghiem";
	}
	else
		cout << "Nghiem cua phuong trinh la: " << -b / a;
	return 0;
}