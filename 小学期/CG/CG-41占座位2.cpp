#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
int deal(int x) {
	for(int i=0; i<=v.size()-x; i++) {
		if(v[i]==0) {
			int j=i;
			for(; j<=i+x-1; j++) {
				if(v[j]!=0)
					break;
			}
			if(j==i+x)
				return i;
		}
	}
	return -1;
}
int main() {
	int n,m,k,n1,n2,l;
	cin>>n>>m>>k;
	v.resize(n*n);
	string s;
	bool p,q;
	for(int i=0; i<k; i++) {
		p=false;
		q=true;
		cin>>s;
		if(s=="in") {
			cin>>n1>>n2;
			for(int j=0; j<n*n; j++)
				if(v[j]==n1)
					p=true;
			if(p) {
				cout<<"no"<<endl;
				continue;
			} else {
				int x=deal(n2);

				if(x==-1) {
					cout<<"no"<<endl;
					continue;
				} else {
					cout<<"yes"<<endl;
					for(int x_=x; x_<=x+n2-1; x_++)
						v[x_]=n1;
					continue;
				}
			}
		} else {
			cin>>l;
			for(int k=0; k<n*n; k++)
				if(v[k]==l)
					v[k]=0;
		}
	}
	return 0;
}
