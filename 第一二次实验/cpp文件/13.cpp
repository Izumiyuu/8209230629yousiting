#include<iostream>
#include<cmath>
using namespace std;
double a, result,t;
double sprt() {
	while (abs(result-t)>1e-10) {
		t = result;
		result = (t + a / t) / 2;
	}
	return result;
}
int main() {
	cin >> a ;
	if (a < 0) {
		cout << "aС��0";
		return 0;
	}
	result = a / 2;
	result=sprt();
	cout << result;
	return 0;
}