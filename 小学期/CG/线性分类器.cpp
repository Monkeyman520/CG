//#include<iostream>
//using namespace std;
//long long main() {
//	long long point,line;
//	cin >> point >> line;
//	int count_a=0;
//	int count_b=0;
//	int point_a[point][2];
//	int point_b[point][2];
//	for(int i=0; i<point; i++) {
//		int x_v,y_v;
//		char type;
//		cin >> x_v >> y_v >> type;
//		if(type=='A') {
//			point_a[count_a][0]=x_v;
//			point_a[count_a][1]=y_v;
//			count_a++;
//		}
//		if(type=='B') {
//			point_b[count_b][0]=x_v;
//			point_b[count_b][1]=y_v;
//			count_b++;
//		}
//	}
////	for(int i=0; i<count_a; i++) {
////		cout << point_a[i][0] << ' ' << point_a[i][1] << endl;
////	}
////	for(int i=0; i<count_b; i++) {
////		cout << point_b[i][0] << ' ' << point_b[i][1] << endl;
////	}
//	int a[line],b[line],c[line];
//	for(int i=0; i<line; i++) {
//		cin >> a[i] >> b[i] >> c[i];
//	}
//	for(int k=0; k<line; k++) {
//		bool flag=true;
//		int judge_a=a[k]+b[k]*point_a[0][0]+c[k]*point_a[0][1];
//		int judge_b=a[k]+b[k]*point_b[0][0]+c[k]*point_b[0][1];
//		cout << point_a[0][0] << ' ' << point_a[0][1] << endl;
//		cout << point_b[0][0] << ' ' << point_b[0][1] << endl;
//		cout << judge_a << ' ' << judge_b << endl;
//		if(judge_a*judge_b>0) {
//			flag=false;
//		} else {
//			for(int i=0; i<count_a; i++) {
//				int temp =a[k]+b[k]*point_a[i][0]+c[k]*point_a[i][1];
//				if(temp*judge_a<0) {
//					flag=false;
//					break;
//				}
//			}
//			if(flag==true) {
//				for(int i=0; i<count_b; i++) {
//					int temp =a[k]+b[k]*point_b[i][0]+c[k]*point_b[i][1];
//					if(temp*judge_b<0) {
//						flag=false;
//						break;
//					}
//				}
//			}
//		}
//		if(flag==false) {
//			cout << "No" << endl;
//		} else {
//			cout << "Yes" << endl;
//		}
//	}
//	return 0;
//}

////2 1
////1 0 A
////0 1 B
////0 -1 1
//
//9 3
//1 1 A
//1 0 A
//1 -1 A
//2 2 B
//2 3 B
//0 1 A
//3 1 B
//1 3 B
//2 0 A
//0 2 -3
//-3 0 2
//-3 1 1
//
////9 1
////1 1 A
////1 0 A
////1 -1 A
////2 2 B
////2 3 B
////0 1 A
////3 1 B
////1 3 B
////2 0 A
////-3 1 1


#include<iostream>
using namespace std;

int x[1010],y[1010];
char s[1010];

int main() {
	int n,m,a,b,c;;
	cin>>n>>m;
	for(int i=0; i<n; i++)
		cin>>x[i]>>y[i]>>s[i];

	for(int i=0; i<m; i++) {
		cin>>a>>b>>c;
		//先标定A、B在直线哪侧
		int A,B;
		if(s[0]=='A') {
			if(a+b*x[0]+c*y[0]>0)
				A=1,B=-1;
			else
				A=-1,B=1;
		} else {
			if(a+b*x[0]+c*y[0]>0)
				A=-1,B=1;
			else
				A=1,B=-1;
		}
		int t=1;//代表多少点符合分类
		for(int j=1; j<n; j++) {
			if(s[j]=='A') {
				if( ((a+b*x[j]+c*y[j])*A)>0 ) {
					t++;
				} else {
					break;
				}
			} else if(s[j]=='B') {
				if( ((a+b*x[j]+c*y[j])*B)>0 ) {
					t++;
				} else {
					break;
				}

			}
		}
		if(n==t)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}


