#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	cin >> N;
	while (N>0)
	{
		int n;
		cin >> n;
		long long int a[n];
		long long int sum=0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a+n);
		for (int i = 1; i < n; i++)
		{
			sum = sum+a[i]+a[i-1];
			a[i]+=a[i-1];
			sort(a+i,a+n);
		}
		cout << sum << endl;
		N--;
	}
	return 0;
}

