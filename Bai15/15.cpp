#include <iostream>
using namespace std;

void Nhap(float&);
void XuLy(float);

int main()
{
    float x;
    Nhap(x);
    XuLy(x);
    return 0;
}
void Nhap(float& x)
{
    cout << "Nhap x: ";
    cin >> x;
}
void XuLy(float x)
{
    double x2 = x * x;
    double x4 = x2 * x2;
    double x8 = x4 * x4;
    double x16 = x8 * x8;
    double x32 = x16 * x16;
    double x64 = x32 * x32;
    cout << "Gia tri cua x^64 la: " << x64;
}