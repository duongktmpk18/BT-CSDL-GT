#include <iostream>
using namespace std;
int power (int n, int a)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return a;
	}
	else 
	{
		int x = power(n / 2, a);
		return (n % 2 == 0) ? x * x : x * x * a;
	}
}
int main()
{
	int n, a;
	cin >> n >> a;
	cout << power(n, a);
	return 0;
}
