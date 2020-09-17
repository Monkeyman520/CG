#include <iostream>
using namespace std;
int main()
{
	int YS(int x);
	int n, m;
	while(cin >> n >> m)
	{
		int a = YS(n);
		int b = YS(m);
		if (a==m && b==n)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
int YS(int x)
{
	int sum = 0;
	for (int i = 1; i < x; i++)
	{
		if (x%i == 0)
			sum+=i;
	}
	return sum;
}

