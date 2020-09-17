//#include<bits/stdc++.h>
//using namespace std;
//map<int,string> answer;
//int main() {
//	int m,n;
//	answer.clear();
//	cin >> m >> n;
//	string str[n];
//	for(int i=0; i<n; i++) {
//		cin >> str[i];
//	}
//	int a[n];
//	for(int i=0; i<n; i++) {
//		a[i]=0;
//	}
//	for(int i=0; i<n; i++) {
//		for(int j=0; j<m; j++) {
//			for(int p=j+1; p<m; p++) {
//				if(str[i][p]<str[i][j]) {
//					a[i]++;
//				}
//			}
//		}
//	}
////	for(int i=0; i<n; i++) {
////		for(int j=0; j<n; j++) {
////			if(a[i]>a[j]) {
////				string temp=str[i];
////				str[i]=str[j];
////				str[j]=temp;
////				int tem=a[i];
////				a[i]=a[j];
////				a[j]=tem;
////			}
////		}
////	}
//	for(int i=0;i<n;i++){
//		answer.insert(pair<int ,string>(a[i],str[i]));
//	}
//	map<int,string>::iterator i;
//	for(i=answer.begin();i!=answer.end();++i){
//		cout << i->second << endl;
//	}
////	sort(b,b+n);
////	for(int i=0; i<n; i++) {
////		for(int j=0; j<n; j++) {
////			if(b[i]==a[j]) {
////				for(int p=0; p<m; p++) {
////					cout << str[j][p];
////				}
////				cout << endl;
////			}
////		}
////	}
////	for(int i=0; i<n; i++) {
////		cout << str[i] << endl;
////	}
//	return 0;
//}

//Âú·Ö´úÂë
#include<bits/stdc++.h>
using namespace std;
struct answer {
	string str1;
	int a;
};
bool cmp(answer a,answer b) {
	return a.a<b.a;
}
int main() {
	int m,n;
	cin >> m >> n;
	string str[n];
	answer tem[n];
	for(int i=0; i<n; i++) {
		cin >> str[i];
	}
	int a[n];
	for(int i=0; i<n; i++) {
		a[i]=0;
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			for(int p=j+1; p<m; p++) {
				if(str[i][p]<str[i][j]) {
					a[i]++;
				}
			}
		}
	}
	for( int i=0; i<n; i++) {
		tem[i].str1=str[i];
		tem[i].a=a[i];
//		cout << a[i] << ' ' << str[i] << endl;
	}
	sort(tem,tem+n,cmp);
	for(int i=0; i<n; i++) {
		cout << tem[i].str1 << endl;
	}
	return 0;
} 
