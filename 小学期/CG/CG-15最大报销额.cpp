#include<cstdio>
#include<string.h>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
int v[100],w[100];
double dp[3000005];
int main() {
	double q;
	int n,t;
	while(scanf("%lf%d",&q,&n)!=EOF) {
		double price;
		char ch;
		int j=0,k=0;
		if(n==0) {
			break;
		}
		for(int i=0; i<n; i++) {
			scanf("%d",&t);
			int flag=1;
			double a=0,b=0,c=0;
			while(t--) {
				getchar();
				scanf("%c:%lf",&ch,&price);
				if(ch=='A')//算出每个发票的类型A物品的总价格
					a+=price;
				else if(ch=='B')//算出每个发票的类型B物品的总价格
					b+=price;
				else if(ch=='C')//算出每个发票的类型C物品的总价格
					c+=price;
				else//如果出现其他类型的物品就把flag标记为0，代表为不能报销的发票
					flag=0;
				if(a>600||b>600||c>600)//如果A或者B或者C物品的单个价格有一个大于600就说明这个发票不能报销，就标记为0
					flag=0;
			}
			if(flag==1&&(a+b+c)<=1000) { //当flag等于1并且A,B,C的总钱数小于等于1000就是一张可以报销的发票
				v[k]=(a+b+c)*100;//因为题目说了最后的结果是保留两位小数，我们就把所以数都转换为整形来使得计算更加简单，所以就乘以100.
				w[k]=(a+b+c)*100;//同上一样的作业
				k++;//存储完之后加1，接下来再存储满足条件可报销的情况
			}
		}
		int c=q*100;//这时候总钱数也需要乘以100.
		memset(dp,0,sizeof(dp));
		for(int i=0; i<k; i++) {
			for(int j=c; j>=w[i]; j--) {
				dp[j]=max(dp[j],dp[j-w[i]]+v[i]);//又回到了01背包的问题，没什么好说了
			}
		}
		printf("%.2lf\n",dp[c]/100);//因为之前的总数和每个发票的价格都乘了100，所以最后我们需要再把那个100除回来，所以输出的是DP[C]/100.
	}
}

