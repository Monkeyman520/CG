#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="cchellocc";//�����ַ������� 
	for(int i=0;i<str.length();i++){//��ȡ�ַ������Ȳ�ѭ�� 
		if(str[i]=='c'){//�ж��ַ� 
			str[i]='*';//�����滻 
		}
	}
	cout << str << endl;
	return 0;
} 

//˼·��ʹ��ѭ�������ַ������ж��Ƿ���'c'������ǣ������滻Ϊ'*' 
