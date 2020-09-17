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
//���ַ���ת��Ϊ����
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
//��������
void dfs(int m,int n,int depth) {	//��a[m][n]���Ͻ�Ϊ���㣬depthΪ�ߴ������
	if(a[m][n]==0) {		//���ϽǵĶ���Ϊ��ɫ������
		return ;
	}
	if(m+depth-1>N||n+depth-1>N) {	//�л��г�����������ķ�Χ������
		return ;
	}
	for(int i=1; i<=depth; i++) {
		for(int j=1; j<=depth; j++) {
			//�к����к�֮��Ϊż�� ���õ�ȴ�ǰ�ɫ������
			if((i+j)%2==0&&a[m+i-1][n+j-1]==0) {
				return ;
			} else if((i+j)%2==1&&a[m+i-1][n+j-1]==1) {
				//�к����к�֮��Ϊ�������õ�ȴ�Ǻ�ɫ������
				return ;
			}
		}
	}
	//���е���һ��˵����a[m][n]���Ͻ�Ϊ���㣬depthΪ�ߴ�������Ǵ��ڵ�
	if(depth>ans) {
		ans=depth;	//�������ߴ�
	}
	num[depth]++;	//���óߴ����Ŀ��һ
	dfs(m,n,++depth);	//�ߴ�����һ�����Ըøõ�Ϊ���Ͻ�����
}

