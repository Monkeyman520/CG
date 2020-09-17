#include<bits/stdc++.h>

using namespace std;
#define N 4

struct team {
	string name;
	int goal=0;
	int score=0;

	team() : goal(0), score(0), name("") {}
};

int findn(string str, team T[], int n) {
	for (int i = 0; i < n; i++) {
		if (str == T[i].name) {
			return i;
		}
	}
	return -1;
}

bool cmp(team a, team b) {
	if (a.score != b.score) {
		return a.score > b.score;
	} else {
		return a.goal > b.goal;
	}
}

int main() {
	int count = 0;
	cin >> count;
	while (count--) {
		team T[4];
//        memset(&T[4], 0, sizeof(T[4]));
		int counti = 0;
		string aname, bname, temp;
		int g1, g2;
		for (int i = 0; i < 12; i++) {
			cin >> aname >> g1 >> temp >> g2 >> bname;
//			cout << aname << g1 << temp << g2 << bname << endl;
			int t1 = findn(aname, T, 4), t2 = findn(bname, T, 4), t3 = g1 - g2, t4 = g2 - g1;
			if (t1 == -1) {
				T[counti].name = aname;
				T[counti].goal += t3;
				if(t3>0) {
					T[counti].score+=3;
				} else if(t3==0) {
					T[counti].score+=1;
				} else {
					T[counti].score+=0;
				}
				counti++;
			} else {
//				T[t1].name = aname;
				T[t1].goal += t3;
				if (t3 > 0) {
					T[t1].score += 3;
				} else if (t3 == 0) {
					T[t1].score += 1;
				} else {
					T[t1].score += 0;
				}
			}
			if (t2 < 0) {
				T[counti].name = bname;
				T[counti].goal += t4;
				if(t4>0) {
					T[counti].score+=3;
				} else if(t4==0) {
					T[counti].score+=1;
				} else {
					T[counti].score+=0;
				}
				counti++;
			} else {
//				T[t2].name = aname;
				T[t2].goal += t4;
				if (t4 > 0) {
					T[t2].score += 3;
				} else if (t4 == 0) {
					T[t2].score += 1;
				} else {
					T[t2].score += 0;
				}
			}
		}
		sort(T, T + 4, cmp);
		for(int s=0; s<2; s++) {
			cout << T[s].name << " ";
		}
		cout << endl;
	}
	return 0;
}
