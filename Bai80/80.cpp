#include <iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	int s = 1;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		i = i + 1;
		s = s + i * t;
	}
	cout << "Gia tri cua s la: " << s;
	return 0;
}