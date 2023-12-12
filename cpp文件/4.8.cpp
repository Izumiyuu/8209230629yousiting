#include<iostream>
using namespace std;
int num;
int parseHex(const char* const hexString) {
	for (int i = 0;i < strlen(hexString); i++ ) {
		int m = 1,t;
		for (int j = i; j < strlen(hexString)-1; j++) 
			m *= 16;
		if (isalpha(hexString[i]))
				t = (int)(hexString[i] - 'A') + 10;
		else t = hexString[i]-'0';
		num +=( t * m);
	}
	return num;
}
int main() {
	char* s = new char[80];
	cin >> s;
	cout << parseHex(s);
	delete s;
	return 0;
}