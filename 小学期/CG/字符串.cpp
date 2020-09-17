#include<iostream>
#include<string.h>
using namespace std;

int main() {
	int n,d,s;
	string str;
	cin >> n >> d >> s >> str;
	int sum=0;
	string temp="\0";
	for(int i=0; i<n; i++) {
		if(i==0) {
			sum+=d;
			temp+=str[i];
		} else if(temp.find(str[i])) {
			sum+=s;
			for(int k=1; k<n-i; k++) {
				if(temp.find(str.substr(i,k))&&!temp.find(str.substr(i,k+1)) ) {
					temp+=str.substr(i,k);
					i+=k;
				}
			}
		}
	}
	cout << sum << endl;
	return 0;
}
