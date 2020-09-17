#include<iostream>
#include<cmath>
using namespace std;
//	char a='a';
//	int b=a-'0';
//	int c=b-10;
//	int d=a-'0'-c;
//	cout<<b<<" "<<c<<" "<<d;
//实验用，a对应得到10要经过的计算 	因为记不清ASCII码了。。。
//a-'0'-39即可
int main() {
	int n;
	cin>>n;
	int x;
	string y;
	for(int i=0; i<n; i++) {
		cin>>x>>y;
		int l=y.length(),t=0;
		for(int j=0; j<l; j++) {
			if(y[j]>='0'&&y[j]<='9')
				t+=y[j]-'0';
			else
				t+=y[j]-'0'-39;//把字母也变成数字加起来
		}
		int yu=t%(x-1);
		if(yu!=0)
			yu=x-yu-1;			//这一步是“加上校验码能被x-1整除”反向求校验码
		if(yu<10) {
			cout<<yu<<endl;
		} else {
			char a=yu+'0'+39;
			cout<<a<<endl;
		}
	}
}

