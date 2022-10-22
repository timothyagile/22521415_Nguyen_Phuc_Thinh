#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    cout << "Nhap x: ";
    cin >> x;

    int n;
    cout << "Nhap n: ";
    cin >> n;

    float s = x;
    int i = 1;
    while (i <= n)
    {
        s = s * (i + 1);
        i = i + 1;
    }
    cout << "Gia tri cua S la: " << s;
    return 0;
}