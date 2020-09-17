//从第一个节点开始，求每一个元素到原点的最大距离并记录路径
//从第二层开始每个元素最多对应上一层的两个元素
#include <bits/stdc++.h>
using namespace std;
struct node {
	int value;//元素的值
	int x,y;//元素的位置
	int d;//到原点的最大距离
	vector <int> way;//最大距离对应的路径
};
int main() {
	int n;
	cin>>n;
	vector <node> N;
	node temp;
	for(int i=0; i<n; i++) {
		for(int j=0; j<i+1; j++) {
			cin>>temp.value;
			temp.x=i+1;
			temp.y=j+1;
			N.push_back(temp);
		}
	}
	int len=N.size();
	int Max=0;
	for(int i=0; i<len; i++) {
		if(i==0) {
			N[i].d=N[i].value;
			N[i].way.push_back(N[i].value);
		} else {
			int num=0;
			for(int j=0; j<i; j++) {
				if(N[j].x==N[i].x-1) {
					if(N[j].y==N[i].y||N[j].y==N[i].y-1) {
						num++;
					}
				}

			}
			if(num==1) { //当元素处于每一行的两个端点时，只有一条路径
				for(int j=0; j<i; j++) {
					if(N[j].x==N[i].x-1) {
						if(N[j].y==N[i].y||N[j].y==N[i].y-1) {
							N[i].d=N[j].d+N[i].value;
							N[i].way=N[j].way;//复制对应上一行的元素的路径并插入自身的值
							N[i].way.push_back(N[i].value);
							break;
						}
					}
				}
			} else { //其余每个元素对应上一行的两个元素
				int d1=0,d2=0,pos1=0,pos2=0;
				for(int j=0; j<i; j++) {
					if(N[j].x==N[i].x-1) {
						if(N[j].y==N[i].y-1) {
							pos1=j;
							d1=N[j].d+N[i].value;
						} else if(N[j].y==N[i].y) {
							pos2=j;
							d2=N[j].d+N[i].value;
							break;
						}
					}
				}
				if(d1>=d2) {
					N[i].d=d1;
					N[i].way=N[pos1].way;
					N[i].way.push_back(N[i].value);
				} else {
					N[i].d=d2;
					N[i].way=N[pos2].way;
					N[i].way.push_back(N[i].value);
				}
			}
		}
		if(Max<N[i].d) {
			Max=N[i].d;
		}
	}
	cout<<Max<<endl;
	for(int i=len-1; i>=0; i--) { //最大路径出现在最后一行元素，从后往前，减少检索量
		if(N[i].d==Max) {
			int t=N[i].way.size();
			for(int j=0; j<t; j++) {
				cout<<N[i].way[j];
				if(j!=t-1) {
					cout<<' ';
				}
			}
			cout<<endl;
			break;//找到并输出后就退出循环
		}
	}
	return 0;
}

