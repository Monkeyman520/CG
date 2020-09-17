#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int total=0, score=0;    //total为总分,score为每一次跳的得分
	bool isVirgin = true;     //用来判断是不是第一次
	while(cin >> n) { //开始一局游戏
		if(n==0) { //0表示此次跳跃没有跳到方块上（此时游戏结束）
			break;
		} else { //如果跳到了方块上
			if(n == 1) { //跳到了方块上,但没有跳到方块的中心则获得1分
				score = 1;
				total += score;
			}
			if(n == 2) {  //跳到了方块中心
				if(isVirgin) { //本局游戏第一次跳跃就跳到了方块中心,则此次得分为2分
					score = 2;
					isVirgin = false;   //以后就不是第一次了
				} else if(score == 1) { //若上一次的得分为1,则此次得分为2分
					score = 2;
				} else { //连续跳到方块中心时,此次得分在上一次得分的基础上加2分
					score += 2;
				}
				total += score;
			}
		}
	}
	cout << total << endl;
	return 0;
}
