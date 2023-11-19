#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double h, s;
	cout << "请输入华氏温度：";
	cin >> h;
	cout <<"等于摄氏度："<<setiosflags(ios::fixed)<<setprecision(2) << (h - 32) / 1.80;
	return 0;
}