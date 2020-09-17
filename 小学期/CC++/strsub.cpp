#include<bits/stdc++.h>

using namespace std;

int main(){
	string exper;
	cin >> exper;
	int site=exper.find('=');
	string exper_left=exper.substr(0,site);
	string exper_right=exper.substr(site+1);
	cout << exper_left << endl;
	cout << exper_right << endl;
	return 0;
}
