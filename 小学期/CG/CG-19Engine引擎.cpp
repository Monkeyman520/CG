#include<iostream>
#include<string>
using namespace std;
class article { //�½���һ����
	public:
		article() {
			s="";
			visit=0;
		}
		string s;
		int visit;
};
int main() {
	article art[1000];//�������飬�����洢ԭ��������
	article art2[1000];//��Сд������洢�Ķ�������
	int n=0;
	while(cin>>n) {
		if(n==0)
			break;
		cin.get();
		for(int i=0; i<n; i++) {
			art[i].s=" ";//�׼��Ͽո�
			string tmp;
			getline(cin,tmp);
			art[i].s=art[i].s+tmp;
			art[i].s+=" ";//β���Ͽո�
			cin>>art[i].visit;
			cin.get();
			art2[i]=art[i];//���ﲻ��ǳ����
			for(int j=0; j<art2[i].s.length(); j++) { //Сд��
				if(art2[i].s[j]>='A'&&art2[i].s[j]<='Z')
					art2[i].s[j]+=32;
			}
		}
		int m=0;
		cin>>m;
		cin.get();
		article headings[1000];//�����洢���ܷ���Ҫ��ı���
		for(int i=0; i<m; i++) {
			string keys=" ";//�ؼ����׼��Ͽո�
			string tmp;
			getline(cin,tmp);
			keys+=tmp;
			keys+=" ";//�ؼ���β���Ͽո�
			for(int i=0; i<keys.length(); i++) { //Сд��
				if(keys[i]>='A'&&keys[i]<='Z')
					keys[i]=keys[i]+32;
			}
			int k=0;
			for(int i=0; i<n; i++) {
				if(art2[i].s.find(keys)!=string::npos) { //����ƥ��
					headings[k].s=art[i].s;//ƥ��ɹ��ͽ��и�ֵ
					headings[k].visit=art[i].visit;
					k++;
				}
			}
			for(int i=k-1; i>0; i--) { //��������յ�������Ϊ��֤��������ͬ���ô���������µ�����˳��
				for(int j=i-1,tmp=0; j>=0; j--) {
					string tmp2;
					if(headings[i].visit>headings[j].visit) {
						tmp=headings[i].visit;
						headings[i].visit=headings[j].visit;
						headings[j].visit=tmp;
						tmp2=headings[i].s;
						headings[i].s=headings[j].s;
						headings[j].s=tmp2;
					}
				}
			}
			for(int i=0; i<k; i++) { //�����ʱ��ȥ������Ϊ��ƥ����ϵĿո�ͺ���
				headings[i].s.erase(0,1);
				headings[i].s.erase(headings[i].s.length()-1,1);
				cout<<headings[i].s<<endl;
			}
			cout<<"***"<<endl;
		}
		cout<<"---"<<endl;
	}
}
