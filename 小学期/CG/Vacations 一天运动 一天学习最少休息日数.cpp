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
			if (x == 1 || x == 3) { //���Բμӿ���
				f[i][1] = min(f[i - 1][0], f[i - 1][2]);
			}
			if (x == 2 || x == 3) { //���Բμ��˶�
				f[i][2] = min(f[i - 1][0], f[i - 1][1]);
			}
			//��Ϣ
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
��trick&&�²ۡ�
�����⡿
���Ǽ��ڷ�n��100�����
����ÿ�죬���ǿ��ܡ���
���ԣ��򲻿��ԣ��μӿ���
���ԣ��򲻿��ԣ��μ��˶�
������Ϣ
��֪�޷�����2�����˶����޷�2����2�쿼��
����ϣ�������ٵ�������Ϣ������������Ϣ���ڡ�
�����͡�
DP
��������
��Ȼ������ֻҪ��¼ǰһ���״̬��DP���ɡ�
��ʱ�临�Ӷ�&&�Ż���
O��n*3��
*/
