//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int a[n];
//	for(int i=0; i<n; i++) {
//		cin >> a[i];
//	}
//	sort(a,a+n);
//	if(n%2 != 0) {
//		cout << a[n-1] << " " << a[(n-1)/2] << " " << a[0] << endl;
//	} else {
//		if((a[(n+1)/2]+a[(n-1)/2])%2 == 0) {
//			cout << a[n-1] << " " << (a[(n+1)/2]+a[(n-1)/2])/2 << " " << a[0] << endl;
//		} else {
//			cout << a[n-1] << " " << (a[(n+1)/2]+a[(n-1)/2])/2 << ".5" << " " << a[0] << endl;
//		}
//	}
//	return 0;
//}
//#include<cstdio>
//#include<set>
//using namespace std;
//
//struct Point {
//	int x;
//	int y;
//	Point(int _x, int _y): x(_x), y(_y) {}
//	bool operator < (const Point &rhs) const {
//		if(x==rhs.x) return y<rhs.y;
//		return x<rhs.x;
//	}
//};
//
//int n;
//int ans[5];
//set<Point> pts;
//
//bool find(int x, int y) {
//	if(pts.find(Point(x, y))!=pts.end()) return true;
//	return false;
//}
//
//int main() {
//	scanf("%d",&n);
//	int x, y;
//	for(int i=0; i<n; ++i) {
//		scanf("%d%d", &x, &y);
//		pts.insert(Point(x, y));
//	}
//
//	set<Point>::iterator it;
//	for(it=pts.begin(); it!=pts.end(); it++) {
//		x=(*it).x;
//		y=(*it).y;
//		if(find(x, y+1) && find(x, y-1) && find(x+1, y) && find(x-1, y) ) {
//			int cnt=0;
//			if(find(x-1, y+1)) cnt++;
//			if(find(x+1, y+1)) cnt++;
//			if(find(x-1, y-1)) cnt++;
//			if(find(x+1, y-1)) cnt++;
//			ans[cnt]++;
//		}
//	}
//
//	for(int i=0; i<5; ++i) {
//		printf("%d\n", ans[i]);
//	}
//
//	return 0;
//}
/* CCF201912-2 回收站选址 */

//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 1000;
//pair<int, int> p[N];
//const int CN = 4;
//int cnt[CN + 1];
//
//int main() {
//	int n;
//	map<pair<int, int>, int> ps;
//
//	scanf("%d", &n);
//	for(int i = 0; i < n; i++) {
//		int x, y;
//		scanf("%d%d", &x, &y);
//
//		p[i] = make_pair(x, y);
//		ps[p[i]] = 1;
//	}
//
//	memset(cnt, 0, sizeof(cnt));
//	for(int i = 0; i < n; i++) {
//		int x = p[i].first;
//		int y = p[i].second;
//
//		if(ps[make_pair(x, y -1)] && ps[make_pair(x, y + 1)] &&
//		        ps[make_pair(x - 1, y)] && ps[make_pair(x + 1, y)])
//			cnt[ps[make_pair(x - 1, y - 1)] + ps[make_pair(x - 1, y + 1)] +
//			    ps[make_pair(x + 1, y - 1)] + ps[make_pair(x + 1, y + 1)]]++;
//	}
//
//	for(int i = 0; i <= CN; i++)
//		printf("%d\n", cnt[i]);
//
//	return 0;
//}

/*
7
1 2
2 1
0 0
1 1
1 0
2 0
0 1

2
0 0
-100000 10

11
9 10
10 10
11 10
12 10
13 10
11 9
11 8
12 9
10 9
10 11
12 11

*/

//#include<bits/stdc++.h>
//using namespace std;
///*
//N是苹果棵数 m是操作次数
//num是输入的操作（>0为统计 <=0为疏果）
//nowSum统计每棵树的苹果数 total为所有苹果树上的苹果数
//dropNum是发生苹果掉落的棵数
//E是连续3棵树发生苹果掉落的级数
//*/
//bool mark[1005];
//int main() {
//	//freopen("E://a.txt", "r", stdin);//读取数据
//	int N, m, num, nowSum = 0, total = 0, dropNum = 0, E = 0;
//	scanf("%d", &N);
//	for(int i = 0; i < N; ++i) {
//		scanf("%d", &m);
//		for(int j = 0; j < m; ++j) {
//			scanf("%d", &num);
//			if(j == 0) {
//				nowSum = num;
//			} else {
//				if(num <= 0) {
//					nowSum += num;
//				} else {
//					if(!mark[i] && nowSum > num) { //统计掉落苹果只统计一次
//						mark[i] = true;
//						dropNum++;
//					}
//					nowSum = num;//只要输入num大于0，不管是否等于都要更新nowSum
//				}
//			}
//		}
//		total += nowSum;
//	}
//	for(int i = 0; i < N; ++i) {
//		if(mark[i] && mark[(i + 1) % N] && mark[(i + 2) % N]) { //去重
//			++E;
////			if(N == 3){//这里觉得三棵树的话，E最大只能是1，后面的2种是重复的，但提交显示wrong
////				break;
////			}
//		}
//	}
//	printf("%d %d %d\n", total, dropNum, E);
//	return 0;
//}

#include<iostream>
using namespace std;
int isniu[1005];
int apple[1005];
int main() {
	int n;
	cin>>n;
	for(int q=0; q<n; q++) {
		isniu[q]=0;
	}
	int m;
	for(int i=0; i<n; i++) {
		cin>>m;
		for(int j=0; j<m; j++) {
			int tempnum=0;
			cin>>tempnum;
			if(j==0) {
				apple[i]=tempnum;
			} else if(tempnum<=0) {
				apple[i]+=tempnum;
			} else if(tempnum>0&&j!=0&&tempnum<apple[i]) {
				isniu[i]=1;
				apple[i]=tempnum;
			}
		}
	}
	int t=0;
	int d=0;
	for(int i=0; i<n; i++) {
		t+=apple[i];
		d+=isniu[i];
	}
	int e=0;
	int times=0;
	for (int i = 0; i < n; ++i) { //统计连续3棵苹果树有苹果掉落的组数
		if(isniu[i]==1)times++;
		else times=0;
		if(times>=3)e++;
	}
	if(isniu[0]==1&&isniu[1]==1&&isniu[n-1]==1) e++;
	if(isniu[0]==1&&isniu[n-2]==1&&isniu[n-1]==1) e++;

	cout<<t<<" "<<d<<" "<<e<<endl;
	return 0;

}


