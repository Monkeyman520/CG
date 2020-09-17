#include <iostream>

using namespace std;

bool CheckID(string ID_num) { /*身份证校验*/
	int weight[]= {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char validate[]= {'1','0','X','9','8','7','6','5','4','3','2'};
	int sum = 0;
	int mode = 0;
	int i = 0;
	int length = ID_num.length();
	if(length == 18) {
		for(i=0; i<length-1; i++)
			sum = sum + (ID_num[i] - '0') * weight[i];
		mode = sum % 11;
		if (validate[mode] == ID_num[17])
			return true;
	}
	return false;
}

int main() {
	while(true) {
		string str;
		cin >> str;
		if(str=="-1") {
			break;
		}
		cout << CheckID(str) << endl;
	}
	return 0;
}

