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
    float x12 = x8 * x4;
    float x11 = x12 / x;
    cout << "Gia tri cua x^11 la: " << x11;
    return 0;
}