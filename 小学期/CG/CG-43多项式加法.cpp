#include <iostream>
#include <map>

using namespace std;

int main() {
	int key =0 ;                            //键，对应多项式次数
	int value =0 ;                          //值，对应多项式系数
	map<int,int> polynomial;                //map容器，存储多项式
	map<int,int>::iterator iter;            //迭代器
	map<int,int>::reverse_iterator reiter;  //反向迭代器reverse_iterator，反向遍历map容器中的数据，它需要rbegin()（指向末尾）和
	                                        // rend()（指向开头）方法指出反向遍历的起始位置和终止位置。

	while(1) {                                   //获取第一个多项式信息
		cin >>key;
		cin >> value;
		if(0 == key && 0 == value) break;        //如果key==0，value==0，则终止
		iter = polynomial.find(key);             //在map容器中查找是否已存在
		if(iter != polynomial.end()) {           //如果已经存在，则修改系数
			iter->second = iter->second + value;
		} else {
			polynomial[key] = value;             //否则添加一个数据
		}
	}
	while(1) {     //类似第一个多项式，读入第二个多项式，在读入第二个多项式时完成多项式相加
		cin >>key;
		cin >> value;
		if(0 == key && 0 == value) break;
		iter = polynomial.find(key);
		if(iter != polynomial.end()) {
			iter->second = iter->second + value;
		} else {
			polynomial[key] = value;
		}
	}

	for(reiter = polynomial.rbegin(); reiter != polynomial.rend(); reiter++) { //反向迭代输出数据
		if(0 != reiter->second)    {                                           //注意：只有value值!=0的时候才输出
			cout << reiter->first << ' ' <<reiter->second <<endl;
		}
	}
	return 0;
}
