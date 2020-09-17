#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
	TreeNode *left;
	TreeNode *right;
	char elem;
};

string a,b;


void func(string pre, string in, int prestart, int instart, int inend) {
	if(instart >= inend) {
		return;
	}

	int index;
	for(index=instart; index<inend; ++index) {
		if(in[index] == pre[prestart]) break;
	}

	func(pre, in, prestart+1, instart, index);
	func(pre, in, prestart+ 1 + index - instart,  index+1, inend);
	cout<<in[index];
}

int main() {
	int n;
	while(cin>>n && n) {
		cin>>a>>b;
		func(a, b, 0, 0, n);
		cout<<endl;
	}
	return 0;
}


