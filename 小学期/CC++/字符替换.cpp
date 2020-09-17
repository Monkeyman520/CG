#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="cchellocc";//建立字符串变量 
	for(int i=0;i<str.length();i++){//获取字符串长度并循环 
		if(str[i]=='c'){//判断字符 
			str[i]='*';//进行替换 
		}
	}
	cout << str << endl;
	return 0;
} 

//思路：使用循环遍历字符串，判断是否是'c'，如果是，将其替换为'*' 
