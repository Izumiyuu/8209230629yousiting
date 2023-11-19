#include<iostream>
#include<string>
using namespace std;
int main() {
	char c[505];
	cin.getline(c, 505, '\n');
	int e=0, k=0, s=0, t=0;
	for (int i = 0; i < strlen(c); i++) {
		if (c[i] == ' ')k++;
		else if (isalpha(c[i]))e++;
		else if (isdigit(c[i]))s++;
		else t++;
	}
	cout << "其中英文字母、空格、数字字符和其它字符的个数分别为" << e << '\t' << k << '\t' << s << '\t' << t << '\t';
}