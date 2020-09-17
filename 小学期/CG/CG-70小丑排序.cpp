#include <iostream>
using namespace std;
int main()
{
	int n, m=1;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		string s[n+1];
		for (int i = 1; i <= n; i++)
		{
			cin >> s[i];
		}
		cout << "set-" << m << endl;
		m++;
		if (n%2 == 0)
		{
			for (int i = 1; i <= n; i+=2)
			{
				cout << s[i] << endl;
			}
			for (int j = n; j > 0; j-=2)
			{
				cout << s[j] << endl;
			}
		}
		else 
		{
			for (int i = 1; i <= n; i+=2)
			{
				cout << s[i] << endl;
			}
			for (int j = n-1; j > 0; j-=2)
			{
				cout << s[j] << endl;
			}
		}
	}
	return 0;
} 

