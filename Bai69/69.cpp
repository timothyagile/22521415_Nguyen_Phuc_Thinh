#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + t;
		i = i + 1;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}