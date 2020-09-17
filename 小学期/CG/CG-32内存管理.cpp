// 31.�ڴ����
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct memory { //�ڴ��
	int mark;    //��ʶ��
	int length;  //��ռ����
	bool usable; //true(1)���ã�false(0)������
	memory(int mark_t, int len, bool usea) {
		this->mark = mark_t;
		this->length = len;
		this->usable = usea;
	}
};

bool cmp(const memory &a, const memory &b) {
	if (a.usable == b.usable) {
		return a.mark < b.mark;
	}
	return a.usable < b.usable; //���ѱ�ռ�ã�������false��0��<��δ��ռ�ã�����true��1��
}

int main() {
	vector<memory> mms;
	vector<memory>::iterator it;

	string opet;           //�������
	int t, m, size_usable; //������������Ч�ڴ��ֽڴ�С��ʣ������ڴ��ֽڴ�С
	int number;            //������ӵ���
	int mark = 1;          //��ʶ��
	cin >> t >> m;
	size_usable = m;

	for (int i = 0; i < t; i++) {
		cin >> opet;
		if (opet != "defragment") { //��Ҫ������
			cin >> number;
			if (opet == "alloc") { //����number���ֽ��ڴ�
				if (size_usable >= number) { //ʣ��ռ��㹻
					bool succ = false; //�����Ƿ�ִ�гɹ����Ƿ���֮ǰ���ͷŵĿ�����Ҫ��
					//����жϷ������ܻ��ǲ���ȫ��ȷ��������ϵͳ���Ѿ��ܵ����֡���
					for (it = mms.begin(); it != mms.end(); it++) {
						if (it->usable == true && it->length >= number) { //it������it�ĳ���>=number
							cout << mark << endl;
							int temp = it->length;
							it->mark = mark;                                         //���ϱ�ʶ��
							it->usable = false;                                      //��Ϊ������
							it->length = number;                                     //�������
							mms.insert(it + 1, memory(-1, temp - it->length, true)); //�ں��������п�
							size_usable -= number;                                   //�����ڴ����
							mark += 1;                                               //��ʶ��
							succ = true;
							break;
						}
					}
					if (succ == false) {
						int sum = 0; //���ܷ�����ڴ��ֽ������ѱ�ռ�û��߲�������
						for (it = mms.begin(); it != mms.end(); it++) {
							sum += it->length;
						}
						if ((m - sum) >= number) { //ĩβʣ������ڴ��ֽ���>=number
							cout << mark << endl;
							mms.push_back(memory(mark, number, false)); //��ʶ�����ȣ�������
							size_usable -= number;                      //�����ڴ����
							mark += 1;                                  //��ʶ��+1
						} else {
							cout << "NULL" << endl;
						}
					}
				} else {
					cout << "NULL" << endl;
				}
			} else { //ɾ����ʶ��number���ڵĿ�
				bool eff = false; //�����Ƿ���Ч
				for (it = mms.begin(); it != mms.end(); it++) {
					if (it->mark == number) { //it�ı�ʶ�����ǲ���ָ���ı�ʶ��
						size_usable += it->length; //�����ڴ�����
						it->usable = true;         //it��Ϊ����
						it->mark = -1;             //ɾȥit�ı�ʶ��
						eff = true;                //������Ч
						break;
					}
				}
				if (eff == false) { //��������Ч
					cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
				}
			}
		} else { //��defragment������Ҫ����
			sort(mms.begin(), mms.end(), cmp);
			for (unsigned j = 0; j < mms.size(); j++) {
				if (mms[j].usable == true) {
					it = mms.begin() + j;
					mms.erase(it);
				}
			}
		}
	}
	return 0;
}

