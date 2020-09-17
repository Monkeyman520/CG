#include <iostream>

using namespace std;
int _min,q[10];
void money(int n,int p,int c) {
	if(p<0) {
		return;
	}
	if(c<_min&&n==0) {
		_min=c;
	}
	if(n>=q[p]) {
		money(n-q[p],p,++c);
		--c;
		money(n,--p,c);
		++p;
	} else if(n>0) {
		money(n,--p,c);
		++p;
	}
	return ;
}
int main() {
	int m,k;
	while(cin>>m&&m!=0) {
		_min=9999;
		cin>>k;
		for(int i=0; i<k; i++) {
			cin>>q[i];
		}
		money(m,k-1,0);
		if(_min!=9999) {
			cout<<_min<<endl;
		} else {
			cout<<"Impossible"<<endl;
		}
	}
	return 0;
}
