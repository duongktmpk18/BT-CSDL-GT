#include <iostream>
using namespace std;
void nhap(int &n)
{
	cin >> n;
}
int acker(int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	}
	else if (n == 0)
	{
		return acker(m - 1, 1);
	}
	else 
	{
		return acker(m - 1, acker(m, n - 1));
	}
}
int main()
{
	int m, n;
	nhap(m);
	nhap(n);
	cout << acker(m, n);
	return 0;
}