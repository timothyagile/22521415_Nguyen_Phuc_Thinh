#include <iostream>
using namespace std;
void Nhap(int&);
float Tich(int);
int main()
{
    int n;
    Nhap(n);
    cout << "Gia tri cua T la: " << Tich(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap n: ";
    cin >> n;
}
float Tich(int n)
{
    float t = 1;
    int i = 1;
    while (i <= n)
    {
        t = t * (1 + (float)1 / (i * i));
        i = i + 1;
    }
    return t;
}