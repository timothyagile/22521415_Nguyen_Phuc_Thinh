#include <iostream>
using namespace std;
void Nhap(int&, int&);
void KiemTra(int, int);
int main()
{
	int x, y;
	Nhap(x, y);
	cout << "Cac nam nhuan trong doan hai nam [" << x << ", " << y << "] la: ";
	KiemTra(x, y);
	return 0;
}
void Nhap(int& x, int &y)
{
	cout << "Nhap nam dau: ";
	cin >> x;
	cout << "Nhap nam cuoi: ";
	cin >> y;
}
void KiemTra(int x, int y)
{
	int i = x;
	while (i <= y)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			cout << i << " ";
		i++;
	}

}
