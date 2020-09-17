#include<iostream>
using namespace std;
bool find7(int n) {
	while(true) {
		if(n % 10 == 7) {
			return false;
		} else {
			n /= 10;
		}
		if(n==0) {
			break;
		}
	}
	return true;
}
int main() {
	int c_j=0;
	int c_y=0;
	int c_b=0;
	int c_d=0;
	int count=1;
	int n;
	cin >> n;
	for(int i=1; count<=n; i++) {
		int temp=i%4;
		if(!find7(i)||i%7==0) {
			if(temp==1) {
				c_j++;
			} else if(temp==2) {
				c_y++;
			} else if(temp==3) {
				c_b++;
			} else if(temp==0) {
				c_d++;
			}
		} else {
			count++;
		}
	}
	cout << c_j << endl;
	cout << c_y << endl;
	cout << c_b << endl;
	cout << c_d << endl;
	return 0;
}


///* CCF201912-1 ±¨Êý */
//
//#include <iostream>
//using namespace std;
//int have7(int n) {
//	while(n) {
//		if(n % 10 == 7) return 1;
//		else n /= 10;
//	}
//	return 0;
//}
//
//int main(void) {
//	int n, num = 1, count = 1, cnt[4] = {0, 0, 0, 0};
//	cin >> n;
//	while(count <= n) {
//		if(num % 7 == 0 || have7(num)) {
//			cnt[(num - 1) % 4]++;
//		} else {
//			count++;
//		}
//		num++;
//	}
//	for(int i = 0; i < 4; i++) {
//		cout << cnt[i] << endl;
//	}
//	return 0;
//}












