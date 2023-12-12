#include<iostream>
using namespace std;
int num;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int i = 0; i < size1; i++) {
		for (; num < size2; num++) {
			if (list1[i] < list2[num]) {
				list3[i + num] = list1[i]; break;
			}
			else list3[i + num] = list2[num];
		}
	}
	for (; num <size2; num++)list3[size1 + num ] = list2[num];
}
int main() {
	int size1, size2;
	int s1[105], s2[105],s[211];
	cin >>size1;
	for (int i = 0; i < size1; i++)cin>>s1[i];
	cin >>size2;
	for (int i = 0; i < size2; i++)cin>>s2[i];
	if (s1[size1 - 1] < s2[size2 - 1])merge(s1, size1, s2, size2, s);
	else merge(s2, size2, s1, size1, s);
	for (int i = 0; i < size1 + size2; i++)cout << s[i];
	return 0;
}