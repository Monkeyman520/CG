#include<iostream>
using namespace std;
int main() {
	int n,p1,p2,p3,t1,t2;
	int time=0;
	cin>>n>>p1>>p2>>p3>>t1>>t2;
	int a[n][2];
	cin>>a[0][0]>>a[0][1];			//����Ҫ������ڵ�һ������ʱ��ǰ�ǲ�����ģ�
	time+=(a[0][1]-a[0][0])*p1;		//����ֱ�Ӵӵ�һ�����ݿ�ʼ����
	for(int i=1; i<n; i++) {
		cin>>a[i][0]>>a[i][1];
		int h=a[i][0]-a[i-1][1];	//���ι���ʱ���϶�����������
		if(h<=t1)
			time+=h*p1;
		if(h>t1&&h<=t1+t2)
			time+=t1*p1+p2*(h-t1);
		if(h>t1+t2)
			time+=t1*p1+p2*t2+(h-t1-t2)*p3;
		time+=(a[i][1]-a[i][0])*p1;
	}//�����ϱ��ι����ڼ������
	cout<<time;
	return 0;
}

