#include<iostream>
using namespace std;
int vio(char* s, char* p) {
	int slen=(int)strlen(s), plen=(int)strlen(p);
	int i = 0; int j = 0;
	if (slen < plen)return -1;
	while ((i < slen) && (j < plen)) {
		if (s[i]== p[j]) {
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
	char s1[maxn], s2[maxn];
	cout << "Enter the first string: ";
	cin.getline(s1,85);
	cout << "Enter the second string:";
	cin.getline(s2, 85);
	cout<<"indexOf(¡°"<<s1<<"¡±¡°"<<s2<<"¡±) is" << vio(s2, s1);


}