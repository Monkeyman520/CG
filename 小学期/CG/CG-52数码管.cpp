#include <iostream>

using namespace std;

int main() {
	//0 1 2 3 4 5 6 7 8 9  ����0-9����ת��ӳ���Ĺ�ϵ���������ǶԳƾ���
	int map_array[10][10]= {
		{1,1,0,0,0,0,0,1,1,0},  //0
		{1,1,0,1,1,0,0,1,1,1},  //1
		{0,0,1,0,0,0,0,0,1,0},  //2
		{0,1,0,1,0,0,0,1,1,1},  //3
		{0,1,0,0,1,0,0,0,1,1},  //4
		{0,0,0,0,0,1,1,0,1,1},  //5
		{0,0,0,0,0,1,1,0,1,0},  //6
		{1,1,0,1,0,0,0,1,1,1},  //7
		{1,1,1,1,1,1,1,1,1,1},  //8
		{0,1,0,1,1,1,0,1,1,1}   //9
	};
	int number[10];

	while(1) {
		bool flag = true;
		cin >> number[0];
		if(-1 == number[0] ) {
			break;
		}
		for(int i=1; i<10; i++) {
			cin >> number[i];                              //��ȡ���ִ���number[]
			if(1 != map_array[ number[i-1] ][ number[i] ]) { //�ж��Ƿ�����ת��
				flag = false;
			}
		}
		if(false == flag) {
			cout << "NO" <<endl;
		} else {
			cout << "YES" <<endl;
		}
	}
	return 0;
}
