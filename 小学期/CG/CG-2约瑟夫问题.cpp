////约瑟夫算法
//
//int f(int n, int m){
//    return n == 1 ? n : (f(n - 1, m) + m - 1) % n + 1;
//}
#include<iostream>
using namespace std;

int Yoseph (int n,int m) {
	int i, s=0;
	for (i=2; i<=n; i++)
		s=(s+m)%i;
	return (s+1);
}
int main() {
	int count;
	cin >> count;
	while(count--) {
		int m,n;
		cin>>n>>m;
		cout<<Yoseph(n,m)<<endl;
	}
	return 0;
}

//数组循环报数  40分 
//#include<iostream>
//using namespace std;
//int main() {
//	int count;
//	cin >> count;
//	for(int p=0; p<count; p++) {
//		int n,m;
//		cin >> n >> m;
//		int a[n];
//		int percount=n;
//		for(int i=0; i<n; i++) {
//			a[i]=i+1;
//		}
//		int judge=0;
//		while(percount>1) {
//			for (int i = 0; i < n; i++) {
//				if (a[i%n] == 0)
//					continue;
//				else
//					judge++;
//				if (judge == m) {          //退出圈外的编号变为0
//					a[i%n] = 0;
//					judge = 0;
//					percount--;
//				}
//			}
//		}
//		for(int i=0; i<n; i++) {
//			if(a[i]!=0) {
//				cout << a[i] << endl;
//			}
//		}
//	}
//	return 0;
//}






