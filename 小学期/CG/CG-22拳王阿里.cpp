#include<bits/stdc++.h>
using namespace std;
map<string,int> week;
int main() {
	int count;
	cin >> count;
	week["monday"]=1;
	week["tuesday"]=2;
	week["wednesday"]=3;
	week["thursday"]=4;
	week["friday"]=5;
	week["saturday"]=6;
	week["sunday"]=7;
	while(count--) {
		string le,ri;
		int st,en;
		cin >> le >> ri >> st >> en;
		int temp=week[ri]-week[le]+1;
		if(temp<0) {
			temp+=7;
		}
		int co=0;
		int date;
		for(int i=st; i<=en; i++) {
			if(i%7==temp) {
				co++;
				date=i;
			}
		}
		if(co>1) {
			cout << "many" << endl;
		} else if(co==1) {
			cout << date << endl;
		} else if(co==0) {
			cout << "impossible" << endl;
		}
	}
	return 0;
}
