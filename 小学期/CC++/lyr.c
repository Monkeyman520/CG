//#include <stdio.h>
//int main(void) {
//	int n1_ch=0,n2_ch=0,num=0,other=0;//n1_ch和n2_ch分别表示英文大写和小写字母字符个数，num表示数字字符个数,other表示其他字符个数
//	char ch;
//	ch=getchar();   //从键盘输入一个字符
//	while(ch!='\n') {
//		if(ch>='A'||ch<='Z')
//			n1_ch++;
//		else if(ch>='a'||ch<='z')
//			n2_ch++;
//		else  if(ch>='0'||ch<='9')
//			num++;
//		else other++;
//		setbuf(stdin, NULL);
//		ch=getchar();
//	}
//	printf("%d,%d,%d,%d\n",n1_ch,n2_ch,num,other);
//	return 0;
//}
//#include<stdio.h>
//int slen(char s[]);
//int main(void)
//{char a[300];
// int n;
// gets(a);
// n=slen(a);
// printf("string length=%d\n",n);
// return 0;
//}
//int slen(char s[]){
//	int i=0;
//	while(s[i] !='\0')
//	{
//		i++;
//	}
//	return i;
//}
//#include <stdio.h>
//double fact(int k);
//int main(void) {
//	double s=0;
//	int i,N;
//	scanf("%d",&N);
//	for(i=1; i<=N; i++)
//		s=s+fact(i);
//	printf("%.0lf",s);
//	return 0;
//}
//double fact(int k) {
//	static int j=1;
//	j=j*k;
//	return(j);
//}
//double fact(int k) {
//	double j=1.0;
//	double i;
//    for(i=1.0;i<=k;i++){
//        j=j*i;
//    }
//    return j;
//}
//double fact(int k) {
//	int j=k;
//	int i=1;
//    if(k==1){
//    	return j;
//	}else {
//		return j*fact(k-1);
//	}
//}
//#include<stdio.h>
//#include<ctype.h>
//void fun(char *str) {
//	char *str_c=str;
//	int i,j=0;
//	for(i=0; str[i]!='\0'; i++) {
//		if(str[i]!=' ')
//			str_c[j++]=str[i];
//	}
//	str_c[j]='\0';
//	str=str_c;
//}
//int main() {
//	char str[81];
//	gets(str);
//	fun(str);
//	puts(str);
//}
//#include <stdio.h>
//int main(void) {
//	int n1_ch=0,n2_ch=0,num=0,other=0;//n1_ch和n2_ch分别表示英文大写和小写字母字符个数，num表示数字字符个数,other表示其他字符个数
//	char ch;
//
//	ch=getchar(); //从键盘输入一个字符
//	while(ch!='\n') {
//		if(ch>='A'||ch<='Z')
//			n1_ch++;
//		else if(ch>='a'||ch<='z')
//			n2_ch++;
//		else  if(ch>='0'||ch<='9')
//			num++;
//		else other++;
//
//		;  //从键盘输入一个字符
//	}
//	printf("%d,%d,%d,%d\n",n1_ch,n2_ch,num,other);
//	return 0;
//}
#include<iostream>
using namespace std;
int main() {
	int n1_ch=0,n2_ch=0,num=0,other=0;//n1_ch和n2_ch分别表示英文大写和小写字母字符个数，num表示数字字符个数,other表示其他字符个数
	char ch;
	getline(cin,ch); 
	//ch=getchar(); //从键盘输入一个字符
	while((ch=getchar())!='\n') {
		if(ch>='A'||ch<='Z')
			n1_ch++;
		else if(ch>='a'||ch<='z')
			n2_ch++;
		else  if(ch>='0'||ch<='9')
			num++;
		else other++;

		//;  //从键盘输入一个字符
	}
	printf("%d,%d,%d,%d\n",n1_ch,n2_ch,num,other);
	return 0;
}
