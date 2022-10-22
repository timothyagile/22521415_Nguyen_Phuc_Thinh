#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int i = 2;
    int t = 1;
    int flag = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            t = t * i;
            flag = 1;
        }
        i = i + 2;
    }
    if (flag == 0)
        cout << "Khong co uoc so chan nao.";
    else
        cout << "Tich cac uoc so chan cua n la: " << t;
    return 0;
}