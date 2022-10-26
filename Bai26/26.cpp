#include <iostream>
using namespace std;

void Nhap(int&, int&);
void Swap(int&, int&);
void Xuat(int, int);

int main()
{
    int a, b;
    Nhap(a, b);
    Swap(a, b);
    Xuat(a, b);
    return 0;
}

void Nhap(int& a, int& b)
{
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
}
void Swap(int& a, int& b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
void Xuat(int a, int b)
{
    cout << "Sau khi hoan doi, gia tri cua a la: " << a << " va cua b la: " << b;
}
