#include <iostream>
using namespace std;
void Nhap(float&);
float XuLy(float);
int main()
{
    float r;
    Nhap(r);
    float Sxq = XuLy(r);
    cout << "Dien tich xung quanh cua khoi cau la: " << Sxq;
    return 0;
}
void Nhap(float& r)
{
    cout << "Nhap ban kinh: ";
    cin >> r;
}
float XuLy(float r)
{
    return 4 * r * r * 3.14;
}