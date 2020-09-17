#include <iostream>
using namespace std;
int avs(int a[],int n) {
	double sum=0,ave=0;
	for(int i=0; i<n; i++) {
		sum+=a[i];
	}
	ave=sum/n;
	double temp=0;
	for(int i=0; i<n; i++) {
		temp+=(a[i]-ave)*(a[i]-ave);
	}
	return temp/n;
}
int main() {
	while(true) {
		int n;
		cin >> n;
		if(n==0) {
			break;
		}
		int a[n];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		cout << avs(a,n) << endl;
	}
	return 0;
}
