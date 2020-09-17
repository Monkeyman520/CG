#include <iostream>
using namespace std;
int main()
{
	while (1)
	{
		int n;
		cin >> n;
		if (n==0)	break;
		char a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int ans = -1, j = n-1;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == a[j])
			{
				j--;
			}
			else 
			{
				ans++;
				i = ans;
				j = n-1;
			}
			if (i-j>=0)	break;
		}
		cout << ans+1 << endl;
		//cout << a << endl;
	}
	return 0;
}

