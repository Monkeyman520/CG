#include<iostream>
using namespace std;
int n;
int main() {
	cin>>n;
	int u=0;
	int z=1;
	for(int i=1; i<=n; i++) { //第几行
		int chufa=z+u;//出发点
		z+=u;
		int d=i+1;//间隔
		for(int j=1; j<=n-i+1; j++) {
			if(j==1) {
				cout<<chufa;
			} else {
				cout<<" "<<chufa+d;
				chufa+=d;
				d++;
			}
		}
		cout<<endl;
		u++;
	}
}

