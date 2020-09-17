#include<iostream>
using namespace std;
int main() {
	float price=0.0;//创建输入价格的变量并初始化
	int judge=0;//建立判断身份的变量
	cout << "请输入您的身份ID" << endl;
	cout << "1---是会员" << endl;
	cout << "0---非会员" << endl;//建立输入的标准
	cin >> judge;
	if(judge==0) {//先输入身份并判断是否是会员
		cout << "请输入购物总金额为： ";
		cin >> price;
		cout << endl;
		if(price<0.0) {
			cout << "输入价格有误，请检查输入" << endl;
		} else if(price>=0.0&&price<100.0) {
			cout << "您的购物总金额为： " << price << endl;
			price=price*1.0;
			cout << "您需要支付的金额为： "  << price << endl;
		} else if(price>=100.0) {
			cout << "您的购物总金额为： " << price << endl;
			price=price*0.9;
			cout << "您需要支付的金额为： "  << price << endl;//正常的进行判断  根据总金额确定折扣
		}
	} else if(judge==1) {//情况大致如上
		cout << "请输入购物总金额为： ";
		cin >> price;
		cout << endl;
		if(price<0.0) {
			cout << "输入价格有误，请检查输入" << endl;
		} else if(price>=0.0&&price<1000.0) {
			cout << "您的购物总金额为： " << price << endl;
			price=price*0.8;
			cout << "您需要支付的金额为： "  << price << endl;
		} else if(price>=1000.0) {
			cout << "您的购物总金额为： " << price << endl;
			price=price*0.7;
			cout << "您需要支付的金额为： "  << price << endl;
		}
	}
	return 0;
}

//思路：先判断顾客的身份，然后根据身份和购物金额进行相应的计算
