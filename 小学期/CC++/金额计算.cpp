#include<iostream>
using namespace std;
int main() {
	float price=0.0;//��������۸�ı�������ʼ��
	int judge=0;//�����ж���ݵı���
	cout << "�������������ID" << endl;
	cout << "1---�ǻ�Ա" << endl;
	cout << "0---�ǻ�Ա" << endl;//��������ı�׼
	cin >> judge;
	if(judge==0) {//��������ݲ��ж��Ƿ��ǻ�Ա
		cout << "�����빺���ܽ��Ϊ�� ";
		cin >> price;
		cout << endl;
		if(price<0.0) {
			cout << "����۸�������������" << endl;
		} else if(price>=0.0&&price<100.0) {
			cout << "���Ĺ����ܽ��Ϊ�� " << price << endl;
			price=price*1.0;
			cout << "����Ҫ֧���Ľ��Ϊ�� "  << price << endl;
		} else if(price>=100.0) {
			cout << "���Ĺ����ܽ��Ϊ�� " << price << endl;
			price=price*0.9;
			cout << "����Ҫ֧���Ľ��Ϊ�� "  << price << endl;//�����Ľ����ж�  �����ܽ��ȷ���ۿ�
		}
	} else if(judge==1) {//�����������
		cout << "�����빺���ܽ��Ϊ�� ";
		cin >> price;
		cout << endl;
		if(price<0.0) {
			cout << "����۸�������������" << endl;
		} else if(price>=0.0&&price<1000.0) {
			cout << "���Ĺ����ܽ��Ϊ�� " << price << endl;
			price=price*0.8;
			cout << "����Ҫ֧���Ľ��Ϊ�� "  << price << endl;
		} else if(price>=1000.0) {
			cout << "���Ĺ����ܽ��Ϊ�� " << price << endl;
			price=price*0.7;
			cout << "����Ҫ֧���Ľ��Ϊ�� "  << price << endl;
		}
	}
	return 0;
}

//˼·�����жϹ˿͵���ݣ�Ȼ�������ݺ͹����������Ӧ�ļ���
