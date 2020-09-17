#include<bits/stdc++.h>
using namespace std;
long long convert(char a[]) {
	long long ans = 0;
	int len = strlen(a);
	long long product = 1;
	for(int i = len - 1; i >= 0; i--) {
		ans += (a[i] - 'a') * product;
		product = product * 26;
	}
	return ans;

}
int main() {
	int n;
	cin >> n;
	for(int k=0;k<n;k++) {
		char a[15];
		char b[15];
		char ans[15];
		cin >> a >> b;
		long long A = convert(a);
		long long B = convert(b);
		long long C = A + B;
		int num = 0;
		do {
			ans[num++] = (C % 26 + 'a');
			C /= 26;
		} while(C != 0);
		for(int i = num - 1; i >= 0; i--) {
			cout << ans[i];
		}
		cout << endl;
	}
	return 0;
}

