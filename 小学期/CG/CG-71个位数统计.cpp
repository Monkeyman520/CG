#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n = s.length();
	int t[n+1];
	for (int i = 0; i < n; i++)
	{
		t[i] = s[i]-'0';
	} 
	t[n] = 10;
	sort(t, t+n+1);
	int sum = 0;
	int ans = 0;
	for (int i = 0; i <= n; i++)
	{
		if (t[i] != ans)
		{
			if (sum != 0)
				cout << ans << ":" << sum << endl;
			ans = t[i];
			sum = 1;
		}
		else sum++;
	}
	return 0;
} 

