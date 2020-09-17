#include<iostream>
using namespace std;
int main() {
	string visited[100];
	int step=0;
	int flag[100]= {0};
	int cnt=1;
	visited[0]="http://www.game.org/";
	flag[0]=1;
	string str;
	while(getline(cin,str)&&str!="QUIT") {
		if(str.substr(0,5)=="VISIT") {
			step++;
			if(flag[step]==0) {
				int len=str.length();
				visited[step]=str.substr(6,(len-6));
				cout<<visited[step]<<endl;
				flag[step]=1;
				cnt++;
			} else {
				int len=str.length();
				visited[step]=str.substr(6,(len-6));
				cout<<visited[step]<<endl;
				for(int i=step; i<cnt; i++) {
					flag[i]=0;
				}
				flag[step]=1;
				cnt=step+1;
			}
		} else if(str=="BACK") {
			step--;
			if(step>=0) {
				cout<<visited[step]<<endl;
			} else {
				step++;
				cout<<"Ignored"<<endl;
			}
		} else if(str=="FORWARD") {
			step++;
			if(step<=(cnt-1)) {
				cout<<visited[step]<<endl;
			} else {
				step--;
				cout<<"Ignored"<<endl;
			}
		}
	}
	return 0;
}
