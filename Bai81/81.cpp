#include <iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int t = x;
	int i = 0;
	while (i <= n)
	{
		s = s + (float)1 / t;
		i = i + 1;
		t = t * (x + i);
		
	}
	cout << "Gia tri cua s la: " << s;
	return 0;
}