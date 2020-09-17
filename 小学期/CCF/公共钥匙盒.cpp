//先借后还20 
//#include<bits/stdc++.h>
//using namespace std;
//struct key1 {
//	int id;
//	int begin;
//	int time;
//	int end;
//};
//bool cmp1(key1 a,key1 b) {
//	return a.begin<b.begin;
//}
//bool cmp2(key1 a,key1 b) {
//	return a.end<b.end;
//}
//int main() {
//	int n,k;
//	cin >> n >> k;
//	int m[n];
//
//	for(int i=0; i<n; i++) {
//		m[i]=i+1;
//	}
//
//	int a,b,c;
//	key1 k1[k];
//
//	for(int i=0; i<k; i++) {
//		cin >> a >> b >> c;
//		k1[i].id=a;
//		k1[i].begin=b;
//		k1[i].time=c;
//		k1[i].end=b+c;
//	}
//
//	sort(k1,k1+k,cmp1);
//
////	for(int i=0; i<k; i++) {
////		cout << k1[i].id << " " << k1[i].begin << " " << k1[i].time << " " << k1[i].end << endl;
////	}
//
//	for(int i=0; i<k; i++) {//借
//		int tem=k1[i].id-1;
//		m[tem]=0;
//	}
//
//	sort(k1,k1+k,cmp2);
//
//	for(int i=0; i<k; i++) {//还
//		for(int j=0; j<n; j++) {
//			if(m[j]==0) {
//				m[j]=k1[i].id;
//				break;
//			}
//		}
//	}
//
//	for(int i=0; i<n; i++) {
//		cout << m[i] << " ";
//	}
//	return 0;
//}


//根据时间进行模拟  100 
#include <iostream>
#include <algorithm>
using namespace std;

struct teacher {
	int num;//编号
	int s;//开始时间
	int e;//结束时间
	int se;//还钥匙时间
};

bool cmp(teacher t1, teacher t2) {
	return t1.num < t2.num;
}

int main() {
	int N,K;
	cin>>N>>K;
	teacher t[K];
	int ans[N];
	for(int i = 0; i < N; i++) {
		ans[i] = i+1;
	}
	int zt = 0;//最后还钥匙时间
	for(int i = 0; i < K; i++) {
		cin >> t[i].num >> t[i].s >> t[i].e;
		t[i].se = t[i].s + t[i].e;
		if(zt < t[i].se) {
			zt = t[i].se;
		}
	}

	sort(t, t+K, cmp);

	for(int time = 0; time <= zt; time++) {
		for(int i = 0; i < K; i++) {
			if(time == t[i].se) {
				for(int j = 0; j < N; j++) {
					if(ans[j] == 0) {
						ans[j] = t[i].num;
						break;
					}
				}
			}
		}
		for(int i = 0; i < K; i++) {
			if(time == t[i].s) {
				for(int j = 0; j < N; j++) {
					if(ans[j] == t[i].num) {
						ans[j] = 0;
						break;
					}
				}
			}
		}
	}

	for(int i = 0; i < N; i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}
