#include <iostream>
using namespace std;
int main() {
	int n, a, b;
	cin >> n >> a >> b;
	long long int u[a][2], v[b][2];
	long long int sum = 0;
	for (int i = 0; i < a; i++) {
		cin >> u[i][0] >> u[i][1];
	}
	for (int i = 0; i < b; i++) {
		cin >> v[i][0] >> v[i][1];
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (u[i][0] == v[j][0]) {
				sum = sum + u[i][1]*v[j][1];
			}
		}
	}
	cout << sum << endl;
	return 0;
}

