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
		if(a[i%n]!=0) {    //i��С����δ����
			if(num%k==0||num%10==k) {
				count--;        //������-1
				a[i%n]=0;  //��ǳ���
			}
			num++;           //����+1
		}
	}
	for(int i=0; i<n; i++) {
		if(a[i]!=0) {
			cout << a[i] << endl;
		}
	}
	return 0;
}

