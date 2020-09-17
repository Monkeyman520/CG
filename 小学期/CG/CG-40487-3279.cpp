#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int y[n];
	string x[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		y[i] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x[i].length(); j++)
		{
			if (x[i][j] == 'A' || x[i][j] == 'B' || x[i][j] == 'C') x[i][j] = '2';
			else if (x[i][j] == 'D' || x[i][j] == 'E' || x[i][j] == 'F') x[i][j] = '3';
			else if (x[i][j] == 'G' || x[i][j] == 'H' || x[i][j] == 'I') x[i][j] = '4';
			else if (x[i][j] == 'J' || x[i][j] == 'K' || x[i][j] == 'L') x[i][j] = '5';
			else if (x[i][j] == 'M' || x[i][j] == 'N' || x[i][j] == 'O') x[i][j] = '6';
			else if (x[i][j] == 'P' || x[i][j] == 'R' || x[i][j] == 'S') x[i][j] = '7';
			else if (x[i][j] == 'T' || x[i][j] == 'U' || x[i][j] == 'V') x[i][j] = '8';
			else if (x[i][j] == 'W' || x[i][j] == 'X' || x[i][j] == 'Y') x[i][j] = '9';
			else if (x[i][j] == '-')
			{
				x[i].erase(j,1);
				j--;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (y[i] != 0)
		for (int j = i+1; j < n; j++)
		{
			if (x[i] == x[j] && y[j] != 0)
			{
				y[i]++;
				y[j]=0;
			}
		}
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (x[i] > x[j])
			{
				swap(x[i],x[j]);
				swap(y[i],y[j]);
			}
		}
	}
	string a[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = x[i].insert(3,1,'-');
	}
	for (int i = 0; i < n; i++)
	{
		if (y[i] > 1)
		{
			cout << a[i] << " " << y[i] << endl;
		}
	}
	return 0;
} 

