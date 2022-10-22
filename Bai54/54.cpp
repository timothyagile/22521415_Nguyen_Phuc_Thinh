#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int s = 0;
    int flag = 0;
    int i = 2;
    while (i <= n)
    {
        if (n % i == 0)
        {
            s = s + 1;
            flag = 1;
        }
        i = i + 2;
    }
    if (flag == 0)
        cout << "Khong co uoc so chan nao";
    else
        cout << "Tong cac uoc so chan cua n la: " << s;
    return 0;
}