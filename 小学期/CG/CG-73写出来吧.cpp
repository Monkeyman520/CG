#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int l = s.length();
	int sum = 0;
	for (int i = 0; i < l; i++)
	{
		sum = sum + (s[i] - '0');
	}
	int ss = 1, sss = 1, ans = sum;
	while (sum/10 != 0)
	{
		ss++;
		sss*=10;
		sum/=10;
	}
	int a;
	for (int i = 0; i < ss; i++)
	{
		a = ans/sss;
		ans = ans%sss;
		sss/=10;
		switch(a)
		{
			case (0):cout << "ling" << " "; break;
			case (1):cout << "yi" << " "; break;
			case (2):cout << "er" << " "; break;
			case (3):cout << "san" << " "; break;
			case (4):cout << "si" << " "; break;
			case (5):cout << "wu" << " "; break;
			case (6):cout << "liu" << " "; break;
			case (7):cout << "qi" << " "; break;
			case (8):cout << "ba" << " "; break;
			case (9):cout << "jiu" << " "; break;
			default:break;
		}
	}
	return 0;
}

