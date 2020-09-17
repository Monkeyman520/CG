#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
	string str1,str2;
	while(cin>>str1>>str2) {
		int len=str1.length();
		int cnt=0;
		int sum=0;
		for(int i=0; i<len; i++) {
			if(str1[i]=='?') {
				cnt++;
			}
		}
		for(int i=0; i<len; i++) {
			if(str1[i]!='?'&&str1[i]>str2[i]) {
				sum+=pow(10,cnt);
				break;
			} else if(str1[i]!='?'&&str1[i]<str2[i]) {
				break;
			} else if(str1[i]=='?') {
				cnt--;
				sum+=pow(10,cnt)*(9-(int(str2[i])-48));
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
