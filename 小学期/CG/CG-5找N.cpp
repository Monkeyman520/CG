#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main() {
	long long int s1,s2;
	cin>>s1>>s2;
	stringstream ss2;
	ss2<<s2;
	string str1=ss2.str();
	for(int i=1; i<=s1; i++) {
		if(i%s2==0) {
			cout<<i<<" ";
		} else {
			stringstream ss;
			ss<<i;
			string str=ss.str();
			int p=str.find(str1);
			if(p>=0) {
				cout<<i<<" ";
			}
		}
	}
	return 0;
}

