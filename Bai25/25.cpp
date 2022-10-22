#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << "Sau khi hoan doi, gia tri cua a la: " << a << " va cua b la: " << b;
    return 0;
}