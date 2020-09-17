#include<iostream>
using namespace std;
//查找位置
int findn(int a[],int n,int k) {
	for(int i=0; i<n; i++) {
		if(a[i]==k) {
			return i;
		}
	}
}
//向前移动
void front(int a[],int n,int site,int k) {
	int be=site+k;
	if(be<=0) {
		be=0;
	}
	int temp=a[site];
	for(int i=site; i>be; i--) {
		a[i]=a[i-1];
	}
	a[be]=temp;
}
//向后移动
void behind(int a[],int n,int site,int k) {
	int en=site+k;
	if(en>=n) {
		en=n;
	}
	int temp=a[site];
	for(int i=site; i<en; i++) {
		a[i]=a[i+1];
	}
	a[en]=temp;
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; i++) {
		a[i]=i+1;
	}
	int b;
	cin >> b;
	int c,d;
	for(int i=0; i<b; i++) {
		cin >> c >> d;
		int site=findn(a,n,c);
		if(d>=0) {
			behind(a,n,site,d);
		} else {
			front(a,n,site,d);
		}
	}
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
