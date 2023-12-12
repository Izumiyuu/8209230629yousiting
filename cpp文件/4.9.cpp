#include<iostream>
using namespace std;
int n;
void swp(int* a, int* b){
	int t = *b;
	*b =* a;
	*a = t;
}
void px(int * s) {
	for (int i = 0; i <n-1; i++) 
		if (s[i] > s[i + 1])swp((s + i), (s + i + 1));
}

int main() {
		cout << "ÊäÈë¸öÊý";

		cin >> n;
		int* s = new int[1005];
		for (int i = 0; i < n; i++)cin >> s[i];
		px(s);
		for (int i = 0; i < n; i++)cout << s[i] << '\t';
		return 0;
}