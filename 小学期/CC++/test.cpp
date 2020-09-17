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
							outfile << "第"<< count << "种" << ":";
							outfile << "五毛" << i_0_5 << "张" << " "
							 << "一元" << i_1 << "张" << " "
							 << "两元" << i_2 << "张" << " "
							 << "五元" << i_5 << "张" << " "
							 << "十元" << i_10 << "张" << endl;
							cout << "第"<< count << "种" << ":";
							cout << "五毛" << i_0_5 << "张" << " "
							 << "一元" << i_1 << "张" << " "
							 << "两元" << i_2 << "张" << " "
							 << "五元" << i_5 << "张" << " "
							 << "十元" << i_10 << "张" << endl;
							count++;
						}
					}
				}
			}
		}
	}
	outfile << "共计" << count-1 << "种" << endl; 
	cout << "共计" << count-1 << "种" << endl;
	return 0;
}
