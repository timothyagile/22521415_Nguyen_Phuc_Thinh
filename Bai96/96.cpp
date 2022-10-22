#include <iostream>
#include <cmath>;
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = 1;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = sqrt(t + s);
		i = i + 1;
		t = t * i;
	}
	cout << "Gia tri cua S la: " << s;
	return 0;
}
