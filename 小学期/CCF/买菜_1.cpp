#include <iostream>
using namespace std;
int main() {
	int n;//����
	int time = 0;//����
	int c, d;//¼��Сw
	cin >> n;//�������
	int h[n][2];//¼��Сh
	for (int i = 0; i < n; ++i) {
		cin >> h[i][0] >> h[i][1]; //¼��СW
	}

	for (int j = 0; j < n; j++) {
		cin >> c >> d;//����c ,d
		for (int i = 0; i < n; i++) {
			if (c >= h[i][0] && c <= h[i][1]) {
				if (d > h[i][1]) {
					time += h[i][1] - c; //��¼������
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
