#include <iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;

int main() {
	int a[55],i=0;
	string s;
	getline(cin,s);
	memset(a,-1,sizeof(a));
	for(int k=0; k<s.size(); k++) {
		if(isalnum(s[k]))
			a[i]=s[k]-'0';
		i++;
	}
	sort(a,a+i);
	for(int j=0; j<i; j++) {
		if(a[j]>0) {
			cout<<a[j];
			a[j]=-1;
			break;
		}
	}
	for(int j=0; j<i; j++) {
		if(a[j]!=-1)
			cout<<a[j];
	}
	return 0;
}
