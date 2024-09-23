#include <iostream>
using namespace std;
int dem(int n)
{
	if (n /10 == 0)
	{
		return 1;
	}
	else 
	{
		return 1 + dem(n /10);
	}
}
int main()
{
	int n;
	cin >> n;
	cout << dem(n);
	return 0;
}

