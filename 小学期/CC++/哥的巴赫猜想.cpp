#include<iostream>
using namespace std;
int Glodbach(int y);//哥德巴赫猜想
int su(int x);//判断素数
int main() {
	int number;
	cout << "请输入一个不小于6的偶数: " ;
	cin>>number;
	Glodbach(number);
	return 0;
}
int su(int x) {
	int m;//建立判断变量
	m=0;//1--不是素数  0--是素数
	if(x==2||x==3||x==5) {
		return 1;
	} else {
		for(int i=2; i<x; i++) {
			if(x%i==0) {
				m++;//如果有除了1和本身的因子  m++ 结束循环  不是素数  
				break;
			}
		}
	}
	if(m==0) {
		return 1;
	} else {
		return 0;
	}
}
int Glodbach(int y) {
	int m;
	for(int i=2; i<=(y/2); i++) {
		m=y-i; 
		if(su(i)==1 && su(m) == 1) {// 两个数同时为素数 
			cout<<y<<'='<<i<<'+'<<m<<endl;
		}
	}
}

//思路：一个数先拆分为两个数之和，在判断这两个数是不是素数 如果是 验证完成并输出所有情况 
