#include <iostream>
#include <stdio.h>
using namespace std;
int Year(int y)
{
	if ((y%4==0 && y%100!=0) || (y%100==0 && y%400==0)) return 1;
	else return 0;
}
int main()
{
	int day;
	while (cin >> day && day != -1)
	{
		int week = day%7;
		char weeks[7][20] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
		int years[2] = {365, 366};
		int months[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31, 31,29,31,30,31,30,31,31,30,31,30,31};
		int i = 2000, j = 0;
		for (i = 2000; day>=years[Year(i)]; i++)
		{
			day -= years[Year(i)];
		}
		for (j = 0; day >= months[Year(i)][j]; j++)
		{
			day -= months[Year(i)][j];
		}
		printf("%d-%02d-%02d %s\n", i, j+1, day+1, weeks[week]);
	}
}

