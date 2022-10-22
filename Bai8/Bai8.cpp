#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so canh cua da giac: ";
    cin >> n;
    float r;
    cout << "Nhap ban kinh duong tron ngoai tiep da giac: ";
    cin >> r;
    float p = n * r * sin(3.14 / n) / 2;
    cout << "Chu vi cua da giac la: " << p;
    return 0;
}