#include <iostream>
using namespace std;
int main()
{
    float doC;
    cout << "Nhap nhiet do tinh theo do C: ";
    cin >> doC;
    float doF = 9 * doC / 5 + 32;
    cout << "Nhiet do tinh theo do F la: " << doF;
    return 0;
}