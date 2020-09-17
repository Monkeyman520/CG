#include <iostream>
using namespace std;
int main() {
	string s;
	while(getline(cin, s)) {
		int level, i;
		level = 0;
		i = 0;
		while(s[i]) {
			if(s[i] == 'B') {
				break;
			} else if(s[i] == '(') {
				level++;
			} else if(s[i] == ')') {
				level--;
			}
			i++;
		}
		cout << level << endl;
	}
	return 0;
}
