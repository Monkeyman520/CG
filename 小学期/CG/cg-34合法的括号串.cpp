#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--) {
		stack<char> s;
		string str;
		cin>>str;
		int len = str.length();
		int i;
		for(i=0; i<len; ++i) {
			if(str[i]=='<'||str[i]=='{'||str[i]=='('||str[i]=='[') s.push(str[i]);
			else if(str[i]=='>') {
				if(!s.empty()&&s.top()=='<') s.pop();
				else {
					cout<<"No"<<endl;
					break;
				}
			} else if(str[i]==')') {
				if(!s.empty()&&s.top()=='(') s.pop();
				else {
					cout<<"No"<<endl;
					break;
				}
			} else if(str[i]==']') {
				if(!s.empty()&&s.top()=='[') s.pop();
				else {
					cout<<"No"<<endl;
					break;
				}
			} else if(str[i]=='}') {
				if(!s.empty()&&s.top()=='{') s.pop();
				else {
					cout<<"No"<<endl;
					break;
				}
			}
			if(i==len-1&&s.empty()) cout<<"Yes"<<endl;
			if(i==len-1&&!s.empty()) cout<<"No"<<endl;
		}
	}
	return 0;
}

