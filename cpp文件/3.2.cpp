#include<iostream>
using namespace std;
bool is_prime(int num) {
	for (int i = 2; i < (num / 2); i++)
		if (num % i == 0)return false;
	return true;
}
int main() {
	int nn = 0;
	cout << 2 << '\t',nn=1;
	for (int i = 3; nn < 200;i= i+2) {
		if (is_prime(i)) {
			cout << i << '\t';
			nn++;
			if (nn % 10 == 0)cout << endl;
		}
	}
	return 0;
}