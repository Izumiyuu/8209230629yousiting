#include <iostream>
#include <iomanip>
using namespace std;
int main(){
unsigned int testUnint = 65534;//oxfffe
//��ת��Ϊshort���½�����-2ԭ��Ϊ������short��ﷶΧ�������short����Χ��ֵ
cout << "output in Oct unsigned int type:" << oct << testUnint << endl; //8�������
cout << dec;
int t;
cin >> t;
cout << static_cast<int>(t);
return 0;}