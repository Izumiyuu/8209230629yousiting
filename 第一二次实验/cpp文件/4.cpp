#include <iostream>
#include <iomanip>
using namespace std;
int main(){
unsigned int testUnint = 65534;//oxfffe
//另转化为short导致结果变成-2原因为：超过short表达范围，会根据short自身范围赋值
cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8进制输出
cout << dec;
int t;
cin >> t;
cout << static_cast<int>(t);
return 0;}