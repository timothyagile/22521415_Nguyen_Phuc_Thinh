#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "Nhap nam dau: ";
	cin >> x;
	cout << "Nhap nam cuoi: ";
	cin >> y;
	int i = x;
	cout << "Cac nam nhuan trong doan hai nam [" << x << ", " << y << "] la: ";
	while (i <= y)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			cout << i << " ";
		i++;
	}
	return 0;
}
