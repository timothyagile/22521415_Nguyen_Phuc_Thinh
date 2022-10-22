#include <iostream>
using namespace std;
int main()
{
    float r;
    cout << "Nhap ban kinh: ";
    cin >> r;
    float Sxq = 4 * 3.14 * r * r;
    cout << "Dien tich xung quanh cua khoi cau la: " << Sxq;
    return 0;
}