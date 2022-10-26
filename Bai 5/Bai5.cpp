#include <iostream>
using namespace std;
void Nhap(float&);
double XuLy(float);
int main()
{
    float r;
    Nhap(r);
    float v = XuLy(r);
    cout << "The tich khoi cau la: " << v;
    return 0;
}
void Nhap(float& r)
{
    cout << "Nhap ban kinh: ";
    cin >> r;
}
double XuLy(float r)
{
    return 4 * 3.14 * r * r * r / 3;
}