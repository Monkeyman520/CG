#include <iostream>
using namespace std;
int main() {
	string mystr,str;
	int i,j,len,f,min;
	int a[10]= {0};
	cin>>mystr;
	for(i=0; mystr[i]!='\0'; i++) {
		a[mystr[i]-'0']++;
	}
	while(cin>>str) {
		f=0;
		len=str.length();
		min=str[0]-'0'+1;
		if(len==5) {
			for(j=min; j<=5; j++) {
				if(a[j]>=1&&a[j+1]>=1&&a[j+2]>=1&&a[j+3]>=1&&a[j+4]>=1) {
					if(f==0) {
						cout<<"YES ";
						f=1;
					} else {
						cout<<" ";
					}
					cout<<j<<j+1<<j+2<<j+3<<j+4;
				}
			}
		} else {
			for(i=min; i<10; i++) {
				if(a[i]>=len) {
					if(f==0) {
						cout<<"YES ";
						f=1;
					} else {
						cout<<" ";
					}
					for(j=0; j<len; j++) {
						cout<<i;
					}
				}
			}
		}
		if(f==1) {
			cout<<endl;
		} else if(f==0) {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
