#include <iostream>
using namespace std;
void Nhap(int&, float &);
int Tich(int, float);
int main()
{
    float x;
    int n;
    Nhap(n, x);
    cout << "Gia tri cua T la: " << Tich(n, x);
    return 0;
}
void Nhap(int& n, float &x)
{
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
}
int Tich(int n, float x)
{
    int t = 1;
    int i = 1;
    while (i <= n)
    {
        t = t * x;
        i = i + 1;
    }
    return t;
}