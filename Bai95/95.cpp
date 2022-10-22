#include <iostream>
#include <cmath>;
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = sqrt(n);
	int i = n;
	while (i >= 1)
	{
		s = sqrt(i + s);
		i = i - 1;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}
