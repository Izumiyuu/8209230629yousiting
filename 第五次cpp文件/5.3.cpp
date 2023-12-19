#include<iostream>
using namespace std;
class LL {
private:
	int length, width, height;
public:
	LL();
	int TT();
	void OP(LL);
};
LL::LL() {
	int a,b, c;
	cin >> a>> b >> c;
	height = a;
	width = b;
	length = c;
}
int LL::TT() {
	return height * width * length;
}
void OP(LL &c) {
	cout << c.TT()<<endl;
}
int main() {
	LL a1, b1, c1;
	OP(a1);
	OP(b1);
	OP(c1);
	return 0;
}