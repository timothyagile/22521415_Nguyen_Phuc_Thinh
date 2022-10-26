#include <iostream>
using namespace std;
void Nhap(float&);
float XuLy(float);
int main()
{
    float doC;
    Nhap(doC);
    float doF = XuLy(doC);
    cout << "Nhiet do tinh theo do F la: " << doF;
    return 0;
}
void Nhap(float& doC)
{
    cout << "Nhap DoC: ";
    cin >> doC;
}
float XuLy(float doC)
{
    return 9 * doC / 5 + 32;
}