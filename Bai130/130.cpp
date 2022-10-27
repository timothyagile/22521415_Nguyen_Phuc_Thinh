#include <iostream>
using namespace std;
void Nhap(float&, float&, float&);
void KiemTra(float, float, float);
int main()
{
	float x, y, z;
	Nhap(x, y, z);
	KiemTra(x, y, z);
	return 0;
}
void Nhap(float& x, float& y, float& z)
{
	cout << "Nhap gia tri cua x: ";
	cin >> x;
	cout << "Nhap gia tri cua y: ";
	cin >> y;
	cout << "Nhap gia tri cua z: ";
	cin >> z;
}
void KiemTra(float x, float y, float z)
{
	if (x + y > z && y + z > x && x + z > y)
		cout << "Ton tai tam giac co do dai 3 canh la x y z";
	else
		cout << "Khong ton tai tam giac";
}