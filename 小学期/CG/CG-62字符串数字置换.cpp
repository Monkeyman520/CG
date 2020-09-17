#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string str;
	getline(cin,str);
	string temp;
	int a[10]= {0,0,0,0,0,0,0,0,0,0};
	for(int i=0; i<str.length(); i++) {
		if(str[i]=='0') {
			temp+="(Zero)";
			a[0]++;
		} else if(str[i]=='1') {
			temp +="(One)";
			a[1]++;
		} else if(str[i]=='2') {
			temp +="(Two)";
			a[2]++;
		} else if(str[i]=='3') {
			temp +="(Three)";
			a[3]++;
		} else if(str[i]=='4') {
			temp +="(Four)";
			a[4]++;
		} else if(str[i]=='5') {
			temp +="(Five)";
			a[5]++;
		} else if(str[i]=='6') {
			temp +="(Six)";
			a[6]++;
		} else if(str[i]=='7') {
			temp +="(Seven)";
			a[7]++;
		} else if(str[i]=='8') {
			temp +="(Eight)";
			a[8]++;
		} else if(str[i]=='9') {
			temp +="(Nine)";
			a[9]++;
		} else {
			temp+=str[i];
		}
	}
	cout << temp << endl;
	for(int i=0; i<10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
