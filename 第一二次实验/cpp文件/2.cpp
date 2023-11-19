#include<iostream>
#define PI 3.14
using namespace std;
int main(){
	double r, h;
	cout << "ÇëÊäÈëÔ²×¶µ×µÄ°ë¾¶¡¢×¶¸ß£º";
	cin >> r >> h;
	cout << "Ô²×¶Ìå»ýÎª£º" << PI * r * r * h / 3;
	return 0;
}