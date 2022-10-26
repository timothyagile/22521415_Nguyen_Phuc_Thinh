#include <iostream>
#include <cmath>
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
void Nhap(float &x)
{
    cout << "Nhap x: ";
    cin >> x;
}
void XuLy(float x)
{
    float x2 = x * x;
    float x4 = x2 * x2;
    float x6 = x4 * x2;
    cout << "Gia tri cua x6 la: " << x6;
}