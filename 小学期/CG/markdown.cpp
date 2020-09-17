#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string str;
	string temp;
	int n;
	cin >> n;
	while(getline(cin,temp)) {
		str=str+temp;
	}
	cout << str.length()/n+1 << endl;
}
