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
				if(ch=='A')//���ÿ����Ʊ������A��Ʒ���ܼ۸�
					a+=price;
				else if(ch=='B')//���ÿ����Ʊ������B��Ʒ���ܼ۸�
					b+=price;
				else if(ch=='C')//���ÿ����Ʊ������C��Ʒ���ܼ۸�
					c+=price;
				else//��������������͵���Ʒ�Ͱ�flag���Ϊ0������Ϊ���ܱ����ķ�Ʊ
					flag=0;
				if(a>600||b>600||c>600)//���A����B����C��Ʒ�ĵ����۸���һ������600��˵�������Ʊ���ܱ������ͱ��Ϊ0
					flag=0;
			}
			if(flag==1&&(a+b+c)<=1000) { //��flag����1����A,B,C����Ǯ��С�ڵ���1000����һ�ſ��Ա����ķ�Ʊ
				v[k]=(a+b+c)*100;//��Ϊ��Ŀ˵�����Ľ���Ǳ�����λС�������ǾͰ���������ת��Ϊ������ʹ�ü�����Ӽ򵥣����Ծͳ���100.
				w[k]=(a+b+c)*100;//ͬ��һ������ҵ
				k++;//�洢��֮���1���������ٴ洢���������ɱ��������
			}
		}
		int c=q*100;//��ʱ����Ǯ��Ҳ��Ҫ����100.
		memset(dp,0,sizeof(dp));
		for(int i=0; i<k; i++) {
			for(int j=c; j>=w[i]; j--) {
				dp[j]=max(dp[j],dp[j-w[i]]+v[i]);//�ֻص���01���������⣬ûʲô��˵��
			}
		}
		printf("%.2lf\n",dp[c]/100);//��Ϊ֮ǰ��������ÿ����Ʊ�ļ۸񶼳���100���������������Ҫ�ٰ��Ǹ�100�������������������DP[C]/100.
	}
}

