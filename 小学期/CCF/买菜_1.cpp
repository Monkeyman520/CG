#include <iostream>
using namespace std;
int main() {
	int n;//段数
	int time = 0;//次数
	int c, d;//录入小w
	cin >> n;//输入段数
	int h[n][2];//录入小h
	for (int i = 0; i < n; ++i) {
		cin >> h[i][0] >> h[i][1]; //录入小W
	}

	for (int j = 0; j < n; j++) {
		cin >> c >> d;//输入c ,d
		for (int i = 0; i < n; i++) {
			if (c >= h[i][0] && c <= h[i][1]) {
				if (d > h[i][1]) {
					time += h[i][1] - c; //记录聊天数
				//	c = h[i][1];
				} else {
					time += d - c;
				}
			} else if (h[i][0] > c && h[i][0] < d) {
				if (d <= h[i][1]) {
					time += d - h[i][0];
					d=h[i][0];
				} else {
					time += h[i][1] - h[i][0];
				}
			}
		}
	}
	cout << time;
	return 0;
}
