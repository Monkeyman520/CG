#include <iostream>
using namespace std;
double max(double a[],int );//���ֵ
double ave(double a[],int );//ƽ��
double min(double a[],int);//��ֵ
double variance (double a[],int );//���
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
//���������ֵ����Сֵ�� �����࣬��д��?

double ave(double a[],int n) {
	int sum=0;
	for (int i=0; i<n; i++)
		sum+=a[i];
	return sum/n;
} //ƽ��ֵ��ûʲô��˵��?
//����Ҫ�õ���ƽ��ֵ��������ֵ��

double mid(double a[],int n) {
	int mid;
	if (n%2==0)
		mid =(a[n/2-1]+a[n/2])/2;
	else
		mid =a[(n-1)/2];

}
//���������ֵ

double variance (double a[],int n) {
	double sum=0;
	double average=ave(a,n);//�������ã��������С���������������int��double ����
	for (int i=0; i<n; i++)
		sum=(a[i]-average)*(a[i]-average);
	return sum/n;
}
//������󷽲�ģ����Ҫ����n�������ˣ�����
