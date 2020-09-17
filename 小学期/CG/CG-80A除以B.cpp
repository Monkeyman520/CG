#include <iostream>
#include <iostream>
using namespace std;
int main()
{
	string a;
	int b;
	cin >> a >> b;
	int l = a.length();
	int r, t;
	r = (a[0] - '0')/b;
	t = (a[0] - '0')%b;
	if (l == 1 || (r != 0 && l > 1))
		cout << r;
	for (int i = 1; i < l; i++)
	{
		r = (t*10 + a[i] - '0')/b;
		cout << r;
		t = (t*10 + a[i] - '0')%b;
	}
	cout << " " << t;
	return 0;
}


