#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double h, s;
	cout << "�����뻪���¶ȣ�";
	cin >> h;
	cout <<"�������϶ȣ�"<<setiosflags(ios::fixed)<<setprecision(2) << (h - 32) / 1.80;
	return 0;
}