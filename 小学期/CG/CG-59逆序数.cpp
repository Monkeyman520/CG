#include<iostream>
#include<cstring>
using namespace std;
//Ã°ÅİÅÅĞòË¼Ïë   
int reverse(int a[],int n) {
	int count = 0;//ÄæĞòÊı
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(a[i] > a[j])
				count++;
		}
	}
	return count;
}

int main() {
	int n=1;
	while(cin >> n&& n!=0) {
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		cout << reverse(a,n) << endl;
	}
	return 0;
}
