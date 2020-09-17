#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<ctype.h>
#include<math.h>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<bitset>
#include<algorithm>
#include<time.h>
using namespace std;
void fre() {
	freopen("c://test//input.in", "r", stdin);
	freopen("c://test//output.out", "w", stdout);
}
#define MS(x,y) memset(x,y,sizeof(x))
#define MC(x,y) memcpy(x,y,sizeof(x))
#define MP(x,y) make_pair(x,y)
#define ls o<<1
#define rs o<<1|1
typedef long long LL;
typedef unsigned long long UL;
typedef unsigned int UI;
template <class T1, class T2>inline void gmax(T1 &a, T2 b) {
	if (b>a)a = b;
}
template <class T1, class T2>inline void gmin(T1 &a, T2 b) {
	if (b<a)a = b;
}
const int N = 0, M = 0, Z = 1e9 + 7, ms63 = 0x3f3f3f3f;
int n;
int f[105][3];
int main() {
	while (~scanf("%d", &n)) {
		MS(f, 63);
		f[0][0] = 0;
		for (int i = 1; i <= n; ++i) {
			int x;
			scanf("%d", &x);
			if (x == 1 || x == 3) { //可以参加考试
				f[i][1] = min(f[i - 1][0], f[i - 1][2]);
			}
			if (x == 2 || x == 3) { //可以参加运动
				f[i][2] = min(f[i - 1][0], f[i - 1][1]);
			}
			//休息
			f[i][0] = min(f[i - 1][0], min(f[i - 1][1], f[i - 1][2])) + 1;
		}
		int ans = 1e9;
		gmin(ans, f[n][0]);
		gmin(ans, f[n][1]);
		gmin(ans, f[n][2]);
		printf("%d\n", ans);
	}
	return 0;
}
/*
【trick&&吐槽】
【题意】
我们假期放n（100）天假
对于每天，我们可能——
可以（或不可以）参加考试
可以（或不可以）参加运动
可以休息
已知无法连续2天做运动或无法2连续2天考试
我们希望以最少的日期休息，问你最少休息日期。
【类型】
DP
【分析】
显然，我们只要记录前一天的状态做DP即可。
【时间复杂度&&优化】
O（n*3）
*/
