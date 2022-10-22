#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float s = 0;
    int i = 1;
    while (i <= 2 * n)
    {
        s = s + (float)i / (i + 1);
        i = i + 2;
    }
    cout << "Gia tri cua S la: " << s;
    return 0;
}