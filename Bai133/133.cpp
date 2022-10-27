#include <iostream>
using namespace std;
struct Point
{
	float x;
	float y;
};
void Nhap(Point&);
float KhoangCach(Point, Point);
void KiemTra(float, float, float);
int main()
{
	Point A, B, C;
	cout << "Nhap gia tri cua A: " << endl;
	Nhap(A);
	cout << "Nhap gia tri cua B: " << endl;
	Nhap(B);
	cout << "Nhap gia tri cua C: " << endl;
	Nhap(C);
	KiemTra(KhoangCach(A, B), KhoangCach(C, B), KhoangCach(A, C));
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
void KiemTra(float x, float y, float z)
{
	if (x + y > z && y + z > x && x + z > y)
	{
		if (x == y && y == z)
			cout << "ABC la tam giac deu";
		else
		{
			if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
			{
				if (x == y || y == z || x == z)
					cout << "ABC la tam giac vuong can";
				else
					cout << "ABC la tam giac vuong";
			}
			else
			{
				if (x == y || y == z || z == z)
					cout << "ABC la tam giac can";
				else
					cout << "ABC la tam giac thuong";
			}
		}
	}
	else
		cout << "ABC khong la tam giac";
}