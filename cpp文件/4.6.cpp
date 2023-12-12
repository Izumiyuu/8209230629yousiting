#include<iostream>
using namespace std;
char s[1050];
int n[28];
void count(const char s[], int counts[])
{
	for(int i=0;i<strlen(s);i++)
		if (isalpha(s[i])) {
			int t = tolower(s[i]) - 'a';
			counts[t]++;
		}
	for (int i = 0; i < 26; i++) 
		if (counts[i])cout << (char)('a' + i) << ":" << counts[i]<<"times"<<endl;
}
int main() {
	cout << "Enter a string: ";
	cin.getline(s, 85);
	count(s, n);
	return 0;
}