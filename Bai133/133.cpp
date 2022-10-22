#include <iostream>
using namespace std;
int main()
{
	float x, y, z;
	cout << "Nhap gia tri cua x: ";
	cin >> x;
	cout << "Nhap gia tri cua y: ";
	cin >> y;
	cout << "Nhap gia tri cua z: ";
	cin >> z;

	if (x + y > z && y + z > x && x + z > y)
	{
		if (x == y && y == z)
			cout << "ABC la tam giac deu";
		else
		{
			if (x* x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
			{
				if (x == y || y == z || x == z)
					cout << "ABC la tam giac vuong can";
				else
					cout << "ABC la tam giac vuong";
			}
			else
			{
				if (x == y || y == z || z == z)
					cout << "ABC la tam giac can";
				else
					cout << "ABC la tam giac thuong";
			}
		}
	}
	else
		cout << "ABC khong la tam giac";
	return 0;
}