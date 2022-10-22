#include <iostream>
using namespace std;
int main()
{
    float doF;
    cout << "Nhap nhiet do tinh theo do F: ";
    cin >> doF;
    float doC = 5 * (doF - 32) / 9;
    cout << "Nhiet do tinh theo do C la: " << doC;
    return 0;
}