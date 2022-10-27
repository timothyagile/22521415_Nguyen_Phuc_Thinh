#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
	float x;
	float y;
};
void Nhap(Point&);
float KhoangCach(Point, Point);
void XuLy(float, float, float);
int main()
{
	Point A, B, C;
	cout << "Nhap toa do diem A " << endl;
	Nhap(A);
	cout << "Nhap toa do diem B: " << endl;
	Nhap(B);
	cout << "Nhap toa do diem C: " << endl;
	Nhap(C);
	float AB = KhoangCach(A, B);
	float BC = KhoangCach(C, B);
	float AC = KhoangCach(A, C);
	XuLy(AB, BC, AC);
	return 0;
}
void Nhap(Point& p)
{
	cout << "Nhap x: ";
	cin >> p.x;
	cout << "Nhap y: ";
	cin >> p.y;
}
float KhoangCach(Point p, Point q)
{
	return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
};
void XuLy(float AB, float BC, float AC)
{
	if (AB + BC > AC && AC + BC > AB && AC + AB > BC)
		cout << "Co ton tai tam giac";
	else
		cout << "Khong ton tai tam giac";
}