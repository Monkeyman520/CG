#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream outfile("test.TXT");	
	int count=1;
	for(int i_10=0; i_10<=2; i_10++) {
		for(int i_5=0; i_5<=4; i_5++) {
			for(int i_2=0; i_2<=10; i_2++) {
				for(int i_1=0; i_1<=20; i_1++) {
					for(int i_0_5=0; i_0_5<=40; i_0_5+=2) {
						if((i_0_5*0.5+i_1+2*i_2+5*i_5+10*i_10)==20) {
							outfile << "��"<< count << "��" << ":";
							outfile << "��ë" << i_0_5 << "��" << " "
							 << "һԪ" << i_1 << "��" << " "
							 << "��Ԫ" << i_2 << "��" << " "
							 << "��Ԫ" << i_5 << "��" << " "
							 << "ʮԪ" << i_10 << "��" << endl;
							cout << "��"<< count << "��" << ":";
							cout << "��ë" << i_0_5 << "��" << " "
							 << "һԪ" << i_1 << "��" << " "
							 << "��Ԫ" << i_2 << "��" << " "
							 << "��Ԫ" << i_5 << "��" << " "
							 << "ʮԪ" << i_10 << "��" << endl;
							count++;
						}
					}
				}
			}
		}
	}
	outfile << "����" << count-1 << "��" << endl; 
	cout << "����" << count-1 << "��" << endl;
	return 0;
}
