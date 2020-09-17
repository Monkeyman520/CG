#include<bits/stdc++.h>
using namespace std;
map<int ,int> answer;
int main() {
	answer.clear();
	int n;
	cin >> n;
	map<int ,int>::iterator iter;
	int id,score;
	for(int i=0; i<n; i++) {
		cin >> id >> score;
		iter=answer.find(id);
		if(iter==answer.end()) {
			answer.insert(pair<int,int>(id,score));
		} else {
			iter->second+=score;
		}
	}
	int max=0;
	for(iter=answer.begin(); iter!=answer.end(); iter++) {
		if(max<iter->second) {
			max=iter->second;
		}
	}
	for(iter=answer.begin(); iter!=answer.end(); iter++) {
		if(max==iter->second) {
			cout << iter->first << " " << iter->second << endl;
			break;
		}
	}
	return 0;
}
