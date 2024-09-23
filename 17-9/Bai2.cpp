#include <iostream>
using namespace std;
void nhap(int &n)
{
	cin >> n;
}
long ucln(int q, int p)
{
	if (p % q == 0)
	{
		return q;
	}
	else 
	{
		return ucln(p % q, q);
	}
}
int main()
{
	int q, p;
	nhap(q);
	nhap(p);
	cout << ucln(q, p);
	return 0;
}
