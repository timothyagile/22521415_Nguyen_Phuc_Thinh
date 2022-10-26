#include <iostream>
using namespace std;
void Nhap(int&);
void Uoc(int);
int main()
{
    int n;
    Nhap(n);
    Uoc(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap n: ";
    cin >> n;
}
void Uoc(int n)
{
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
            cout << "Uoc cua n la: " << i << endl;
        i = i + 1;
    }
}
