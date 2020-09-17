#include<iostream>
#include<set>
using namespace std;
int main() {
	int i,n;
	while(cin>>n) {
		if(n==0) break;
		string z[2*n-1];
		set<string> se;
		set<string>::iterator it;
		for(i=0; i<2*n-1; i++) {
			cin>>z[i];
			it=se.find(z[i]);
			if(it!=se.end()) {
				se.erase(z[i]);
			} else {
				se.insert(z[i]);
			}
		}
		it=se.begin();
		cout<<*it<<endl;
	}
	return 0;
}

