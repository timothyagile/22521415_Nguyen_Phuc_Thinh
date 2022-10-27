#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
	float x;
	float y;
};
void Nhap(Point&);
float DienTich(Point, Point, Point);
void KiemTra(float, float, float, float);
int main()
{
	Point A, B, C, M;
	cout << "Nhap toa do diem A " << endl;
	Nhap(A);
	cout << "Nhap toa do diem B: " << endl;
	Nhap(B);
	cout << "Nhap toa do diem C: " << endl;
	Nhap(C);
	cout << "Nhap toa do diem M: " << endl;
	Nhap(M);
	KiemTra(DienTich(A, B, C), DienTich(M, A, B), DienTich(M, B, C), DienTich(M, A, C));
	return 0;
}
void Nhap(Point& p)
{
	cout << "Nhap x: ";
	cin >> p.x;
	cout << "Nhap y: ";
	cin >> p.y;
}
float DienTich(Point p, Point q, Point k)
{
	return abs(p.x * q.y + q.x * k.y + k.x * p.y - q.x * p.y - k.x * q.y - k.x * p.y) / 2;
};
void KiemTra(float a, float b, float c, float d)
{
	if (a == b + c + d)
		cout << "Diem M thuoc tam giac";
	else
		cout << "Diem M khong thuoc tam giac";
}
