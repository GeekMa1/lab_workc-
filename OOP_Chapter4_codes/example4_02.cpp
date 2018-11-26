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
int Student::total = 0;			//静态数据成员的初始化
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
	p->Print();		//用指针所指向的对象去访问静态成员函数名()
	delete p;		//删除动态对象，析构一次
	Student::Print();
	//p->GetName();		//输出乱码，因为GetName()为普通成员函数
	Student s[2];
	s[0].Print();
	s[1].Print();
	/*Student::Print();
	Student::Print();*/
	system("pause");
	return 0;
}
//(1)静态成员函数属于类，而不属于对象。delete p;删除的是堆上的对象，p仍为指向Student类对象的指针
//(2)静态成员是可以独立访问的，也就是说，无须创建任何对象实例就可以访问。