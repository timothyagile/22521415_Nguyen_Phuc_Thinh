#include <iostream>
using namespace std;
void Nhap(int&);
int DemUoc(int);
int main()
{
    int n;
    Nhap(n);
    cout << "So luong uoc cua n la: " << DemUoc(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap n: ";
    cin >> n;
}
int DemUoc(int n)
{
    int dem = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
            dem++;
        i = i + 1;
    }
    return dem;
}