#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		dem = dem + 1;
		t = t / 10;
	}
	if (dem == 0) 
	cout << "So luong chu so cua n la: " << dem;
	return 0;
}