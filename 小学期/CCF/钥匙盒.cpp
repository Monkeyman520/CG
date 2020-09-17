#include <bits/stdc++.h>
using namespace std;

struct Teacher {
	int key;    //钥匙编号
	int time;   //使用钥匙的时间
	int flag;   //设置标识符,0借,1还
};

bool Cmp(Teacher a,Teacher b) {
	if(a.time != b.time) {
		return a.time < b.time;    //先按还取钥匙的时间升序排序
	} else if(a.flag != b.flag) {
		return a.flag > b.flag;
	} else { //若多位老师还钥匙
		return a.key < b.key;     //则按钥匙编号升序排列
	}
}

int main() {
	int N,K;
	int key[1001];   //钥匙列表
	cin >> N >> K;
	vector<Teacher> v;
	for (int i = 1; i <= N; i++) {
		key[i] = i;     //对钥匙进行赋初值
	}
	for (int i = 0; i < K; ++i) {
		int w,s,c;  //老师要使用的钥匙编号w、开始上课的时间s和上课的时长c
		cin >> w >> s >> c;
		v.push_back({w,s,0});    //借
		v.push_back({w,s+c,1});   //还
	}
	sort(v.begin(),v.end(),Cmp);
	for(auto it:v) {
		if(it.flag == 0) { //借钥匙
			for (int i = 1; i <= N; i++) {
				if(key[i] == it.key) {
					key[i] = 0;   //钥匙被借走了
					break;
				}
			}
		} else { //还钥匙
			for (int i = 1; i <= N; i++) {
				if(key[i] == 0) {
					key[i] = it.key;   //把钥匙归还
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
