#include <iostream>
#include <algorithm>
using namespace std;
struct student
{
	string num;
	int mun;
	int day;
};
bool cmp(student s1,student s2)
{
	if (s1.mun != s2.mun)
		return s1.mun < s2.mun;
	else return s1.day < s2.day;
}

int main()
{
	int n;
	cin >> n;
	student s[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].num >> s[i].mun >> s[i].day;
	}
	sort(s,s+n,cmp);
	int a=0, b=0;
	for (int i = 0; i < n; i++)
	{
		if (a == s[i].mun && b ==s[i].day)
			cout << s[i].num << " ";
		else 
		{
			a = s[i].mun;
			b = s[i].day;
			cout << endl;
			cout << a << " " << b << " " << s[i].num << " ";
		}
	} 
	return 0;
}

