#include<iostream>
using namespace std;
int main() {
	int a;
	while(cin>>a) {
		if(a==0) {
			return 0;
		}
		int i=0;
		if(a==1) {
			cout<<i<<endl;
		} else {
			for(int i1 = 0; a >= 1; i1++ ) {
				if(a % 2 == 0) {
					a = a/2 ;
				} else {
					a = (3 * a + 1) / 2;
				}
				i++;
				if(a==1) break;
			}
			cout << i << endl;
		}
	}
	return 0;
}
