#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n],b[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	for(int i=0; i<n; i++) {
		if(i==0) {
			b[i]=(a[i]+a[i+1])/2;
		} else if(i>0&&i<n-1) {
			b[i]=(a[i-1]+a[i]+a[i+1])/3;
		} else if(i==n-1) {
			b[i]=(a[i-1]+a[i])/2;
		}
	}
	for(int i=0; i<n; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
