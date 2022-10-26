#include <iostream>
using namespace std;
void Nhap(int&);
int TongUoc(int);
int main()
{
    int n;
    Nhap(n);
    cout << "Tong cac uoc so chan cua n la: " << TongUoc(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap n: ";
    cin >> n;
}
int TongUoc(int n)
{
    int s = 0;
    int i = 2;
    while (i <= n)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
        i = i + 2;
    }
    return s;
}