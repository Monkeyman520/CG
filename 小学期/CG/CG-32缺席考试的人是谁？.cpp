#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string name[20000];
int main() {
	int n;
	while (cin >> n) { //����˼·���ǣ�ֻ����һ�����ֵ�ͬѧȱ������
		if (n==0)
			return 0;
		for(int i=0; i<2*n-1; i++) {
			cin >> name[i];
		}
		sort(name,name+2*n-1); //�������������򣨻ᰴ���ֵ�������
		for(int i=0; i<2*n-1; i+=2) {
			if (name[i]!=name[i+1]) { //�ӵ�һ�����ֿ�ʼ��ÿ��ѭ������Ϊ2
				//�������������뵱ǰ���ֲ�ͬ����ǰ���־���ȱϯ�ߵ�����
				cout << name[i] << endl;
				break;
			}
		}
	}
}//���������һ������������ʵ���ַ����ĳ�������
//bool cmp(string a,string b)
//{
//    return a.length()<b.length();
//}



/*
5
����
����
����
����
����
����
����
����
�۰�
0
*/
