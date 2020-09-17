#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
	cin>>a>>b;
	int A=a.length(),B=b.length(),t=0;
	for(int i=0; i<B; i++) {
		for(int j=0; j<A; j++) { //一个一个地找
			if(b[i]==a[j]) {
				t++;
				a[j]=']';//重点，在找到有对应珠子后，把这个字符换掉，避免重复对应
				break;		//找到就退出循环
			}
		}
	}
	if(t>=B)
		cout<<"Yes"<<" "<<A-t;
	else
		cout<<"No "<<B-t;
}

