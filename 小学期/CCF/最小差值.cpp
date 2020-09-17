#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;

	int a[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	int min_diff=a[1]-a[0];
	for(int i=1; i<n; i++) {
		int temp=a[i]-a[i-1];
		if(min_diff>temp) {
			min_diff=temp;
		}
	}
	cout << min_diff << endl;
	return 0;
}
