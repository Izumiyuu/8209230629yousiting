#include<iostream>
using namespace std;
void swp(double &a, double &b) {
	double t = a;
	a = b;
	b = t;
}
int main() {

	double s[15];
	for (int i = 0; i < 10; i++) {
		cin >> s[i];
	}
	bool n = 1;
	do { n = 0;
	for (int i = 0; i < 9; i++) 
		if (s[i] >s[i + 1]) {
			swp(s[i], s[i + 1]);
			n = 1;
		}
	
	} while (n);
	
	for (int i = 0; i < 10; i++)cout << s[i] << '\t';
	return 0;
}