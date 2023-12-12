#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
	int slen = (int)strlen(s1), plen = (int)strlen(s2);
	int i = 0; int j = 0;
	while ((i < slen) && (j < plen)) {
		if (tolower(s1[i]) == tolower(s2[j])) {
			i++;
			j++;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
	}
	if (j == plen)
		return i - j;
	else return -1;
}
const int maxn = 10005;
int main() {
	char *s1 = new char[85], *s2 = new char[85];
	cout << "Enter the first string: ";
	cin.getline(s1, 85);
	cout << "Enter the second string:";
	cin.getline(s2, 85);
	cout << "indexOf(¡°" << s1 << "¡±¡°" << s2 << "¡±) is" << indexof(s2, s1);
	delete s1;
	delete s2;
	return 0;
}