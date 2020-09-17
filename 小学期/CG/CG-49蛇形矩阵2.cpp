#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x[n];
	x[0] = 1;
	for(int i=1; i<n; i++)
	{
		x[i]=x[i-1]+i;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i; j++)
		{
			cout << x[i+j]+j << ' ';//" "
		}
		cout<<endl;
		
	}
}
//1 3 6 10 15
//2 5 9 14
//4 8 13
//7 12
//11

