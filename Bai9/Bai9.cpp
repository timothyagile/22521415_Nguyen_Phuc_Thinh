#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so canh cua da giac: ";
    cin >> n;

    float r;
    cout << "Nhap ban kinh duong tron ngoai tiep da giac: ";
    cin >> r;

    float s = (n * r * r * sin(2 * 3.14 / n)) / 2;
    cout << "Dien tich cua da giac la: " << s;
    return 0;
}