#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, a, b;//�ַ������ȡ�a��b
	string str, sa = "", sb = "";//�ַ�����t(1)t(2)����t(i-1)��t(i)
	int sumMin = 0;//��������Ǯ����
	cin >> n >> a >> b;
	cin >> str;

	sumMin += a;//��һ����ĸһ��Ҫ��a��Ǯ��
	for (int k = 1; k < n; k++) {
		bool flag = false;//t(i)�Ƿ�����Ϊt(1)t(2)����t(i-1)���Ӵ�
		sa = str.substr(0, k);//��ȡsa��t(1)t(2)����t(i-1)
		for (int j = 1; j < n; j++) {
			sb = str.substr(k, n - j);//sb��t(i)����Ŀ��������ʼ
			if (sa.find(sb) != string::npos) { //sb��sa���Ӵ�
				int len = sb.length();
				if (len >= b / a) { //��֤��sb��Ϊһ���ַ�������Ǯ�ұȲ�ɵ�������Ǯ����
					sumMin += b;
					flag = true;
					k += (n - j - 1);//t(1)t(2)����t(i-1)�ĳ��ȼ���t(i)�ĳ��ȣ�k++֮�󻹻�+1��������������ǰ-1
					break;
				}
			}
		}
		if (flag == false) {
			sumMin += a;
		}
	}
	cout << sumMin << endl;
	return 0;
}

