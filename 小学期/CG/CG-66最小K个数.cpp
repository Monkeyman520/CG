#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int num[n];
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	sort (num,num+n);
	int i = 0, j = -1;
	while (m>0)
	{
		if (num[i] != j && i < n)
		{
			cout << num[i] << " ";
			j = num[i];
			m--;
		}
		if (i >= n)
		{
			break;
		}
		i++;
	}
	return 0;
}

