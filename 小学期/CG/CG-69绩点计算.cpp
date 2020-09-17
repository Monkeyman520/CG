#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double m[n][4];
	double sum1 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> m[i][0];
		sum1+=m[i][0];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> m[i][1];
	}
	for (int i = 0; i < n; i++)
	{
		if (m[i][1]>=90 && m[i][1] <=100)	m[i][2] = 4.0;
		else if (m[i][1]>=85 && m[i][1] <=89)	m[i][2] = 3.7;
		else if (m[i][1]>=82 && m[i][1] <=84)	m[i][2] = 3.3; 
		else if (m[i][1]>=78 && m[i][1] <=81)	m[i][2] = 3.0; 
		else if (m[i][1]>=75 && m[i][1] <=77)	m[i][2] = 2.7; 
		else if (m[i][1]>=72 && m[i][1] <=74)	m[i][2] = 2.3; 
		else if (m[i][1]>=68 && m[i][1] <=71)	m[i][2] = 2.0; 
		else if (m[i][1]>=64 && m[i][1] <=67)	m[i][2] = 1.5; 
		else if (m[i][1]>=60 && m[i][1] <=63)	m[i][2] = 1.0; 
		else if (m[i][1]>=0 && m[i][1] <=59)	m[i][2] = 0;
	}
	double sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		m[i][3] = m[i][2]*m[i][0];
		sum2+=m[i][3];
	}
	double ans = sum2/sum1;
	cout << setiosflags(ios::fixed) << setprecision(2) << ans;
	return 0;
} 

