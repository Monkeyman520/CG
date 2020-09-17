#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a,b;
	int aa=0,bb=0,da,db;
	int A = 0, B = 0; 
	cin >> a >> da >> b >> db;
	for (int i = a.length()-1; i >= 0; i--)
	{
		if (da == (a[i]-'0'))
			aa++;
	}
	for (int i = b.length()-1; i >= 0; i--)
	{
		if (db == (b[i]-'0'))
			bb++;
	}
	for (int j = 0; j < aa; j++)
	{
		A = A*10 + da;
	}
	for (int j = 0; j < bb; j++)
	{
		B = B*10 + db;
	}
	cout << A+B;
	//cout << a << endl << da << endl << b << endl << db;
	return 0;
} 

