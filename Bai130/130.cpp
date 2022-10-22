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
	if (x + y > z && y + z > x && x + z > y)
		cout << "Ton tai tam giac co do dai 3 canh la x y z";
	else
		cout << "Khong ton tai tam giac";
	return 0;
}