#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
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
    cout << "Tong cac uoc so nho hon n la: " << s;
    return 0;
}