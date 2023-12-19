#include<iostream>
using namespace std;
class POINT {
private:
	int x, y;
public:
	POINT(int a=60, int b=80) :x(a), y(b) {};
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "ÐÞ¸Äºó" << "("<<x << "," << y<<")" << endl;
	}
};
int main() {
	POINT t;
	t.setPoint(1, 2);
	t.display();
	return 0;
}