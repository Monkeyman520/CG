#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n][2],b[n][2];
	for(int i=0; i<n; i++) {
		cin >> a[i][0] >> a[i][1];
	}
	for(int i=0; i<n; i++) {
		cin >> b[i][0] >> b[i][1];
	}
	int sum=0;
//	for(int i=0; i<n; i++) {
//		for(int j=0; j<n; j++) {
//			if(a[i][0]<=b[j][0]&&a[i][1]>b[j][0]) {
//				if(a[i][1]<=b[j][1]) {
//					sum+=a[i][1]-b[j][0];
//				} else {
//					sum+=b[j][1]-b[j][0];
//				}
//			}
//		}
//	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			int z,x,c,f,d;
			z=a[i][0]-b[j][0];//A起始-B起始
			x=a[i][1]-b[j][0];//A末尾-B开始
			c=a[i][1]-b[j][1];//A末尾-B末尾
			f=b[i][1]-b[j][0];//B末尾-B开始
			if(z<=0) {
				if(x>=0&&c<=0) {
					sum+=x;
				} else if(x>=0&&c>0) {
					sum+=f;
				}
			} else {
				if(c<=0) {
					sum+=x;
				} else {
					sum+=a[i][1]-a[i][0];
				}
			}
		}
	}
	cout << sum << endl;
	return 0;
}
