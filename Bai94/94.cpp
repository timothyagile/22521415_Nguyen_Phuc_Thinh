#include <iostream>
#include <cmath>;
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = sqrt(1);
	int i = 2;
	while (i <= n)
	{
		s = sqrt(i + s);
		i = i + 1;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}
