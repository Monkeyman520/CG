//39.���籭����
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct team {
	string t_name; //������
	int score_sum; //����
	int goals;     //������
	int goals_n;   //��ʤ����
	team(string name) {
		this->t_name = name;
		this->score_sum = 0;
		this->goals = 0;
		this->goals_n = 0;
	}
};

int n;        //�м�֧����
int num_cmpt; //һ����������
string name;  //��������

vector<team> teams;           //��������
vector<team>::iterator it;    //������it
vector<string> teams_vic;     //������̭�������
vector<string>::iterator t_v; //������t_v
vector<string> teams_cmpt;    //ĳ����������֧����
string cmpt;                  //ĳ����������֧����
int goal_1, goal_2;           //��֧����÷�
char chr;                     //ռλ

bool cmp(const team &a, const team &b); //����ӽ�������
vector<string> theTeams(string cmpt);   //�μӱ�������֧����ֱ�������֧
int factorial(int num);                 //����num�Ľ׳�
vector<team> competition(vector<team> teams, vector<string> teams_cmpt, int goal_1, int goal_2);
//competition���б���

int main() {
	cin >> n;
	num_cmpt = factorial(n) / (factorial(n - 2) * 2); //ÿ��֧�����һ��������Ϊ C(n,2)
	for (int i = 0; i < n; i++) {                     //���������������
		cin >> name;
		teams.push_back(team(name));
	}
	for (int i = 0; i < num_cmpt; i++) {
		cin >> cmpt >> goal_1 >> chr >> goal_2;                 //������������
		teams_cmpt = theTeams(cmpt);                            //��ȡ������������֧����
		teams = competition(teams, teams_cmpt, goal_1, goal_2); //�ȷֱ䶯
	}
	sort(teams.begin(), teams.end(), cmp); //�����ж�������
	it = teams.begin();
	for (int i = 0; i < n / 2; i++) {
		teams_vic.push_back(it->t_name); //��ȡ������̭���Ķ���
		it++;
	}
	sort(teams_vic.begin(), teams_vic.end()); //���ֵ�������
	for (t_v = teams_vic.begin(); t_v != teams_vic.end(); t_v++) {
		cout << *t_v << endl; //������
	}
	return 0;
}

bool cmp(const team &a, const team &b) { //����ӽ�������
	if (a.score_sum == b.score_sum) {
		if (a.goals_n == b.goals_n) {
			return a.goals > b.goals;
		} else {
			return a.goals_n > b.goals_n;
		}
	} else {
		return a.score_sum > b.score_sum;
	}
}

vector<string> theTeams(string cmpt) { //�μӱ�������֧����ֱ�������֧
	vector<string> res;
	string::size_type _find;
	string team1 = "", team2 = "";
	unsigned len = cmpt.length(); //��unsigned����������Ϣ
	_find = cmpt.find('-');
	for (unsigned i = 0; i < _find; i++) {
		team1 += cmpt[i];
	}
	for (unsigned i = _find + 1; i < len; i++) {
		team2 += cmpt[i];
	}
	res.push_back(team1);
	res.push_back(team2);
	return res;
}

int factorial(int num) { //����num�Ľ׳�
	if (num == 0) {
		return 1;
	} else {
		return num * factorial(num - 1);
	}
}

vector<team> competition(vector<team> teams, vector<string> teams_cmpt, int goal_1, int goal_2) {
	vector<team>::iterator temp;
	if (goal_1 == goal_2) { //���ӽ�������ͬ������1��
		for (temp = teams.begin(); temp != teams.end(); temp++) {
			if (temp->t_name == teams_cmpt[0]) { //��һ��
				temp->score_sum += 1;
				temp->goals += goal_1;
			} else if (temp->t_name == teams_cmpt[1]) { //�ڶ���
				temp->score_sum += 1;
				temp->goals += goal_2;
			}
		}
	} else if (goal_1 > goal_2) { //��һ�ӻ�ʤ����һ�ӵ�����
		for (temp = teams.begin(); temp != teams.end(); temp++) {
			if (temp->t_name == teams_cmpt[0]) { //��һ��
				temp->score_sum += 3;
				temp->goals += goal_1;
				temp->goals_n += (goal_1 - goal_2); //��ʤ����
			} else if (temp->t_name == teams_cmpt[1]) { //�ڶ���
				temp->goals += goal_2;
				temp->goals_n -= (goal_1 - goal_2);
			}
		}
	} else { //�ڶ��ӻ�ʤ���ڶ��ӵ�����
		for (temp = teams.begin(); temp != teams.end(); temp++) {
			if (temp->t_name == teams_cmpt[0]) { //��һ��
				temp->goals += goal_1;
				temp->goals_n -= (goal_2 - goal_1);
			} else if (temp->t_name == teams_cmpt[1]) { //�ڶ���
				temp->score_sum += 3;
				temp->goals += goal_2;
				temp->goals_n += (goal_2 - goal_1); //��ʤ����
			}
		}
	}
	return teams;
}

