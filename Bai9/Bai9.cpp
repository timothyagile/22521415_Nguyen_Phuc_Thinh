#include <iostream>
using namespace std;

void Nhap(float&, int&);
float XuLy(float, int);

int main()
{
    int n;
    float r;
    Nhap(r, n);
    float s = XuLy(r, n);
    cout << "Dien tich cua da giac la: " << s;
    return 0;
}

void Nhap(float &r, int &n)
{
    cout << "Nhap ban kinh duong tron ngoai tiep da giac: ";
    cin >> r;
    cout << "Nhap so canh cua da giac: ";
    cin >> n;
}
float XuLy(float r, int n)
{
    return (n * r * r * sin(2 * 3.14 / n)) / 2;
}