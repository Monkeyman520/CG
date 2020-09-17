#include <iostream>
using namespace std;
struct number
{
	string name;
	string top;//10Î»
	int sum;
};
int main()
{
	int n;
	cin >> n;
//	cout << n << endl;
	number num[200];
	int p = 0;//ÈËÊı
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
//		cout << m << endl;
		for (int j = 0; j < m; j++)
		{
			number a;
			cin >> a.name;
//			cout << a.name << endl;
			int k;
			for (k = 0; k < p; k++)
			{
				if (num[k].name == a.name) break;
			}
			if (k == p)
			{
				num[k].name = a.name;
				num[k].top = "000000000000";
				num[k].sum = 0;
				p++;
			}
			num[k].top[j]++;
			switch (j)
			{
				case 0:num[k].sum+=25;break;
				case 1:num[k].sum+=18;break;
				case 2:num[k].sum+=15;break;
				case 3:num[k].sum+=12;break;
				case 4:num[k].sum+=10;break;
				case 5:num[k].sum+=8;break;
				case 6:num[k].sum+=6;break;
				case 7:num[k].sum+=4;break;
				case 8:num[k].sum+=2;break;
				case 9:num[k].sum+=1;break;
			}
		}
	}
	int x = 0, y = 0;
	for (int i = 0; i < p; i++)
	{
		if (num[i].sum>num[x].sum || (num[i].sum==num[x].sum && num[x].top<num[i].top))
			x = i;
		if (num[i].top>num[y].top || (num[i].top==num[y].top && num[y].sum<num[i].sum))
			y = i;
	}
	cout << num[x].name << endl << num[y].name;
}

