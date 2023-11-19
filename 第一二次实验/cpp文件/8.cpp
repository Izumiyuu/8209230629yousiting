#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b < c || a + c < b || b + c < a)cout << "不能构成三角形";
	else {
		if (a == b || b == c || c == a)cout << "能构成等边三角形";
		else cout << "不能构成等边三角形";
	}
	return 0;
}