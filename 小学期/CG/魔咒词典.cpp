//#include "iostream"
//#include "map"
//#include"string"
//using namespace std;
//map<string,string>Dic;
//char a[30],b[100];
//string a1,b1;
//char c[130];
//
//int main() {
//	while (gets(c)&&c[0]!='@') {
//		int i=1,x=1;
//		a[0]='[';
//		while (c[i-1]!=']') {
//			a[x++]=c[i++];
//		}
//		a[x]='\0';
//		i++;
//		x=0;
//		while (c[i]!='\0') {
//			b[x++]=c[i++];
//		}
//		b[x]='\0';
//		a1=a;
//		b1=b;
//		Dic[a1]=b1;
//		Dic[b1]=a1;
//	}
//	int n;
//	cin >> n;
//	gets(a);
//	while(n--) {
//		gets(a);
//		a1=a;
//		map<string,string>::iterator l1=Dic.find(a1);
//		if(l1 == Dic.end())
//			cout<<"what?"<<endl;
//		else {
//			b1=l1->second;
//			if(b1[0]=='[')
//				b1=b1.substr(1,b1.length()-2);
//			cout<<b1<<endl;
//		}
//	}
//}
//¶þ·Ö²éÕÒ£¨625ms£©
#include<bits/stdc++.h>
using namespace std;
#define N 100010
int cnt;

struct DIC {
	char a[25];
	char b[85];
} d[2][N];

int comp1(const void *a,const void *b) {
	struct DIC *A=(DIC*) a;
	struct DIC *B=(DIC*)b;
	return strcmp(A->a,B->a);
}

int comp2(const void *a,const void *b) {
	struct DIC *A=(DIC*) a;
	struct DIC *B=(DIC*)b;
	return strcmp(A->b,B->b);
}

void Search(char*s, int dicset,int l,int r) {
	int i;
	int m=(l+r)>>1;
	if(dicset==1) {
		while(l<=r) {
			m=(l+r)>>1;
			if(strcmp(s,d[1][m].b)==0) {
				for(i=1; i<strlen(d[1][m].a)-1; i++)
					cout << d[1][m].a[i];
				cout<<endl;
				return;
			} else if(strcmp(s,d[1][m].b)>0)
				l=m+1;
			else
				r=m-1;
		}
		puts("what?");
		return ;
	} else if(dicset==0) {
		while(l<=r) {
			m=(l+r)>>1;
			if(strcmp(s,d[0][m].a)==0) {
				cout << d[0][m].b << endl;
				return ;
			} else if(strcmp(s,d[0][m].a)>0)
				l=m+1;
			else
				r=m-1;
		}
		puts("what?");
		return;
	}
}


int main() {
	char str1[25],str2[85],str[120];
	int i,j;
	cnt=0;
	while(gets(str)) {
		if(strcmp(str,"@END@")==0)
			break;
		i=j=0;
		while(str[i-1]!=']')
			str1[j++]=str[i++];
		str1[j]='\0';

		j=0,i++;
		while(i<strlen(str))
			str2[j++]=str[i++];
		str2[j]='\0';

		strcpy(d[1][cnt].a,str1);
		strcpy(d[1][cnt].b,str2);
		strcpy(d[0][cnt].a,str1);
		strcpy(d[0][cnt].b,str2);
		cnt++;
	}
	qsort(d[0],cnt,sizeof(d[0][0]),comp1);
	qsort(d[1],cnt,sizeof(d[1][0]),comp2);

	int n;
	cin >> n;;
	getchar();
	while(n--) {
		int dic_index=1;
		gets(str2);
		if(str2[0]=='[')
			dic_index=0;
		Search(str2,dic_index,0,cnt-1);
	}
}
