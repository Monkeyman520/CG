#include<bits/stdc++.h>
using namespace std;

int Mode(int* a, int size) {
	int cnt = 0;
	int m = a[0];
	for(int i = 0; i<size; i++) {
		if(cnt == 0) {
			m = a[i];
			cnt = 1;
		} else if(m != a[i]) {
			cnt--;
		} else { // m == a[i]
			cnt++;
		}
	}
	return m;
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
		int m = Mode(a, sizeof(a)/sizeof(int));
		cout<<m<<endl;
	}
	return 0;
}
