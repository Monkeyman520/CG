//�ӵ�һ���ڵ㿪ʼ����ÿһ��Ԫ�ص�ԭ��������벢��¼·��
//�ӵڶ��㿪ʼÿ��Ԫ������Ӧ��һ�������Ԫ��
#include <bits/stdc++.h>
using namespace std;
struct node {
	int value;//Ԫ�ص�ֵ
	int x,y;//Ԫ�ص�λ��
	int d;//��ԭ���������
	vector <int> way;//�������Ӧ��·��
};
int main() {
	int n;
	cin>>n;
	vector <node> N;
	node temp;
	for(int i=0; i<n; i++) {
		for(int j=0; j<i+1; j++) {
			cin>>temp.value;
			temp.x=i+1;
			temp.y=j+1;
			N.push_back(temp);
		}
	}
	int len=N.size();
	int Max=0;
	for(int i=0; i<len; i++) {
		if(i==0) {
			N[i].d=N[i].value;
			N[i].way.push_back(N[i].value);
		} else {
			int num=0;
			for(int j=0; j<i; j++) {
				if(N[j].x==N[i].x-1) {
					if(N[j].y==N[i].y||N[j].y==N[i].y-1) {
						num++;
					}
				}

			}
			if(num==1) { //��Ԫ�ش���ÿһ�е������˵�ʱ��ֻ��һ��·��
				for(int j=0; j<i; j++) {
					if(N[j].x==N[i].x-1) {
						if(N[j].y==N[i].y||N[j].y==N[i].y-1) {
							N[i].d=N[j].d+N[i].value;
							N[i].way=N[j].way;//���ƶ�Ӧ��һ�е�Ԫ�ص�·�������������ֵ
							N[i].way.push_back(N[i].value);
							break;
						}
					}
				}
			} else { //����ÿ��Ԫ�ض�Ӧ��һ�е�����Ԫ��
				int d1=0,d2=0,pos1=0,pos2=0;
				for(int j=0; j<i; j++) {
					if(N[j].x==N[i].x-1) {
						if(N[j].y==N[i].y-1) {
							pos1=j;
							d1=N[j].d+N[i].value;
						} else if(N[j].y==N[i].y) {
							pos2=j;
							d2=N[j].d+N[i].value;
							break;
						}
					}
				}
				if(d1>=d2) {
					N[i].d=d1;
					N[i].way=N[pos1].way;
					N[i].way.push_back(N[i].value);
				} else {
					N[i].d=d2;
					N[i].way=N[pos2].way;
					N[i].way.push_back(N[i].value);
				}
			}
		}
		if(Max<N[i].d) {
			Max=N[i].d;
		}
	}
	cout<<Max<<endl;
	for(int i=len-1; i>=0; i--) { //���·�����������һ��Ԫ�أ��Ӻ���ǰ�����ټ�����
		if(N[i].d==Max) {
			int t=N[i].way.size();
			for(int j=0; j<t; j++) {
				cout<<N[i].way[j];
				if(j!=t-1) {
					cout<<' ';
				}
			}
			cout<<endl;
			break;//�ҵ����������˳�ѭ��
		}
	}
	return 0;
}

