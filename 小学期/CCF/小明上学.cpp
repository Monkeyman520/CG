#include<iostream>

using namespace std;

int main() {
	int r,y,g,n,ans=0,temp=0,k,t;
	cin >> r >> y >> g >> n;
	while(n--) {
		cin >> k >> t;
		if(k==0||k==1)
			temp=t;
		else if(k==2)
			temp=t+r;
		else if(k==3)
			temp=0;
		ans+=temp;
	}
	cout << ans;
	return 0;
}
