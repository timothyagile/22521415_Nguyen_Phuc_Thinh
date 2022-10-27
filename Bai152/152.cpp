#include <iostream>
using namespace std;
void Nhap(int&);
void KiemTra(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
		int t = n;
	int flag = 1;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		cout << "So " << n << " co dang 3^m";
	return 0;
}
void Nhap(int& n)
{
	cout << "Nhap n: ";
	cin >> n;
}
void KiemTra(int n)
{
	int t = n;
	int flag = 1;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		cout << "So " << n << " co dang 3^m";
}