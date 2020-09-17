#include <bits/stdc++.h>
using namespace std;

struct Teacher {
	int key;    //Կ�ױ��
	int time;   //ʹ��Կ�׵�ʱ��
	int flag;   //���ñ�ʶ��,0��,1��
};

bool Cmp(Teacher a,Teacher b) {
	if(a.time != b.time) {
		return a.time < b.time;    //�Ȱ���ȡԿ�׵�ʱ����������
	} else if(a.flag != b.flag) {
		return a.flag > b.flag;
	} else { //����λ��ʦ��Կ��
		return a.key < b.key;     //��Կ�ױ����������
	}
}

int main() {
	int N,K;
	int key[1001];   //Կ���б�
	cin >> N >> K;
	vector<Teacher> v;
	for (int i = 1; i <= N; i++) {
		key[i] = i;     //��Կ�׽��и���ֵ
	}
	for (int i = 0; i < K; ++i) {
		int w,s,c;  //��ʦҪʹ�õ�Կ�ױ��w����ʼ�Ͽε�ʱ��s���Ͽε�ʱ��c
		cin >> w >> s >> c;
		v.push_back({w,s,0});    //��
		v.push_back({w,s+c,1});   //��
	}
	sort(v.begin(),v.end(),Cmp);
	for(auto it:v) {
		if(it.flag == 0) { //��Կ��
			for (int i = 1; i <= N; i++) {
				if(key[i] == it.key) {
					key[i] = 0;   //Կ�ױ�������
					break;
				}
			}
		} else { //��Կ��
			for (int i = 1; i <= N; i++) {
				if(key[i] == 0) {
					key[i] = it.key;   //��Կ�׹黹
					break;
				}
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << key[i] << " ";
	}
	return 0;
}
