#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++) {
		a[i]=i+1;
	}
	int count=n;
	int num=1;
	for(int i=0; count>1; i++) {
		if(a[i%n]!=0) {    //i号小朋友未出局
			if(num%k==0||num%10==k) {
				count--;        //总人数-1
				a[i%n]=0;  //标记出局
			}
			num++;           //报数+1
		}
	}
	for(int i=0; i<n; i++) {
		if(a[i]!=0) {
			cout << a[i] << endl;
		}
	}
	return 0;
}

