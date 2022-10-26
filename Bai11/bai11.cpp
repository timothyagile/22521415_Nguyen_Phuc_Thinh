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
float XuLy(float, float, float, float);

int main()
{
	Point A, B, C;
	Nhap(A);
	Nhap(B);
	Nhap(C);
	float p = (KhoangCach(A, B), KhoangCach(C, B), KhoangCach(A, C)) / 2;
	float Area = XuLy(p, KhoangCach(A, B), KhoangCach(C, B), KhoangCach(A, C));
	cout << "Dien tich cua tam giac la: " << Area;
	return 0;
}
void Nhap(Point&p)
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
float XuLy(float p, float a, float b, float c)
{
	return sqrt(p * (p - a) * (p - b) * (p - c));
}