#include <iostream>

#include <string>
using namespace std;
class Person
{
private:
	int age;
	char* name;
public:
	Person(int n = 1, char *na = "Zhuli");
	~Person();
	void Print();
	void Print()const;
	void ModifyAge();
};
Person::Person(int n, char* na)
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
}
Person::~Person()
{
	delete[]name;
}
void Person::Print()
{
	cout << "age:" << age << " name:" << name << endl;		
	cout << "This is general Print()." << endl;
}
void Person::Print() const
{
	cout << "age:" << age << " name:" << name << endl;
	cout << "This is const Print()." << endl;
}
void Person::ModifyAge()
{
	age++;
}
int main()
{
	const Person p1(17, "wu");
	cout << "output const object p1" << endl;
	p1.Print();
	Person p2(18, "zhang");
	cout << "output general object p2" << endl;
	p2.ModifyAge();
	p2.Print();
	getchar();
	return 0;

}
//(1)运行无误，结果稍有变化。p2.Print()改为输出"This is const Print()."，因为普通对象在调用时遵循以下原则：如果存在普通成员函数的重载版本，则首先调用普通成员函数；否则，自动调用常成员函数，因为普通对象也可以调用常成员函数。
//(2)编译器报错。因为常对象只能调用它的常成员函数而不能调用普通成员函数，将其注释掉后，找不到可以调用的Print().