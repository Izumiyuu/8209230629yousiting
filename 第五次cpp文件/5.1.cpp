#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:
	int hour;
	int minute;
	int sec;
public:              // 数据成员为公用的
	void Input(int hour, int minute, int sec) {
		this->hour = hour;
		this->minute= minute;
		this->sec= sec;
	}
	void Output() {
		cout << hour << " ：" << minute << " ：" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	int hh, mm, ss;
	cin >>hh >>mm >> ss;
	t1.Input(hh,mm,ss);
	t1.Output();
	return 0;
}