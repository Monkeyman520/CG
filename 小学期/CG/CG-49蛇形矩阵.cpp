#include<iostream>
using namespace std;
int n;
int main() {
	cin>>n;
	int u=0;
	int z=1;
	for(int i=1; i<=n; i++) { //�ڼ���
		int chufa=z+u;//������
		z+=u;
		int d=i+1;//���
		for(int j=1; j<=n-i+1; j++) {
			if(j==1) {
				cout<<chufa;
			} else {
				cout<<" "<<chufa+d;
				chufa+=d;
				d++;
			}
		}
		cout<<endl;
		u++;
	}
}

