#include<iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	int cz=0,cf=0;
	long long c,d;
	for(long long i=0; i<n; i++) {
		cin >> c >> d;
		if(c>0) {
			cz++;
		} else {
			cf++;
		}
		if(cz>1&&cf>1) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
