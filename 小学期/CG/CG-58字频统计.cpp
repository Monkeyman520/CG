#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n=1;
	while(cin >> n&& n!=0) {
		string str;
		cin >> str;
		int cab=0;
		int cba=0;
		for(int i=0; i<n-1; i++) {
			if(str[i]=='a'&& str[i+1]=='b') {
				cab++;
			} else if(str[i+1]=='a'&& str[i]=='b') {
				cba++;
			}
		}
		cout << cab-cba<< endl;
	}
	return 0;
}
