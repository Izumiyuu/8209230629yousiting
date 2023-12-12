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
	cout << "最大公约数为：" << t;
	cout << "最小公倍数为：" << a * b / t;
	return 0;
}