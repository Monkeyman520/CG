#include<stdio.h>
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main() {
	srand(time(0));
	int a[10],b[10];
	for(int i=0; i<10; i++) {
		a[i]=rand()%50;
	}
	for(int i=0; i<10; i++) {
		b[i]=rand()%50;
	}
	for(int i=0; i<10; i++) {
		int temp=a[i];
		if(a[i]<b[i]) {
			a[i]=b[i];
			b[i]=temp;
		}
	}
	int answer[10];
	for(int i=0; i<10; i++) {
		answer[i]=a[i]-b[i];
	}
	int sum=0;
	for(int i=0; i<10; i++) {
		int count=1;
		int question;
		cout << a[i] << "-" << b[i] << "=";
		while(true) {
			cin >> question;
			if(count==1&&question==answer[i]) {
				sum+=10;
				break;
			} else if(count==1&&question!=answer[i]) {
				cout<< "输入答案错误!请重新输入!" << endl;
				count++;
			} else if(count==2&&question==answer[i]) {
				sum+=7;
				break;
			} else if(count==2&&question!=answer[i]) {
				cout<< "输入答案错误!请重新输入!" << endl;
				count++;
			} else if(count==3&&question==answer[i]) {
				sum+=5;
				break;
			} else if(count==3&&question!=answer[i]) {
				cout<< "输入答案错误!" << endl;
				cout <<"正确答案为：" <<  a[i] << "-" << b[i] << "=" << answer[i] << endl;
				sum+=0;
				break;
			}
		}
	}
	cout << sum << endl;
	if(sum<=100&&sum>=90) {
		cout << "SMART" << endl;
	} else if(sum<90&&sum>=80) {
		cout << "GOOD" << endl;
	} else if(sum<80&&sum>=70) {
		cout << "OK" << endl;
	} else if(sum<70&&sum>=60) {
		cout << "PASS" << endl;
	} else if(sum<60) {
		cout << "TRY AGAIN" << endl;
	}
	return 0;
}
















