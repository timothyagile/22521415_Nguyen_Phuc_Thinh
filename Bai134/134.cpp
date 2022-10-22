#include <iostream>
using namespace std;
int main()
{
	float x, y, z;
	cout << "Nhap gia tri cua x: ";
	cin >> x;
	cout << "Nhap gia tri cua y: ";
	cin >> y;
	cout << "Nhap gia tri cua z: ";
	cin >> z;
	if (x <= y && y <= z)
		cout << "BDT dung";
	else
		cout << "BDT sai";
	return 0;
}