#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int total=0, score=0;    //totalΪ�ܷ�,scoreΪÿһ�����ĵ÷�
	bool isVirgin = true;     //�����ж��ǲ��ǵ�һ��
	while(cin >> n) { //��ʼһ����Ϸ
		if(n==0) { //0��ʾ�˴���Ծû�����������ϣ���ʱ��Ϸ������
			break;
		} else { //��������˷�����
			if(n == 1) { //�����˷�����,��û�������������������1��
				score = 1;
				total += score;
			}
			if(n == 2) {  //�����˷�������
				if(isVirgin) { //������Ϸ��һ����Ծ�������˷�������,��˴ε÷�Ϊ2��
					score = 2;
					isVirgin = false;   //�Ժ�Ͳ��ǵ�һ����
				} else if(score == 1) { //����һ�εĵ÷�Ϊ1,��˴ε÷�Ϊ2��
					score = 2;
				} else { //����������������ʱ,�˴ε÷�����һ�ε÷ֵĻ����ϼ�2��
					score += 2;
				}
				total += score;
			}
		}
	}
	cout << total << endl;
	return 0;
}
