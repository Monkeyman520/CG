//56.��ȵĶ���ʽ
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
	int n;                      //����ʽ��ߴ���
	vector<int> ai;             //����ʽa
	map<int, int> bi, aiExband; //����ʽb������ʽa��չ��
	//map<����,��Ӧ���ϵ��>
	while (cin >> n && n != 0) {
		int temp;
		ai.clear(), bi.clear(), aiExband.clear();
		for (int i = 0; i < n; i++) {
			cin >> temp;
			ai.push_back(temp);
		}
		bi[n] = 1;
		for (int i = n - 1; i >= 0; i--) {
			cin >> temp;
			bi[i] = temp;
		}
		//����ʽa��չ��
		aiExband[0] = ai[0], aiExband[1] = 1;
		for (int i = 2; i <= n; i++) {
			for (int j = i; j >= 0; j--) {
				if (j != i && j != 0) {
					aiExband[j] = aiExband[j] * ai[i - 1] + aiExband[j - 1];
				} else if (j == i) { //��ǰ��ߴ������ϵ��һ����1
					aiExband[j] = 1;
				} else { //j=0
					aiExband[j] *= ai[i - 1];
				}
			}
		}
		if (bi == aiExband) {
			cout << 'Y' << endl;
		} else {
			cout << 'N' << endl;
		}
	}
	return 0;
}

