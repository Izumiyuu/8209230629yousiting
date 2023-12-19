#include<iostream>
using namespace std;
class Student {
private:
	int num;
	int goal;
public:
	Student(int ,int);
	friend void m(Student*);
};
Student::Student(int a=0,int b=0) {
	num = a;
	goal = b;
}
void m(Student *s) {Student mm=s[0];
	for (int i = 0; i < 5; i++) {
			
			if(s[i].goal>mm.goal) {
				mm = s[i];
			}
	}
	cout <<mm.num;
}
int main() {
	Student s1[5] =
	{
		Student(1,60),
		Student(2,70),
		Student(3,80),
		Student(4,90),
		Student(5,100) };
	m(s1);
	return 0;
}