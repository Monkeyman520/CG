#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
	cin>>a>>b;
	int A=a.length(),B=b.length(),t=0;
	for(int i=0; i<B; i++) {
		for(int j=0; j<A; j++) { //һ��һ������
			if(b[i]==a[j]) {
				t++;
				a[j]=']';//�ص㣬���ҵ��ж�Ӧ���Ӻ󣬰�����ַ������������ظ���Ӧ
				break;		//�ҵ����˳�ѭ��
			}
		}
	}
	if(t>=B)
		cout<<"Yes"<<" "<<A-t;
	else
		cout<<"No "<<B-t;
}

