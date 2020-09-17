//�������
//#include <stdio.h>
//
//void PrintN ( int N );
//
//int main () {
//	int N;
//
//	scanf("%d", &N);
//	PrintN( N );
//
//	return 0;
//}
//void PrintN ( int N ) {
//	int i=1;
//	for(i; i<N; i++) {
//		printf("%d\n",i);
//	}
//	printf("%d",i);
//}
//����ʽ��ֵ
//#include <stdio.h>
//
//#define MAXN 10
//
//double f( int n, double a[], double x );
//
//int main() {
//	int n, i;
//	double a[MAXN], x;
//	scanf("%d %lf", &n, &x);
//	for ( i=0; i<=n; i++ )
//		scanf("%lf", &a[i]);
//	printf("%.1f\n", f(n, a, x));
//	return 0;
//}
//double f( int n, double a[], double x ) {
//	double answer=0.0;
//	int i,j;
//	double b[n+1];
//	b[0]=1;
//	for(j=1; j<=n; j++) {
//		b[j]=b[j-1]*x;
//	}
//	for(i=0; i<=n; i++) {
//		answer=a[i]*b[i]+answer;
//	}
//	return answer;
//}
//�����
//#include <stdio.h>
//
//#define MAXN 10
//
//int Sum ( int List[], int N );
//
//int main () {
//	int List[MAXN], N, i;
//	scanf("%d", &N);
//	for ( i=0; i<N; i++ )
//		scanf("%d", &List[i]);
//	printf("%d\n", Sum(List, N));
//	return 0;
//}
//int Sum ( int List[], int N ) {
//	int i;
//	int sum=0;
//	for(i=0; i<N; i++) {
//		sum+=List[i];
//	}
//	return sum;
//}
//���Զ�����Ԫ�ص�ƽ��
//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;
//
//ElementType Average( ElementType S[], int N );
//
//int main () {
//	ElementType S[MAXN];
//	int N, i;
//	scanf("%d", &N);
//	for ( i=0; i<N; i++ )
//		scanf("%f", &S[i]);
//	printf("%.2f\n", Average(S, N));
//	return 0;
//}
//ElementType Average( ElementType S[], int N ){
//	float sum;
//	int i;
//	for(i=0;i<N;i++){
//		sum+=S[i];
//	}
//	return sum/N;
//}
// ���Զ�����Ԫ�ص����ֵ
//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;
//
//ElementType Max( ElementType S[], int N );
//
//int main () {
//	ElementType S[MAXN];
//	int N, i;
//
//	scanf("%d", &N);
//	for ( i=0; i<N; i++ )
//		scanf("%f", &S[i]);
//	printf("%.2f\n", Max(S, N));
//
//	return 0;
//}
//ElementType Max( ElementType S[], int N ) {
//	float max_f=S[0];
//	int i;
//	for(i=0; i<N; i++) {
//		if(max_f<=S[i]) {
//			max_f=S[i];
//		}
//	}
//	return max_f;
//}
//��������Ľ׳˺�
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node *PtrToNode;
//struct Node {
//	int Data; /* �洢������� */
//	PtrToNode Next; /* ָ����һ������ָ�� */
//};
//typedef PtrToNode List; /* ���嵥�������� */
//
//int FactorialSum( List L );
//
//int main() {
//	int N, i;
//	List L, p;
//
//	scanf("%d", &N);
//	L = NULL;
//	for ( i=0; i<N; i++ ) {
//		p = (List)malloc(sizeof(struct Node));
//		scanf("%d", &p->Data);
//		p->Next = L;
//		L = p;
//	}
//	printf("%d\n", FactorialSum(L));
//
//	return 0;
//}
//int FactorialSum( List L ) {
//	int i,num;
//	int sum=0;
//	while(L!=NULL) {
//		num=1;
//		for(i=1; i<=L->Data; i++) {
//			num*=i;
//		}
//		sum+=num;
//		L=L->Next;
//	}
//	return sum;
//}
//���Զ�����Ԫ�����е���λ��  https://blog.csdn.net/qq_41521512/article/details/82691758
//ϣ������   https://blog.csdn.net/MoreWindows/article/details/6668714
#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main () {
	ElementType A[MAXN];
	int N, i;

	scanf("%d", &N);
	for ( i=0; i<N; i++ )
		scanf("%f", &A[i]);
	printf("%.2f\n", Median(A, N));

	return 0;
}

ElementType Median( ElementType A[], int N ) {
	ElementType temp;
	int gap,i,j;
	for(gap= N/2; gap> 0; gap= gap/ 2) { //gap��ÿ���������ļ����ÿ�μ����С������������С�취Ҳ���ԣ�
		for(i= gap; i< N; i++) { //�൱����ͬһ���ڲ���ֱ�Ӳ�������
			for(j= i- gap; j>= 0 && A[j]> A[j+ gap]; j= j- gap) { //���ͬһ����ǰһ��Ԫ�ش����� gap��λ�õ�Ԫ�أ������߽���λ��
				temp= A[j];
				A[j]= A[j+ gap];
				A[j+ gap]= temp;
			}
		}
	}
	return A[N/ 2];//�����м�Ԫ��
}


























