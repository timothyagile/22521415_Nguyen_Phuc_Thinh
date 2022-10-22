#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap gia tri cua a: ";
	cin >> a;
	cout << "Nhap gia tri cua b: ";
	cin >> b;
	float max = a;
	if (b > max)
		max = b;
	cout << "Gia tri lon nhat la: " << max;
	return 0;
}