#include<iostream>
using namespace std;
int td(int day) {
	if (day == 1)return 1;
	return (td(day-1)+1)*2;
}
int main() {
	int n;
	cin >> n;
	cout << td(n);
	return 0;
}