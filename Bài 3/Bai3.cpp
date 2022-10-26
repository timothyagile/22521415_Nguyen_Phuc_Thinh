#include <iostream>
using namespace std;
void Nhap(float&);
float XuLy(float);
int main()
{
    float r;
    Nhap(r);
    float p = XuLy(r);
    cout << "Chu vi hinh tron la: " << p;
    return 0;
}
void Nhap(float& r)
{
    cout << "Nhap ban kinh: ";
    cin >> r;
}
float XuLy(float r)
{
    return 2 * r * 3.14;
}