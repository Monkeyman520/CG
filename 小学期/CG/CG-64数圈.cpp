#include <iostream>
#include<cstring>
using namespace std;
int a[10][10];
int main() {
	int n;
	cin>>n;
	memset(a,0,sizeof(a));
	a[5][5]=1;
	int r=5,c=5,value=2,flag=2,k=1;
	while(1) {
		for(int j=1; j<=k; j++) {
			if(flag%2==0)
				c++;
			else
				c--;
			a[r][c]=value;
			value++;
			if(value>n*n)
				break;
		}
		if(value>n*n)
			break;
		for(int i=1; i<=k; i++) {
			if(flag%2==0)
				r++;
			else
				r--;
			a[r][c]=value;
			value++;
			if(value>n*n)
				break;
		}
		k++;
		flag++;
	}
	int _count=0;
	for(int i=0; i<10; i++) {
		int temp=1;
		for(int j=0; j<10; j++) {
			if(a[i][j]!=0) {
				if(temp) {
					temp=0;
					_count++;
					cout<<a[i][j];
				} else
					cout<<" "<<a[i][j];
			}
		}
		if(_count<n&&temp==0)
			cout<<endl;
	}
	return 0;
}
