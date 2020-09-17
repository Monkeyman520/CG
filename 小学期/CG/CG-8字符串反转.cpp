#include <iostream>
#include <string>
using namespace std;
int main() {
	long long n,t=0,w=0;
	cin>>n;
	string a;
	char b;
	while(1) {
		if(n==0)break;
		cin>>a;
		cin.get(b);
		if(b=='\n')t=t+1;
		for(long long i=a.size()-1; i>=0; i--) {
			cout<<a[i];
			if(a[i]=='.'||a[i]=='!'||a[i]=='?')w=w+1;
		}
		cout<<b;
		if(t==n||w==n)break;
	}
	return 0;
}
/*
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >>n;
	for(int i=0; i<=n; i++) {
		string str;
		getline(cin,str);
		string temp=str;
		string answer;
		while(temp.find(' ')<temp.length()&&temp.find(' ')>0) {
			string temp2=temp.substr(0,str.find(' '));
			reverse(temp2.begin(),temp2.end());
			answer=answer+temp2+" ";
			temp.erase(0,str.find(' ')+1);
		}
		reverse(temp.begin(),temp.end());
		answer+=temp;
		cout << answer << endl;
	}
	return 0;
}


*/
