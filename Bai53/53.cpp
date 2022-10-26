#include <iostream>
using namespace std;
void Nhap(int&);
void UocLe(int);
int main()
{
    int n;
    Nhap(n);
    cout << "Cac uoc so le cua n la: ";
    UocLe(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap n: ";
    cin >> n;
}
void UocLe(int n)
{
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
        i = i + 2;
    }
}