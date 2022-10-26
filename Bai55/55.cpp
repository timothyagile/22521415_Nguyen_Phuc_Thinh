#include <iostream>
using namespace std;
void Nhap(int&);
int TichUoc(int);
int main()
{
    int n;
    Nhap(n);
    cout << "Tich cac uoc so le cua n la: " << TichUoc(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap n: ";
    cin >> n;
}
int TichUoc(int n)
{
    int i = 1;
    int t = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            t = t * i;
        }
        i = i + 2;
    }
    return t;
}