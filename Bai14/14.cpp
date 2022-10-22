#include <iostream>
using namespace std;
int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;
    float x2 = x * x;
    float x4 = x2 * x2;
    float x8 = x4 * x4;
    float x16 = x8 * x8;
    float x32 = x32 * x32;
    cout << "Gia tri cua x32 la: " << x32;
    return 0;
}