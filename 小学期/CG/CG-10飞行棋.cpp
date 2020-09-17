#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <list>
#include <queue>
#include <map>

using namespace std;
#define INF 0x3f3f3f3f;
int vis[205][205][8][2];
int gap[205];
int  Lele,Yueyue;
int main() {
	int n,a,b,c;
	while (~scanf("%d%d%d%d", &n, &a,&b,&c)) {
		Lele=Yueyue=0;
		memset(vis,0,sizeof(vis));
		for(int i=0; i<n; i++)
			gap[i]=-1;
		char s[6];
		for(int i=0; i<n; i++) {
			scanf("%s",s);
			if(s[0]=='G') {
				int sum=0;
				for(int j=1; j<strlen(s); j++) {
					sum=s[j]-'0'+sum*10;
				}
				gap[i]=sum;
			}
		}
		a=a%6;
		b=b%6;
		c=c%6;
		int f=c,num;
		int end=n-1;
		vis[0][0][f][0]=1;
		while(true) {
			num=(a*f+b)%6+1;
			f=num;
			// printf("%d",num);
			Lele+=num;
			if(Lele>end) {
				Lele=end-(Lele-end);
			}
			int cnt=0;
			bool flag=true;
			while(gap[Lele]!=-1) {
				if(cnt>n) {
					flag=false;
					break;
				}
				cnt++;
				Lele=gap[Lele];
			}
			if(!flag) {
				printf("Impossible\n");
				break;
			}
			if(Lele==end) {
				printf("Lele\n");
				break;
			}
			if(Lele==Yueyue)
				Yueyue=0;
			if(vis[Lele][Yueyue][num][0]) {
				// printf("32\n");
				printf("Impossible\n");
				break;
			}
			vis[Lele][Yueyue][num][0]=1;
			//  printf("l:%d %d\n",Lele,num);
			num=(a*f+b)%6+1;
			f=num;
			Yueyue+=num;

			if(Yueyue>end) {
				Yueyue=end-(Yueyue-end);
			}
			cnt=0;
			while(gap[Yueyue]!=-1) {
				if(cnt>n) {
					flag=false;
					break;
				}
				cnt++;
				Yueyue=gap[Yueyue];
			}
			if(!flag) {
				printf("Impossible\n");
				break;
			}
			if(Yueyue==end) {
				printf("Yueyue\n");
				break;
			}
			if(Lele==Yueyue)
				Lele=0;
			if(vis[Lele][Yueyue][num][1]) {
				printf("Impossible\n");
				break;
			}
			vis[Lele][Yueyue][num][1]=1;
			//   printf("y:%d %d\n",Yueyue,num);
		}
	}
	return 0;
}
