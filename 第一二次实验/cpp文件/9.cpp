#include<iostream>
using namespace std;
int main() {
	double a, b;
	char c;
	cin >> a >> c >> b;
	if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')cout << "������Ƿ�";
	switch (c)
	{
	case'+':cout << a << c << b << "=" << a + b; break;
	case'-':cout << a << c << b << "=" << a - b; break;
	case'*':cout << a << c << b << "=" << a * b; break;
	case'/':if (b)cout << a << c << b << "=" << a / b; else cout << "����Ϊ�㲻�Ϸ�"; break;
	case'%': {
		int x, d;
		x = static_cast<int>(a); 
		d = static_cast<int>(b);if (b)cout << a << c << b << "=" << x % d; else cout << "Լ��Ϊ�㲻�Ϸ�"; break; 
	}

	}
	return 0;
}