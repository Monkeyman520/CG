#include<bits/stdc++.h>//万能头文件 
using namespace std;
int main() {
	int len,a[300]= {0},b[300]= {0},t=0,f;
	string st,s;
	cin>>st;
	len=st.size();
	for(int i=0; i<len; i++)
		a[i]=st[i]-'0'; //将st一位一位存入数组a中
	st=st+st;//将st首尾相接
	for(int j=1; j<=len; j++) {
		for(int k=0; k<len; k++)
			b[k]=a[k];//将a数组存入b中
		for(int p=len-1; p>=0; p--) {
			b[p]=b[p]*j+t;
			t=b[p]/10;
			b[p]=b[p]%10;
		}//高精度乘法
		s="";//将字符串s置空
		for(int q=0; q<len; q++)
			s=s+(char)('0'+b[q]);//将b数组转换到字符串s中
		f=st.find(s,0);
		if(f==-1) { //即st中没有s
			cout<< "No" << endl;
			return 0;
		}//返回0并停止运行
	}
	cout<< "Yes" << endl;
	return 0;
}
