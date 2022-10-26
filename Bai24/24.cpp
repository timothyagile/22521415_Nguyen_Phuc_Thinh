#include <iostream>
using namespace std;

void Nhap(int&);
int XuLy(int);

int main()
{
    int n;
    Nhap(n);
    cout << "Chu so hang tram cua n la: " << XuLy(n);
    return 0;
}
void Nhap(int& n)
{
    cout << "Nhap n: ";
    cin >> n;
}
int XuLy(int n)
{
    return (n / 100) % 10;
}