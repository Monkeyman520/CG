#include<iostream>
using namespace std;
int summi(int dishu,int zhishu) {
	int sum=1;
	for(int i=0; i<zhishu; i++) {
		sum*=dishu;
	}
	return sum;
}
int main() {
	int judge;
	while(cin >> judge && judge!=0) {
		int zuobian=1,youbian=0;
		int zuobian1=1,youbian1=0;
		int a[judge],b[judge+1];
		b[0]=1;
		for(int i=0; i<judge; i++) {
			cin >> a[i];
		}
		for(int i=1; i<=judge; i++) {
			cin >> b[i];
		}
		for(int i=0; i<judge; i++) {
			zuobian=zuobian * (1+a[i]);
		}
		for(int i=0; i<judge; i++) {
			zuobian1=zuobian1 * (a[i]-1);
		}
		for(int i=0; i<judge+1; i++) {
			youbian=youbian+b[i]*summi(1,judge-i);
		}
		for(int i=0; i<judge+1; i++) {
			youbian1=youbian1+b[i]*summi(-1,judge-i);
		}
		if(zuobian==youbian&&zuobian1==youbian1) {
			cout << "Y" << endl;
		} else {
			cout << "N" << endl;
		}
	}
	return 0;
}
