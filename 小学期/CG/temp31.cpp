#include <bits/stdc++.h>

using namespace std;

int main() {
	map<string, int> ans;
	ans.clear();
	map<string, int>::iterator iter;
	int n;
	cin >> n;
	for (int i = 0; i < n * 2 - 1; i++) {
		string temp;
		cin >> temp;
		iter = ans.find(temp);
		if (iter == ans.end()) {
			ans.insert(pair<string, int>(temp, 1));
		} else {
			iter->second+=1;
		}
	}
	int endingint;
	cin >> endingint;
	for (iter = ans.begin(); iter != ans.end(); iter++) {
		if (iter->second == 1) {
			cout << iter->first << endl;
			break;
		}
	}
	return 0;
}


/*
5
张三
张三
张三
李四
李四
王五
王五
王五
雄安
0
*/
