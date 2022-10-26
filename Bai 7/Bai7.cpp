#include <iostream>
using namespace std;
void Nhap(float&);
float XuLy(float);
int main()
{
    float doF;
    Nhap(doF);
    float doC = XuLy(doF);
    cout << "Nhiet do tinh theo do F la: " << doC;
    return 0;
}
void Nhap(float& doF)
{
    cout << "Nhap DoF: ";
    cin >> doF;
}
float XuLy(float doF)
{
    return (float)5 * (doF - 32) / 9;
}