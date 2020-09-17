#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int *a = (int *)malloc(sizeof(int) * (n)+10);
	//int total=0;
	getchar();//吃掉换行符
	for(int i=0; i<n; i++) {
		int temp=0;
		char ch=getchar();
		while(ch!='\n') {
			if(ch!='-') {
				//temp=temp*10;
				if(ch>='A' && ch<='P') {
					temp=temp*10+(ch-'A')/3+2;
				} else if(ch>='R' && ch<='Y') {
					temp=temp*10+(ch-'A'-1)/3+2;
				} else if(ch>='0' && ch<='9') {
					temp=temp*10+ch-'0';
				}
			}
			ch=getchar();
		}
		a[i]=temp;
	}
	sort(a,a+n);
	int flag=0;
	for(int i=0; i<n-1; i++) {
		int count=1;
		while(i+1<n && a[i]==a[i+1]) {
			count++;
			i++;
		}
		if(count>1) {
			flag=1;
			printf("%03d-%04d %d\n",a[i] / 10000 ,a[i] % 10000 ,count); //前导0的处理很重要！！
			/*	if(a[i]>=1000000)
					cout<<a[i]/10000<<"-";
				else if(100000<=a[i]&& a[i]<=999999)
					cout<<"0"<<a[i]/10000<<"-";
				else if(10000<=a[i]&& a[i]<=99999)
					cout<<"00"<<a[i]/10000<<"-";
				else
					cout<<"000"<<"-";
				if(1000<=(a[i]%10000)&&(a[i]%10000)<=9999)
					cout<<a[i]%10000;
				else if(100<=(a[i]%10000)&&(a[i]%10000)<=999)
					cout<<"0"<<"-"<<a[i]%10000;
				else if(10<=(a[i]%10000)&&(a[i]%10000)<=99)
					cout<<"00"<<"-"<<a[i]%10000;
				else if(0<=(a[i]%10000)&&(a[i]%10000)<=9)
					cout<<"000"<<a[i]%10000;
				cout<<" "<<count<<endl;
			*/
		}
	}
	if(flag==0)
		cout<<"No duplicates."<<endl;
	getchar();
	return 0;
}
