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
		if(a[i]==0) { //被迫休息
			ans++;
		} else if(a[i]==1&&a[i-1]==1) { //如果和前一天一样就只能休息了
			a[i]=0;
			ans++;
		} else if(a[i]==2&&a[i-1]==2) { //如果和前一天一样就只能休息了
			a[i]=0;
			ans++;
		} else { //等于三的时候两种情况
			if(a[i-1]==1) { //如果前一天写代码了，今天就运动
				a[i]=2;
			} else if(a[i-1]==2) { //如果前一天运动了，今天就写代码
				a[i]=1;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

