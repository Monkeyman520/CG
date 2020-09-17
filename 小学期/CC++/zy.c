#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	srand(time(0));
	int a[10],b[10];
	int i=0;
	for(i=0; i<10; i++) {
		a[i]=rand()%50;
	}
	for(i=0; i<10; i++) {
		b[i]=rand()%50;
	}
	for(i=0; i<10; i++) {
		int temp=a[i];
		if(a[i]<b[i]) {
			a[i]=b[i];
			b[i]=temp;
		}
	}
	int answer[10];
	for(i=0; i<10; i++) {
		answer[i]=a[i]-b[i];
	}
	int sum=0;
	for(i=0; i<10; i++) {
		int count=1;
		int question;
		printf("%d-%d=",a[i],b[i]);
		while(1) {
			scanf("%d",&question);
			if(count==1&&question==answer[i]) {
				sum+=10;
				break;
			} else if(count==1&&question!=answer[i]) {
				printf("输入答案错误!请重新输入!\n");
				count++;
			} else if(count==2&&question==answer[i]) {
				sum+=7;
				break;
			} else if(count==2&&question!=answer[i]) {
				printf("输入答案错误!请重新输入!\n");
				count++;
			} else if(count==3&&question==answer[i]) {
				sum+=5;
				break;
			} else if(count==3&&question!=answer[i]) {
				printf("输入答案错误!\n");
				printf("正确答案为：");
				printf("%d-%d=%d\n",a[i],b[i],answer[i]);
				sum+=0;
				break;
			}
		}
	}
	printf("%d\n",sum);
	if(sum<=100&&sum>=90) {
		printf("SMART");
	} else if(sum<90&&sum>=80) {
		printf("GOOD");
	} else if(sum<80&&sum>=70) {
		printf("OK");
	} else if(sum<70&&sum>=60) {
		printf("PASS");
	} else if(sum<60) {
		printf("TRY AGAIN");
	}
	return 0;
}
