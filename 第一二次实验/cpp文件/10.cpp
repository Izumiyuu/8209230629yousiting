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
	cout << "����Ӣ����ĸ���ո������ַ��������ַ��ĸ����ֱ�Ϊ" << e << '\t' << k << '\t' << s << '\t' << t << '\t';
}