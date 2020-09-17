#include <iostream>
#include <string>
using namespace std;
void string_to_int(string str,int k);
void dfs(int m,int n,int depth);
int a[2001][2001];
int num[2001],ans=0,N;
int main() {
	cin>>N;
	string str[N];
	for(int i=0; i<N; i++) {
		cin>>str[i];
		string_to_int(str[i],i);
	}
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			dfs(i,j,1);
		}
	}
	cout<<ans<<" "<<num[ans]<<endl;
}
//将字符串转化为数组
void string_to_int(string str,int k) {
	int len=str.length();
	for(int i=0; i<len; i++) {
		if(str[i]=='1') {
			a[k+1][i+1]=1;
		} else {
			a[k+1][i+1]=0;
		}
	}
}
//搜索函数
void dfs(int m,int n,int depth) {	//以a[m][n]左上角为顶点，depth为尺寸的棋盘
	if(a[m][n]==0) {		//左上角的顶点为白色，返回
		return ;
	}
	if(m+depth-1>N||n+depth-1>N) {	//行或列超过给定矩阵的范围，返回
		return ;
	}
	for(int i=1; i<=depth; i++) {
		for(int j=1; j<=depth; j++) {
			//行号与列号之和为偶数 ，该点却是白色，返回
			if((i+j)%2==0&&a[m+i-1][n+j-1]==0) {
				return ;
			} else if((i+j)%2==1&&a[m+i-1][n+j-1]==1) {
				//行号与列号之和为奇数，该点却是黑色，返回
				return ;
			}
		}
	}
	//进行到这一步说明以a[m][n]左上角为顶点，depth为尺寸的棋盘是存在的
	if(depth>ans) {
		ans=depth;	//更新最大尺寸
	}
	num[depth]++;	//将该尺寸的数目加一
	dfs(m,n,++depth);	//尺寸扩大一，仍以该该点为左上角深搜
}

