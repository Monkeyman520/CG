#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxm=105;
int a[maxm];
int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	int ans=0;
	if(a[0]==0)ans++;
	for(int i=1; i<n; i++) {
		if(a[i]==0) { //������Ϣ
			ans++;
		} else if(a[i]==1&&a[i-1]==1) { //�����ǰһ��һ����ֻ����Ϣ��
			a[i]=0;
			ans++;
		} else if(a[i]==2&&a[i-1]==2) { //�����ǰһ��һ����ֻ����Ϣ��
			a[i]=0;
			ans++;
		} else { //��������ʱ���������
			if(a[i-1]==1) { //���ǰһ��д�����ˣ�������˶�
				a[i]=2;
			} else if(a[i-1]==2) { //���ǰһ���˶��ˣ������д����
				a[i]=1;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

