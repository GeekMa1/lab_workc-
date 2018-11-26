#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;
	Student() { total++; }
	~Student() { total--; }
	Student(int n, char *p = "wang");
	void GetName();
	int GetNum();
};
int Student::total = 0;			//��̬���ݳ�Ա�ĳ�ʼ��
Student::Student(int n, char *p)
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}
int Student::GetNum()
{
	return num;
}
int main()
{
	cout << "The number of all students:" << Student::total << endl;
	Student *p = new Student(13);
	cout<< "The number of all students:" << Student::total << endl;
	cout<<"The number of all students:" << p->total << endl;
	delete p;
	cout<< "The number of all students:" << Student::total << endl;
	Student s[2];
	cout<< "The number of all students:" << s[0].total << endl;
	cout<< "The number of all students:" << s[1].total << endl;
	system("pause");
	return 0;
}
//(1)��̬���ݳ�Ա��Ĭ��ֵΪ0.��2����̬���ݳ�Ա������������������������ж���ͳ�ʼ����
//(3)total��˽�г�Ա������ֱ������������������з��ʡ�
