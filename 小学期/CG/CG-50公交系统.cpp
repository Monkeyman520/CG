#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int w;
	cin>>w;
	int a[n];
	int stop[n+1];
	int step=1;
	int cnt=0;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=n-1; i>=0; i--) {
		int z=step-1;
		stop[step]=stop[z]-a[i];
		step++;
	}
	for(int i=0; i<step; i++) {
		for(int j=i+1; j<step; j++) {
			if(stop[j]>stop[i]) {
				int k=stop[i];
				stop[i]=stop[j];
				stop[j]=k;
			}
		}
	}
	for(int i=0; i<=w; i++) {
		if((i+stop[0])<=w&&(i+stop[step-1])>=0) cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
