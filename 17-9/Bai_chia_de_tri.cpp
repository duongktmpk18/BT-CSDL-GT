#include <iostream>
using namespace std;
void nhap(int &n, int a[1000])
{
	cin >>n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int max(int a[1000], int m, int n)
{
	if (m == n)
	{
		return a[m];
	}
	else if (m == n - 1)
	{
			return (a[m] > a[n]) ? a[m] : a[n];
	}
	else
	{
		int mid = (m + n) / 2;
		int maxleft = max(a,m, mid);
		int maxright = max(a, mid + 1, n);
		return (maxleft > maxright) ? maxleft : maxright;
	}
}
int main()
{
	int n;
	int m = 0;
	int a[1000];
	nhap(n, a);
	cout << max(a, m, n -1);
	return 0;
}
