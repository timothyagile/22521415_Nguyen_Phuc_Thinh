#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1;
	int s = 0;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == n)
		cout << "So " << n << " la so hoan thien";
	else 
		cout << "So " << n << " la so khong hoan thien";
	return 0;
}