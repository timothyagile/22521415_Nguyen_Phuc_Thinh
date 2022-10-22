#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM;
	cout << "Nhap toa do diem A: ";
	cin >> xA >> yA;
	cout << "Nhap toa do diem B: ";
	cin >> xB >> yB;
	cout << "Nhap toa do diem C: ";
	cin >> xC >> yC;
	cout << "Nhap toa do diem M: ";
	cin >> xM >> yM;
	float sMAB = abs(xM * yA + xA * yB + xB * yM - xA * yM - xB * yA - xB * yM)/2;
	float sMBC = abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC)/2;
	float sMAC = abs(xM * yA + xA * yC + xC * yM - xA * yM - xC * yA - xM * yC)/2;
	float sABC = abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC)/2;
	if (sMAB + sMBC + sMAC == sABC)
		cout << "Diem M thuoc tam giac";
	else
		cout << "Diem M khong thuoc tam giac";
	return 0;
}