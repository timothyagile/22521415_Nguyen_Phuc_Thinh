#include <iostream>
using namespace std;
void Nhap(float&);
float XuLy(float);
int main()
{
    float r;
    Nhap(r);
    float s = XuLy(r);
    cout << "Dien tich hinh tron la: " << s;
    return 0;
}
void Nhap(float& r)
{
    cout << "Nhap ban kinh: ";
    cin >> r;
}
float XuLy(float r)
{
    return r * r * 3.14;
}