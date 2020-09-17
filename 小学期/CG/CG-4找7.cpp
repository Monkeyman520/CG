#include<iostream>
using namespace std;
bool find7(int n) {
	while(true) {
		if(n % 10 == 7) {
			return false;
		} else {
			n /= 10;
		}
		if(n==0) {
			break;
		}
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		if(i%7==0||!find7(i)){
			cout << i << endl;
		}
	}
	return 0;
} 
