#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << "Nhap toa do diem A ";
	cin >> x1 >> y1;
	cout << "Nhap toa do diem B: ";
	cin >> x2 >> y2;
	cout << "Nhap toa do diem C: ";
	cin >> x3 >> y3;
	float AB = sqrt((x1 - x2) + (y1 - y2));
	float BC = sqrt((x3 - x2) + (y3 - y2));
	float AC = sqrt((x1 - x3) + (y1 - y3));
	if (AB + BC > AC && AC + BC > AB && AC + AB > BC)
		cout << "Co ton tai tam giac";
	else
		cout << "Khong ton tai tam giac";
	return 0;
}