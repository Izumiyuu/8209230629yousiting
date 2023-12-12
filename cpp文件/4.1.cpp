#include<iostream>
#include<cstring>
int s[20];
int ss[20];
using namespace std;
int main() {
	cout << "Enter ten numbers:";
	cin>>s[0];
	int num = 1;
	for (int i = 1; i < 10; i++) {
		int t;
		cin >> t;
		if(!ss[t]){
			s[num] = t; num++; ss[t]++;
		}
	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < num; i++)  cout << s[i] << '\t'; 
	return 0;
}