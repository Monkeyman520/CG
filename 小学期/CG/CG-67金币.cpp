#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		cout << n << " ";
		int i = 0, j = 0, sum = 0;
		for (int k = 0; k < n; k++)
		{
			if (i == 0)
			{
				j++;
				i=j; 
			}
			sum+=j;
			i--;
		} 
		cout << sum << endl;
	}
	return 0;
}

