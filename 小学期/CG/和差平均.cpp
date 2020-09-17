#include <iostream>
using namespace std;
double max(double a[],int );//最大值
double ave(double a[],int );//平均
double min(double a[],int);//中值
double variance (double a[],int );//方差；
int main() {

}
double max(double a[],int n) {
	double haha=a[0];
	for (int i=1; i<n; i++) {
		if (a[i]>haha)
			haha=a[i];
	}
	return haha;
}
//这是求最大值；最小值和 这个差不多，不写了?

double ave(double a[],int n) {
	int sum=0;
	for (int i=0; i<n; i++)
		sum+=a[i];
	return sum/n;
} //平均值，没什么好说的?
//方差要用的是平均值，不是中值；

double mid(double a[],int n) {
	int mid;
	if (n%2==0)
		mid =(a[n/2-1]+a[n/2])/2;
	else
		mid =a[(n-1)/2];

}
//这个是求中值

double variance (double a[],int n) {
	double sum=0;
	double average=ave(a,n);//函数调用！！不许有【】！！！不许有int和double ！！
	for (int i=0; i<n; i++)
		sum=(a[i]-average)*(a[i]-average);
	return sum/n;
}
//这个是求方差的，最后要除以n，别忘了！！！
