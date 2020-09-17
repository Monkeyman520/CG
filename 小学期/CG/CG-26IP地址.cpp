#include <bits/stdc++.h>
using namespace std;
int getNum(int num) {
	int sum = 0;
	while(num) {
		sum += (num & 1);
		num >>= 1;

	}
	return sum;
}
int main() {
	int n;
	cin >> n;
	string a;
	int sum = 0;
	while(n--) {
		int sum = 0;
		cin >> a;
		int num = 0;
		int n = a.size();
		for(int i = 0; i < n; i++) {
			if(a[i] == '.') {
				sum += getNum(num);
				num = 0;
			} else {
				num = num * 10 + (a[i] - '0');
			}
		}
		sum += getNum(num);
		cout << sum << endl;

	}

	return 0;
}
