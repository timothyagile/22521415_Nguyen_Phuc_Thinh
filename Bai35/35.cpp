#include <iostream>
using namespace std;
void Nhap(int&);
int Tich(int);
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
int Tich(int n)
{
    int t = 1;
    int i = 1;
    while (i <= n)
    {
        t = t * i;
        i = i + 1;
    }
    return t;
}