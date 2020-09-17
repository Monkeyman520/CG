#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	string a="no good";
	while(1) {
		cin>>n;
		if(n==0)break;
		getchar();//吞回车
		int a1=0,a2=0;
		if(n%2==0) {
			char ch[n];
			string s[n];
			for(int i=0; i<n; i++) {
				getline(cin,s[i]);
				if(s[i].find(a,0)!=-1) { //没有进
					ch[i]='X';
				} else { //进
					ch[i]='O';
				}
			}
			for(int i=0; i<n/2; i++)cout<<i+1<<' ';
			cout<<"Score"<<endl;
			for(int i=0; i<n/2; i++) {
				if(ch[i*2]=='O')a1++;
				if(ch[i*2+1]=='O')a2++;
			}
			for(int i=0; i<n/2; i++) {
				cout<<ch[i*2]<<' ';
			}
			cout<<a1<<endl;
			for(int i=0; i<n/2; i++) {
				cout<<ch[i*2+1]<<' ';
			}
			cout<<a2<<endl;
		} else {
			char ch[n+1];
			string s[n];
			for(int i=0; i<n; i++) {
				getline(cin,s[i]);
				if(s[i].find(a,0)!=-1) { //没有进
					ch[i]='X';
				} else {
					ch[i]='O';
				}
			}
			ch[n]='-';
			for(int i=0; i<n/2+1; i++)cout<<i+1<<' ';
			cout<<"Score"<<endl;
			for(int i=0; i<n/2+1; i++) {
				if(ch[i*2]=='O')a1++;
				if(ch[i*2+1]=='O')a2++;
			}
			for(int i=0; i<n/2+1; i++) {
				cout<<ch[i*2]<<' ';
			}
			cout<<a1<<endl;
			for(int i=0; i<n/2+1; i++) {
				cout<<ch[i*2+1]<<' ';
			}
			cout<<a2<<endl;
		}
	}
}

