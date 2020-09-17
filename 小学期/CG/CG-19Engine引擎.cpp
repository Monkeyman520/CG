#include<iostream>
#include<string>
using namespace std;
class article { //新建了一个类
	public:
		article() {
			s="";
			visit=0;
		}
		string s;
		int visit;
};
int main() {
	article art[1000];//对象数组，用来存储原来的输入
	article art2[1000];//“小写化”后存储的对象数组
	int n=0;
	while(cin>>n) {
		if(n==0)
			break;
		cin.get();
		for(int i=0; i<n; i++) {
			art[i].s=" ";//首加上空格
			string tmp;
			getline(cin,tmp);
			art[i].s=art[i].s+tmp;
			art[i].s+=" ";//尾加上空格
			cin>>art[i].visit;
			cin.get();
			art2[i]=art[i];//这里不是浅拷贝
			for(int j=0; j<art2[i].s.length(); j++) { //小写化
				if(art2[i].s[j]>='A'&&art2[i].s[j]<='Z')
					art2[i].s[j]+=32;
			}
		}
		int m=0;
		cin>>m;
		cin.get();
		article headings[1000];//用来存储可能符合要求的标题
		for(int i=0; i<m; i++) {
			string keys=" ";//关键词首加上空格
			string tmp;
			getline(cin,tmp);
			keys+=tmp;
			keys+=" ";//关键词尾加上空格
			for(int i=0; i<keys.length(); i++) { //小写化
				if(keys[i]>='A'&&keys[i]<='Z')
					keys[i]=keys[i]+32;
			}
			int k=0;
			for(int i=0; i<n; i++) {
				if(art2[i].s.find(keys)!=string::npos) { //进行匹配
					headings[k].s=art[i].s;//匹配成功就进行赋值
					headings[k].visit=art[i].visit;
					k++;
				}
			}
			for(int i=k-1; i>0; i--) { //这个排序按照倒序是因为保证不打乱相同引用次数的情况下的输入顺序
				for(int j=i-1,tmp=0; j>=0; j--) {
					string tmp2;
					if(headings[i].visit>headings[j].visit) {
						tmp=headings[i].visit;
						headings[i].visit=headings[j].visit;
						headings[j].visit=tmp;
						tmp2=headings[i].s;
						headings[i].s=headings[j].s;
						headings[j].s=tmp2;
					}
				}
			}
			for(int i=0; i<k; i++) { //输出的时候去掉我们为了匹配加上的空格就好了
				headings[i].s.erase(0,1);
				headings[i].s.erase(headings[i].s.length()-1,1);
				cout<<headings[i].s<<endl;
			}
			cout<<"***"<<endl;
		}
		cout<<"---"<<endl;
	}
}
