#include "mytriangle.h"
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c))cout << _area(a, b, c);
	else "²»Âú×ãÈı½ÇĞÎ";
	return 0;
}