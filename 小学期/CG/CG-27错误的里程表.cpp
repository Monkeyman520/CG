#include<bits/stdc++.h>
using namespace std;
int return1_index(int n) {
	int s;
	if(n>3&&n<8)
		s=n-1;
	else if(n>8)
		s=n-2;
	else s=n;
	return s;
}

int main() {
	int x;
	cin>>x;
	while(x--) {
		long long int num,a,n,k=0,sum=0;
		cin>>num;
		n=num;
		while(n>0) {
			a=n%10;
			a=return1_index(a);
			n=n/10;
			sum=sum+a*pow(8,k);
			k++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
