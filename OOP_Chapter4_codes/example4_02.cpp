#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;
class Student
{
private:
	static int total;
	int num;
	char name[20];
public:
	Student() { total++; }
	~Student() { total--; }
	Student(int n, char *p = "wang");
	void GetName();
	int GetNum();
	static void Print();
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
	cout << name << endl;//<<total<<endl;

}
int Student::GetNum()
{
	return num;
}
void Student::Print()
{
	cout << "The number of all students:" << total << endl;
}
int main()
{
	Student::Print();
	Student *p = new Student(13);
	//p->GetName();
	Student::Print();
	p->Print();		//��ָ����ָ��Ķ���ȥ���ʾ�̬��Ա������()
	delete p;		//ɾ����̬��������һ��
	Student::Print();
	//p->GetName();		//������룬��ΪGetName()Ϊ��ͨ��Ա����
	Student s[2];
	s[0].Print();
	s[1].Print();
	/*Student::Print();
	Student::Print();*/
	system("pause");
	return 0;
}
//(1)��̬��Ա���������࣬�������ڶ���delete p;ɾ�����Ƕ��ϵĶ���p��Ϊָ��Student������ָ��
//(2)��̬��Ա�ǿ��Զ������ʵģ�Ҳ����˵�����봴���κζ���ʵ���Ϳ��Է��ʡ�