#include <iostream>
#include <map>

using namespace std;

int main() {
	int key =0 ;                            //������Ӧ����ʽ����
	int value =0 ;                          //ֵ����Ӧ����ʽϵ��
	map<int,int> polynomial;                //map�������洢����ʽ
	map<int,int>::iterator iter;            //������
	map<int,int>::reverse_iterator reiter;  //���������reverse_iterator���������map�����е����ݣ�����Ҫrbegin()��ָ��ĩβ����
	                                        // rend()��ָ��ͷ������ָ�������������ʼλ�ú���ֹλ�á�

	while(1) {                                   //��ȡ��һ������ʽ��Ϣ
		cin >>key;
		cin >> value;
		if(0 == key && 0 == value) break;        //���key==0��value==0������ֹ
		iter = polynomial.find(key);             //��map�����в����Ƿ��Ѵ���
		if(iter != polynomial.end()) {           //����Ѿ����ڣ����޸�ϵ��
			iter->second = iter->second + value;
		} else {
			polynomial[key] = value;             //�������һ������
		}
	}
	while(1) {     //���Ƶ�һ������ʽ������ڶ�������ʽ���ڶ���ڶ�������ʽʱ��ɶ���ʽ���
		cin >>key;
		cin >> value;
		if(0 == key && 0 == value) break;
		iter = polynomial.find(key);
		if(iter != polynomial.end()) {
			iter->second = iter->second + value;
		} else {
			polynomial[key] = value;
		}
	}

	for(reiter = polynomial.rbegin(); reiter != polynomial.rend(); reiter++) { //��������������
		if(0 != reiter->second)    {                                           //ע�⣺ֻ��valueֵ!=0��ʱ������
			cout << reiter->first << ' ' <<reiter->second <<endl;
		}
	}
	return 0;
}
