#include <iostream>
#include <string>
using namespace std;
string transfer(string s) {
	int len=s.length();
	for(int i=0; i<len/2; i++) {
		char temp=s[i];
		s[i]=s[len-i-1];
		s[len-i-1]=temp;
	}
	return s;
}
int main() {
	string str;
	while(getline(cin,str)) {
		string temp;
		int len=str.length();
		int start=0,end=0;
		for(int i=0; i<len; i++) {
			if(str[i]==' '||i==len-1) {
				if(i==len-1) {
					end=i;
				} else {
					end=i-1;
				}
				string substr;
				for(int j=start; j<=end; j++) {
					substr +=str[j];
				}
				temp+=transfer(substr);//反转句子内的单词
				if(i!=len-1) {
					temp+=' ';
					start=i+1;
				} else {
					break;
				}
			}
		}
		cout<<transfer(temp)<<endl;//把整个句子当成一个单词进行反转
	}
	return 0;
}
