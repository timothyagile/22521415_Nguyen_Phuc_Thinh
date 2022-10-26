#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, int &n);
float XuLy(float, int);
int main()
{
    int n;
    float r;
    Nhap(r, n);
    float p = XuLy(r, n);
    cout << "Chu vi cua da giac la: " << p;
    return 0;
}
void Nhap(float& r, int &n)
{
    cout << "Nhap ban kinh: ";
    cin >> r;
    cout << "Nhap so canh cua da giac: ";
    cin >> n;
}
float XuLy(float r, int n)
{
    return n * r * sin(3.14 / n) / 2;
}