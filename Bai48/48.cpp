#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int&, float &);
float Tong(int, float); 

int main()
{
    float x;
    int n;
    Nhap(n, x);
    cout << "Gia tri cua S la: " << Tong(n, x);
    return 0;
}
void Nhap(int& n, float &x)
{
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
}
float Tong(int n, float x)
{
    float s = x;
    int i = 1;
    while (i <= n)
    {
        s = s * (i + 1);
        i = i + 1;
    }
    return s;
}