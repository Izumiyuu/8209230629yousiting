#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int x = a <b ? a : b;
	for (x; x >= 1; x--) {
		if (a % x == 0 && b % x == 0)break;
	}
	cout << "���Լ��Ϊ" << x << endl;
	cout << "��С������Ϊ" << a * b / x;
	return 0;
}