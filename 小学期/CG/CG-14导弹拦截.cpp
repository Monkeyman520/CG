#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int count=0;
	int a[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
		if(i==0) {
			count++;
		} else if(a[i]<=a[i-1]) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}

/*
7
300 207 155 300 299 170 158
*/
/*
9
500 450 520 460 300 305 80 80 120
*/
