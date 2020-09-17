#include <iostream>
using namespace std;
struct str
{
	char ch;
	int s;
	int p;
	int f;
	int a[3];//²¼¼ôµ¶´¸×Ó 
};
int main()
{
	int n;
	cin >> n;
	struct str j={
		.ch = '\0',
		.s = 0,
		.p = 0,
		.f = 0,
		.a = {0,0,0}
	};
	struct str y={
		.ch = '\0',
		.s = 0,
		.p = 0,
		.f = 0,
		.a = {0,0,0}
	};
	while (n>0)
	{
		cin >> j.ch >> y.ch;
		//cout << j.ch << y.ch << endl;
		if (j.ch == 'B')	
		{
			if (y.ch == 'B')
			{
				j.p++;
				y.p++;
			}	
			else if (y.ch == 'J')
			{
				y.a[1]++;
				j.f++;
				y.s++;
			}
			else if (y.ch == 'C')
			{
				j.s++;
				j.a[0]++;
				y.f++;
			}
		}
		else if (j.ch == 'J')
		{
			if (y.ch == 'B')
			{
				j.a[1]++;
				j.s++;
				y.f++;
			}	
			else if (y.ch == 'J')
			{
				j.p++;
				y.p++;
			}
			else if (y.ch == 'C')
			{
				y.a[2]++;
				j.f++;
				y.s++;
			}
		}
		else if (j.ch == 'C')
		{
			if (y.ch == 'B')
			{
				y.a[0]++;
				j.f++;
				y.s++;
			}
			else if (y.ch == 'J')
			{
				j.a[2]++;
				j.s++;
				y.f++;
			}
			else if (y.ch == 'C')
			{
				j.p++;
				y.p++;
			}
		}
		n--;
	}
	cout << j.s << " " << j.p << " " << j.f << endl;
	cout << y.s << " " << y.p << " " << y.f << endl;
	if (j.a[0] >= j.a[1] && j.a[0] >= j.a[2])
	{
		cout << "B" << " ";
	}
	else if (j.a[2] >= j.a[0] && j.a[2] >= j.a[1])
	{
		cout << "C" << " ";
	}
	else if (j.a[1] >= j.a[0] && j.a[1] >= j.a[2])
	{
		cout << "J" << " ";
	}
	if (y.a[0] >= y.a[1] && y.a[0] >= y.a[2])
	{
		cout << "B" << " ";
	}
	else if (y.a[2] >= y.a[0] && y.a[2] >= y.a[1])
	{
		cout << "C" << " ";
	}
	else if (y.a[1] >= y.a[0] && y.a[1] >= y.a[2])
	{
		cout << "J" << " ";
	}
	return 0;
} 

