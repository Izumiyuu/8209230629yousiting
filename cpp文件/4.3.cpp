#include<iostream>
using namespace std;
bool s[105];
int main() {
	memset(s, 0, sizeof(s));
	for(int i=1;i<=100;i++)
	{
		for (int j = i; j <= 100; j += i)
		{
			if (s[j])s[j] = 0;
			else s[j] = 1;
		}
	}
	for (int i = 1; i<=100; i++)
		if(s[i])cout << i<<'\t';
	return 0;
}