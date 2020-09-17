#include <bits/stdc++.h>
using namespace std;
int n;
string formula;
unordered_map<string, int> ans;
//����formula��[first,last]�����Ӧ������,ע�⺯������֮�󴫵ݸ�first��ʵ�ν��ƶ�����һ���������ַ���λ��
int computeDigit(int& first, int last) {
	int i = 0;
	for (; first <= last and isdigit(formula[first]); ++first)
		i = i * 10 + formula[first] - '0';
	return i == 0 ? 1 : i;
}
void f(int first, int last, int e) {  //����formula��[first,last]�����ԭ�Ӽ����Ӧϵ��������ϵ��Ϊe
	if (first == last or (last - first == 1 and islower(formula[last]))) {  //��ѧʽ�ǵ���ԭ��
		ans[formula.substr(first, last - first + 1)] += e;  //��ԭ�Ӹ�������e
		return;
	}
	e *= computeDigit(first, last);  //�û�ѧʽ������ԭ�ӻ���ϵ��Ҫ���ϸû�ѧʽ��ʼϵ��
	for (int i = first, j = i + 1; i <= last; i = j, ++j) {  //������ѧʽ
		if (isupper(formula[i])) {  //��ԭ��
			if (j <= last and islower(formula[j]))
				++j;
			int k = j;
			f(i, k - 1, e * computeDigit(j, last));  //�ݹ鴦��
		} else if (formula[i] == '(') {  //����(
			for (int num = 1; num != 0; ++j) {  //�ҵ���Ӧ��)λ�ô洢��j��
				if (formula[j] == '(')
					++num;
				else if (formula[j] == ')')
					--num;
			}
			int k = j;
			f(i + 1, k - 1, e * computeDigit(j, last));  //�ݹ鴦��
		}
	}
}
void expression(int first, int last, int e) {  //��+��������л�ѧʽ
	for (int i = first, j = first; i <= last; i = j + 1) {
		j = formula.find('+', i);
		if (j == string::npos or j > last)
			j = last + 1;
		f(i, j - 1, e);
	}
}
int main() {
	cin >> n;
	while (n--) {
		cin >> formula;
		ans.clear();
		int k = formula.find('=');  //��=������ʽ�ָ��������
		expression(0, k - 1, 1);
		expression(k + 1, formula.size() - 1, -1);
		//������û��ԭ�Ӷ�Ӧ������Ϊ0
		auto i = find_if(ans.begin(), ans.end(), [](const pair<string, int>& p) {
			return p.second != 0;
		});
		cout << ((i == ans.end()) ? "Y" : "N") << "\n";
	}
	return 0;
}

/* 

11
4Au+8NaCN+2H2O+O2=4Na(Au(CN)2)+4NaOH
4Zn+10HNO3=4Zn(NO3)2+NH4NO3+3H2O
H2+O2=H2O
2H2+O2=2H2O
H2+Cl2=2NaCl
H2+Cl2=2HCl
CH4+2O2=CO2+2H2O
CaCl2+2AgNO3=Ca(NO3)2+2AgCl
3Ba(OH)2+2H3PO4=6H2O+Ba3(PO4)2
3Ba(OH)2+2H3PO4=Ba3(PO4)2+6H2O
Cu+As=Cs+Au

*/
