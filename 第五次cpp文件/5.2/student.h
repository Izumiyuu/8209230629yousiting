#define _CRT_SECURE_NO_WARNINGS
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void set_value(const char[],const char[], char);
	void display();
	void set_value(char[], char[], char);
	
private:
	char num[20];
	char name[20];
	char sex;
};