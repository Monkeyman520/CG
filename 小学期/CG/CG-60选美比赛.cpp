#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int num[2][n];
	for (int i = 0; i < n; i++)
	{
		cin >> num[0][i];
		num[1][i] = 0;
	}
	int d = 0, c = 0, y = 100;
	while(d < n)
	{
		int max = 0;
		c++;
		for (int i = 0; i < n; i++)
		{
			if (num[0][i] > max && num[0][i] < y)
			{
				max = num[0][i];
			}
		}
		y = max;
		for (int i = 0; i < n; i++)
		{
			if (num[0][i] == max)
			{
				num[1][i] = c;
				d++;
			}	 
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << num[1][i] << " ";
	}
	return 0;
}

