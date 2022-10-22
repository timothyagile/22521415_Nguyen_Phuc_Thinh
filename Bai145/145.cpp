#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1;
	int flag = 0;
	while (i <= n)
	{
		if (i * i == n)
			flag = 1;
		i = i + 1;
	}
	if (flag == 1)
		cout << "So " << n << " la so chinh phuong";
	else
		cout << "So " << n << " la so khong khong la so chinh phuong";
	return 0;
}