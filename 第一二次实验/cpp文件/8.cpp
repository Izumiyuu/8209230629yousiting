#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b < c || a + c < b || b + c < a)cout << "���ܹ���������";
	else {
		if (a == b || b == c || c == a)cout << "�ܹ��ɵȱ�������";
		else cout << "���ܹ��ɵȱ�������";
	}
	return 0;
}