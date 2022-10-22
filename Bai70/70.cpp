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
	int i = 2;
	while (i <= 2*n)
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}