//#include<bits/stdc++.h>
//#include<iostream>
//using namespace std;
//int main() {
//	int n, m;
//	cin >> n;
//	int a[n][4];
//	int b[6];
//	b[1] = 0;
//	b[2] = 0;
//	b[3] = 0;
//	b[4] = 0;
//	b[5] = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i][1] >> a[i][2];
//		a[i][3] = 0;
//		a[i][4] = -1;
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (a[i][1] + 1 == a[j][1] && a[i][2] == a[j][2]) {
//				a[i][3]++;
//			}
//			if (a[i][1] - 1 == a[j][1] && a[i][2] == a[j][2]) {
//				a[i][3]++;
//			}
//			if (a[i][1] == a[j][1] && a[i][2] - 1 == a[j][2]) {
//				a[i][3]++;
//			}
//			if (a[i][1] == a[j][1] && a[i][2] + 1 == a[j][2]) {
//				a[i][3]++;
//			}
//		}
//		if (a[i][3] == 4) {
//			a[i][4]++;
//		}
//		if (a[i][4] == 0) {
//			for (int j = 1; j <= n; j++) {
//				if (a[i][1] + 1 == a[j][1] && a[i][2] + 1 == a[j][2]) {
//					a[i][4]++;
//				}
//				if (a[i][1] - 1 == a[j][1] && a[i][2] - 1 == a[j][2]) {
//					a[i][4]++;
//				}
//				if (a[i][1] + 1 == a[j][1] && a[i][2] - 1 == a[j][2]) {
//					a[i][4]++;
//				}
//				if (a[i][1] - 1 == a[j][1] && a[i][2] + 1 == a[j][2]) {
//					a[i][4]++;
//				}
//			}
//			if (a[i][4] == 0) {
//				b[1]++;
//			}
//			if (a[i][4] == 1) {
//				b[2]++;
//			}
//			if (a[i][4] == 2) {
//				b[3]++;
//			}
//			if (a[i][4] == 3) {
//				b[4]++;
//			}
//			if (a[i][4] == 4) {
//				b[5]++;
//			}
//		}
//	}
//	for (int i = 1; i <= 5; i++) {
//		cout << b[i] << endl;
//	}
//	return 0;
//}
//
////取b[5]时不知为何b[0]=-1，以后再不用b[0]

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n][4];
	int b[5]= {0,0,0,0,0};
	for(int i=0; i<n; i++) {
		cin >> a[i][0] >> a[i][1];
		a[i][2]=0;
		a[i][3]=-1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][0] + 1 == a[j][0] && a[i][1] == a[j][1]) {
				a[i][2]++;
			}
			if (a[i][0] - 1 == a[j][0] && a[i][1] == a[j][1]) {
				a[i][2]++;
			}
			if (a[i][0] == a[j][0] && a[i][1] - 1 == a[j][1]) {
				a[i][2]++;
			}
			if (a[i][0] == a[j][0] && a[i][1] + 1 == a[j][1]) {
				a[i][2]++;
			}
		}
	}
	for(int i=0; i<n; i++) {
		if(a[i][2]==4) {
			a[i][3]++;
		}
		if(a[i][3]==0) {
			for (int j = 0; j < n; j++) {
				if (a[i][0] + 1 == a[j][0] && a[i][1] + 1 == a[j][1]) {
					a[i][3]++;
				}
				if (a[i][0] - 1 == a[j][0] && a[i][1] - 1 == a[j][1]) {
					a[i][3]++;
				}
				if (a[i][0] + 1 == a[j][0] && a[i][1] - 1 == a[j][1]) {
					a[i][3]++;
				}
				if (a[i][0] - 1 == a[j][0] && a[i][1] + 1 == a[j][1]) {
					a[i][3]++;
				}
			}
			if (a[i][3] == 0) {
				b[0]++;
			}
			if (a[i][3] == 1) {
				b[4]++;
			}
			if (a[i][3] == 2) {
				b[2]++;
			}
			if (a[i][3] == 3) {
				b[3]++;
			}
			if (a[i][3] == 4) {
				b[4]++;
			}
		}
	}
	for(int i=0; i<5; i++) {
		cout << b[i] << endl;
	}
	return 0;
}











