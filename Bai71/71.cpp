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
	int t = x;
	int i = 1;
	while (i <= 2*n + 1)
	{
		s = s + t;
		t = t * x * x;
		i = i + 2;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}