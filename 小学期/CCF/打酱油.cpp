#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int c_50,c_30,c_10;
	c_50=n/50;
	c_30=(n%50)/30;
	c_10=(n-c_50*50-c_30*30)/10;
	int sum=7*c_50+4*c_30+c_10;
	cout << sum;
	return 0;
}
