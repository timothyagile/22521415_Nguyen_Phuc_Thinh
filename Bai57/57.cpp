#include <iostream>
using namespace std;
void Nhap(int&);
int TongUoc(int);
int main()
{
    int n;
    Nhap(n);
    cout << "Tong cac uoc so nho hon n la: " << TongUoc(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap n: ";
    cin >> n;
}
int TongUoc(int n)
{
    int i = 1;
    int s = 0;
    while (i < n)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
        i = i + 1;
    }
    return s;
}