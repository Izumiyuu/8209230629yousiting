#include<iostream>
using namespace std;
const double mon = 0.8;
int main() {
	int pnum=2, day=1,tot=2;
	while (tot<100) {
		pnum *= 2;
		if (tot + pnum < 100) {
			tot += pnum;
			day++;
		}
		else break;
	}
	double jun = tot * mon / day;
	cout<<jun;
	return 0;
}