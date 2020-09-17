//#include<bits/stdc++.h>
//using namespace std;
//struct PhoneNum {
//	int prefixZeroNum;
//	int len;
//	string number;
//	string noPrefixZero;
//	bool operator < (const PhoneNum &a) const {
//		if(len != a.len) return len < a.len;
//		else if(noPrefixZero != a.noPrefixZero) return noPrefixZero < a.noPrefixZero;
//		else return prefixZeroNum < a.prefixZeroNum;
//	}
//};
//map<string, set<PhoneNum> > m;
//set<PhoneNum> s;
//string name, phoneNum;
//int num;
//PhoneNum temp;
//int main() {
//	int n;
//	cin >> n;
//	while(n--) {
//		cin >> name >> num;
//		for(int i = 0; i < num; i++) {
//			cin >> phoneNum;
//			int j = 0;
//			while(j < phoneNum.size()) {
//				if(phoneNum[j] == '0') {
//					j++;
//				} else {
//					break;
//				}
//			}
//			temp.prefixZeroNum = j;
//			temp.number = phoneNum;
//			temp.noPrefixZero = phoneNum.substr(j,phoneNum.size() - j);
//			temp.len = phoneNum.size() - j;
//
//			m[name].insert(temp);
//
//		}
//	}
//	map<string, set<PhoneNum> >::iterator it;
//	set<PhoneNum>::iterator setIt1,setIt2;
//	for(it = m.begin(); it != m.end(); it++) {
//		s = it -> second;
//		for(setIt1 = s.begin(); setIt1 != s.end();) {
//			string a = setIt1 -> number;
//			int m = a.size();
//			bool flag = false;
//			for(setIt2 = s.begin(); setIt2 != s.end(); setIt2++) {
//				if(setIt2 == setIt1) continue;
//				string b = setIt2 -> number;
//				int n = b.size();
//
//				if(m >= n) continue;
//				if(b.substr(n - m, m) == a) {
//					flag = true;
//					break;
//				}
//			}
//			if(flag) {
//				setIt1 = s.erase(setIt1);
//
//			} else {
//				setIt1++;
//			}
//		}
//		it -> second = s;
//	}
//	cout << m.size() << endl;
//
//	for(it = m.begin(); it != m.end(); it++) {
//		s = it -> second;
//		cout << it -> first << " " << s.size()<< " ";
//		set<PhoneNum>::iterator setIt;
//		for(setIt = s.begin(); setIt != s.end(); setIt++) {
//			cout<< setIt -> number<<" ";
//
//		}
//		cout << endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <iterator>
//#include <algorithm>
//#include <string>
//#include <map>
//#include <set>
//#include <vector>
//using namespace std;
//int main(int , char *[]) {
//	map<string, set<string> > buffer;
//	//首次读取
//	int nItems = 0;
//	cin>>nItems;
//	for (int i = 0; i < nItems; ++i) {
//		int nNumbers = 0;
//		string name ;
//		cin >> name >> nNumbers;
//		for (int j = 0; j < nNumbers; ++j) {
//			string num;
//			cin >> num;
//			buffer[name].insert(num);
//		}
//	}
//	//去除不含城市的短号
//	cout << buffer.size() << endl;
//	for (auto p = buffer.begin(); p != buffer.end(); ++p) {
//		const string & name = p->first;
//		const set<string> & nums = p->second;
//		//按照字符串长度由大到小排序
//		vector<string> tmp;
//		vector<string> final;
//		copy(nums.begin(),nums.end(),back_inserter(tmp));
//		sort(tmp.begin(),tmp.end(),[](const string &a,const string &b)->bool {
//			return a.size() > b.size();
//		});
//		//开始组合
//		const size_t sz_items = tmp.size();
//		string mask ;
//		for(size_t j = 0; j < sz_items; ++j) {
//			const string & cur_test = tmp[j] + "|";
//			if (mask.find(cur_test)==mask.npos) {
//				final.push_back(tmp[j]);
//				mask.append(cur_test);
//			}
//		}
//		//按照顺序排序
//		sort(final.begin(),final.end(),
//		[](const string &a,const string &b)->bool {
//			if (a.size() < b.size())
//				return true;
//			if (a.size() > b.size())
//				return false;
//			return a<b;
//		});
//		//输出
//		const size_t sz_final = final.size();
//		cout << name << " " << sz_final;
//		for(size_t j = 0; j < sz_final; ++j)
//			cout << " " << final[j];
//		cout<<endl;
//	}
//
//
//	return 0;
//}


//#include<cstdio>
//#include<cstring>
//using namespace std;
//char ming[10],b[11],a[21][201][11],ren[21][11];
//int renshu=0,longren[21],jishu[21],ch[21][2000][10],belong[21][2000];
//int panduanren() { //判断这是第几个人
//	int len=strlen(ming);
//	if(renshu==0) {
//		renshu=1;
//		longren[1]=len;
//		for(int i=0; i<len; i++)
//			ren[1][i]=ming[i];
//		return 1;//返回记录的位置
//	}
//	bool flag;
//	for(int i=1; i<=renshu; i++) {
//		if(longren[i]==len) { //longren是指名字长短
//			flag=1;
//			for(int j=0; j<len; j++) {
//				if(ming[j]!=ren[i][j]) {
//					flag=0;
//					break;
//				}
//			}
//			if(flag) {
//				return i;
//			}
//		}
//	}
////如果能够到这里，说明这个人没记录过
//	renshu++;
//	longren[renshu]=len;
//	for(int i=0; i<len; i++) {
//		ren[renshu][i]=ming[i];
//	}
//	return renshu;
//}
//
//void build(int x) {//x是指第几个人
//	int len=strlen(b);
//	int u=1,huanwei=0;
//	bool kaiwei=0;//判断有没有新的分支
//	for(int i=len-1; i>=0; i--) { //后缀
//		int c=b[i]-'0';
//		if(!ch[x][u][c]) {
//			kaiwei=1;
//			++ch[x][0][0];//计数，相当于tot
//			ch[x][u][c]=ch[x][0][0];
//		}
//		u=ch[x][u][c];
//		if(belong[x][u]!=0)	{//如果之前有点在这
//			huanwei=belong[x][u];//替代原先的点
//			belong[x][u]=0;//重置为0
//		}
//	}
//	if(huanwei!=0) { //遇到了belong
//		belong[x][u]=huanwei;
//		for(int o=0; o<len; o++) {
//			a[x][belong[x][u]][o]=b[o];
//		}
//	} else { //没遇到belong
//		if(kaiwei) { //开了位置
//			belong[x][u]=++jishu[x];
//			for(int o=0; o<len; o++)
//				a[x][belong[x][u]][o]=b[o];
//		}
//		//没有遇到belong并且没开新的位置的话，这个点就不要了
//	}
//}
//
//int main() {
//	for(int i=0; i<=20; i++)	ch[i][0][0]=1;
//	int n;
//	scanf("%d",&n);
//	for(int i=1; i<=n; i++) {
//		scanf("%s",ming);
//		int weizhi=panduanren();//找这个人的记录的位置
//		int m;
//		scanf("%d",&m);
//		for(int j=1; j<=m; j++) {
//			scanf("%s",b);
//			build(weizhi);
//		}
//	}
//	printf("%d\n",renshu);
//	for(int i=renshu-1; i>=0; i++) {
//		printf("%s %d ",ren[i],jishu[i]);
//		for(int j=1; j<=jishu[i]; j++)
//			printf("%s ",a[i][j]);
//		printf("\n");
//	}
//}

#include <iostream>
#include <algorithm>
#include <sstream>
#include <set>
using namespace std;
struct man {
	string a;
	int b;
	set<string> c;
	set<string> d;
};
bool px(man a,man b) {
	return a.a<b.a;
}
bool kk(string a,string b) {
	return a.size()<b.size();
}
int main() {
	int n,n2=0,x=-1,w;
	string t,q;
	cin>>n;
	man a[n];
	for(int i=0; i<n; i++) {
		x=-1;
		cin>>q;
		cin>>w;
		if(i!=0) {
			for(int z=0; z<=i; z++) {
				if(q==a[z].a) {
					x=z;
				}
			}
		}
		a[i].b=-1;
		if(x==-1) {
			a[i].a=q;
			a[i].b=w;
			n2=n2+1;
		}
		for(int j=0; j<w; j++) {
			cin>>t;
			if(x!=-1)a[x].c.insert(t),a[x].d.insert(t);
			if(x==-1)a[i].c.insert(t),a[i].d.insert(t);
		}
		if(x==-1) {
			a[i].b=a[i].c.size();
		}
		if(x!=-1) {
			a[x].b=a[x].c.size();
		}
		x=-1;
		w=0;
		q="";
	}
	cout<<n2<<endl;
	sort(a,a+n,px);
	for(int i=0; i<n; i++) {
		if(a[i].b==-1)continue;
		for(set<string>::iterator j=a[i].c.begin(); j!=a[i].c.end(); j++) {
			for(set<string>::iterator r=a[i].c.begin(); r!=a[i].c.end(); r++) {
				stringstream x1,x2,x3;
				string z1,z2,z3;
				int y1,y2,y3=0;
				z1=*j;
				z2=*r;
				x1<<*j;
				x2<<*r;
				x1>>y1;
				x2>>y2;
				x3<<y1;
				x3>>z3;
				if(y2>y1&&z3==*j&&z2[0]!='0') {
					y3=y2-y1;
					if(y3>=10&&y3<100) {
						if(y3%10==0&&z2.size()==z3.size()+1)a[i].d.erase(*j);
					}
					if(y3>=100&&y3<1000) {
						if(y3%100==0&&z2.size()==z3.size()+1)a[i].d.erase(*j);
						else if(y3%10==0&&z2.size()==z3.size()+2)a[i].d.erase(*j);
					}
					if(y3>=1000&&y3<10000) {
						if(y3%1000==0&&z2.size()==z3.size()+1)a[i].d.erase(*j);
						else if(y3%100==0&&z2.size()==z3.size()+2)a[i].d.erase(*j);
						else if(y3%10==0&&z2.size()==z3.size()+3)a[i].d.erase(*j);
					}
					if(y3>=10000&&y3<100000) {
						if(y3%10000==0&&z2.size()==z3.size()+1)a[i].d.erase(*j);
						else if(y3%1000==0&&z2.size()==z3.size()+2)a[i].d.erase(*j);
						else if(y3%100==0&&z2.size()==z3.size()+3)a[i].d.erase(*j);
						else if(y3%10==0&&z2.size()==z3.size()+4)a[i].d.erase(*j);
					}
				}
				if(z3==*j&&y2>=y1&&z2[0]=='0') {
					y3=y2-y1;
					if(y3==0)a[i].d.erase(*j);
					if(y3>=10&&y3<100) {
						if(y3%10==0&&z2.size()==z3.size()+1)a[i].d.erase(*j);
						if(y3%10==0&&z2.size()==z3.size()+2)a[i].d.erase(*j);
					}
					if(y3>=100&&y3<1000) {
						if(y3%100==0&&z2.size()==z3.size()+1)a[i].d.erase(*j);
						else if(y3%10==0&&z2.size()==z3.size()+2)a[i].d.erase(*j);
					}
					if(y3>=1000&&y3<10000) {
						if(y3%1000==0&&z2.size()==z3.size()+1)a[i].d.erase(*j);
						else if(y3%100==0&&z2.size()==z3.size()+2)a[i].d.erase(*j);
						else if(y3%10==0&&z2.size()==z3.size()+3)a[i].d.erase(*j);
					}
					if(y3>=10000&&y3<100000) {
						if(y3%10000==0&&z2.size()==z3.size()+1)a[i].d.erase(*j);
						else if(y3%1000==0&&z2.size()==z3.size()+2)a[i].d.erase(*j);
						else if(y3%100==0&&z2.size()==z3.size()+3)a[i].d.erase(*j);
						else if(y3%10==0&&z2.size()==z3.size()+4)a[i].d.erase(*j);
					}
				}
			}
		}
		a[i].b=a[i].d.size();
	}
	for(int i=0; i<n; i++) {
		if(a[i].b==-1)continue;
		cout<<a[i].a<<" "<<a[i].b<<" ";
		string xx[a[i].b];
		int xxi=0;
		for(set<string>::iterator j=a[i].d.begin(); j!=a[i].d.end(); j++) {
			xx[xxi++]=*j;
		}
		sort(xx,xx+a[i].b,kk);
		for(xxi=0; xxi<a[i].b; xxi++) {
			cout<<xx[xxi]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
