#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a;
	vector<int>v;
	v.clear();
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> a;
		v.push_back(a);  //输入元素并存放到vector 
	}
	sort(v.begin(),v.end());//进行排序 sort 默认升序 
	cout << v.back() << " ";
	if(v.size()==3) {
		printf("%d %s",v[1]," ");
	} else if((v[1]+v[2])%2==0) {
		printf("%d %s",(v[1]+v[2])/2," ");
	} else {
		printf("%.1f %s",(v[1]*1.0+v[2])/2," ");
	}
	cout << v.front();
	return 0;
}
//		if(i==0) {
//			v.push_back(a);
//		}
//		if((n%2==1&&i==n/2)||(n%2==0&&i==n/2-1)) {
//			v.push_back(a);
//		}
//		if(n%2==0&&i==n/2) {
//			v.push_back(a);
//		}
//		if(i==n-1) {
//			v.push_back(a);
//		}
