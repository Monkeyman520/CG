#include<bits/stdc++.h>
using namespace std;
double area(int x0,int y0,int x1,int y1,int x2,int y2) {
	return x0*y1+x2*y0+x1*y2-x0*y2-x1*y0-x2*y1;
}

int main() {
	int x0,y0,x1,y1,x2,y2;
	while(true) {
		cin >> x0>>y0>>x1>>y1>>x2>>y2;
		if(x0*x0+y0*y0+x1*x1+y1*y1+x2*x2+y2*y2==0) {
			break;
		}
		printf("%.6f\n",fabs(area(x0,y0,x1,y1,x2,y2))/2.0);
	}
	return 0;
}
