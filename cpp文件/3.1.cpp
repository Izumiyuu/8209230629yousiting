#include<iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0)return a;
	else
		return (b, a % b);
}
int main() {
	int a, b;
	cin >> a >> b;
	int t= gcd(a,b);
	cout << "���Լ��Ϊ��" << t;
	cout << "��С������Ϊ��" << a * b / t;
	return 0;
}