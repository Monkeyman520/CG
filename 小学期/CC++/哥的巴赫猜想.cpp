#include<iostream>
using namespace std;
int Glodbach(int y);//��°ͺղ���
int su(int x);//�ж�����
int main() {
	int number;
	cout << "������һ����С��6��ż��: " ;
	cin>>number;
	Glodbach(number);
	return 0;
}
int su(int x) {
	int m;//�����жϱ���
	m=0;//1--��������  0--������
	if(x==2||x==3||x==5) {
		return 1;
	} else {
		for(int i=2; i<x; i++) {
			if(x%i==0) {
				m++;//����г���1�ͱ��������  m++ ����ѭ��  ��������  
				break;
			}
		}
	}
	if(m==0) {
		return 1;
	} else {
		return 0;
	}
}
int Glodbach(int y) {
	int m;
	for(int i=2; i<=(y/2); i++) {
		m=y-i; 
		if(su(i)==1 && su(m) == 1) {// ������ͬʱΪ���� 
			cout<<y<<'='<<i<<'+'<<m<<endl;
		}
	}
}

//˼·��һ�����Ȳ��Ϊ������֮�ͣ����ж����������ǲ������� ����� ��֤��ɲ����������� 
