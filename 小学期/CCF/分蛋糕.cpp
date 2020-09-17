#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	memset(arr,0,sizeof(arr));
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int cnt=0;
	int sum=0;
	int i=0;
	while(i<n) {
		cnt++;
		while(sum<k) {
			sum+=arr[i];
			i++;
		}
		sum=0;
	}
	cout<<cnt;
	return 0;
}
