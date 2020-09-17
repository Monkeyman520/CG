#include<iostream>
#include<string.h>
using namespace std;
string dic[1000];
int main() {
	string s;
	int n=0;
	while(1) {
		cin>>s;
		if(s=="#")break;
		else {
			dic[n]=s;
			n++;
		}
	}//n+1个单词，从0到n
	string s1;
	while(1) {
		cin>>s1;
		int pd=0;
		if(s1=="#")break;
		for(int i=0; i<=n; i++) {
			if(s1==dic[i]) {
				pd=1;
				break;
			}
		}
		if(pd==1)cout<<s1<<" is correct";
		else {
			cout<<s1<<":";
			for(int i=0; i<=n; i++) {
				int t=0;//记不同字母的个数
				string ss1,ss2;//删插中间字母的情况
				ss1="";
				ss2="";
				if(s1.length()==dic[i].length()) { //例如：hove和have
					for(int j=0; j<s1.length(); j++) {
						if(s1[j]!=dic[i][j])t++;
					}
					if(t==1) {
						cout<<' '<<dic[i];
					}
				} else if(s1.length()==dic[i].length()+1) { //例如：mine和min
					if(s1.find(dic[i],0)!=-1) {
						cout<<' '<<dic[i];
					} else {
						if(s1[0]==dic[i][0]&&s1[s1.length()-1]==dic[i][dic[i].length()-1]) {
							for(int j=1; j<s1.length()-1; j++)ss1+=s1[j]; //去除头和尾，下同；
							for(int j=1; j<dic[i].length()-1; j++)ss2+=dic[i][j];
							if(ss1.find(ss2,0)!=-1||ss2=="")cout<<' '<<dic[i];
						}
					}
				} else if(s1.length()+1==dic[i].length()) { //例如：m和my
					if(dic[i].find(s1,0)!=-1) {
						cout<<' '<<dic[i];
					} else {
						if(s1[0]==dic[i][0]&&s1[s1.length()-1]==dic[i][dic[i].length()-1]) {
							for(int j=1; j<s1.length()-1; j++)ss1+=s1[j];
							for(int j=1; j<dic[i].length()-1; j++)ss2+=dic[i][j];
							if(ss2.find(ss1,0)!=-1||ss1=="")cout<<' '<<dic[i];
						}
					}
				}
			}
		}
		cout<<endl;
	}
}

