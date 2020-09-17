#include<iostream>
using namespace std;
int main() {
	int n,p1,p2,p3,t1,t2;
	int time=0;
	cin>>n>>p1>>p2>>p3>>t1>>t2;
	int a[n][2];
	cin>>a[0][0]>>a[0][1];			//读题要清楚，在第一个工作时间前是不用算的！
	time+=(a[0][1]-a[0][0])*p1;		//所以直接从第一组数据开始计算
	for(int i=1; i<n; i++) {
		cin>>a[i][0]>>a[i][1];
		int h=a[i][0]-a[i-1][1];	//两段工作时间间隙，分情况讨论
		if(h<=t1)
			time+=h*p1;
		if(h>t1&&h<=t1+t2)
			time+=t1*p1+p2*(h-t1);
		if(h>t1+t2)
			time+=t1*p1+p2*t2+(h-t1-t2)*p3;
		time+=(a[i][1]-a[i][0])*p1;
	}//最后加上本段工作期间的消耗
	cout<<time;
	return 0;
}

