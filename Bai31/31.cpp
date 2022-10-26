#include <iostream>
using namespace std;

void Nhap(int&);
float Tong(int);

int main()
{
    int n;
    Nhap(n);
    cout << "Gia tri cua S la: " << Tong(n);
    return 0;
}

void Nhap(int& n)
{
    cout << "Nhap n: ";
    cin >> n;
}
float Tong(int n)
{
    float s = 0;
    int i = 1;
    while (i <= 2 * n + 1)
    {
        s = s + (float)1 / i;
        i = i + 2;
    }
    return s;
}