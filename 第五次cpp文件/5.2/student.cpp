#define _CRT_SECURE_NO_WARNINGS
//student.cpp
#include <iostream>
#include "student.h "
using namespace std;
void Student::display()
{
	cout << "num��" << num << endl;
	cout << "name��" << name << endl;
	cout << "sex��" << sex << endl;
};
void Student::set_value(const char num[], const char name[], char sex){
	strcpy(this->num, num);
	strcpy(this->name, name);
	this->sex = sex;
}