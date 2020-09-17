#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main ()
{
	int n;
	cin >> n;
	int num[n];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	sort (num,num+n);
	int min = num[0];
	int max = num[n-1];
	int ans = 1000000, j = 1000000;
	int a = 1000000;
	for (int i = 0; i < n; i++)
	{
		a = abs(abs(num[i]-max) - abs(num[i]-min));
		if (a < ans)
		{
			ans = a;
			j = num[i];
		}
	}
	cout << j;
	return 0;
} 

