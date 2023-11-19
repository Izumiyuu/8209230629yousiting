#include<iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 5; i++) {
		int num = i;
		while (num) {
			cout << "*"; num--;
		}
		cout << endl;
	}
	return 0;
}