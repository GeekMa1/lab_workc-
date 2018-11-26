#include <iostream>
#include <Windows.h>
using namespace std;
class A
{
public:
	A(int a)
	{
		x = a;
		cout << "A: x = " << a << endl;
	}
private:
	int x;
};
class B
{
public:
	B(int a, int b, int c) :a2(b), a1(a)
	{
		/*a1.x = a;
		a2.x = b;*/
		y = c;
		cout << "B: y = " << c << endl;
	}
private:
	A a1, a2;
	int y;
};
int main()
{
	B obj(10,20,30);
	system("pause"); 
	return 0;
}
//example5_01.cpp
// #include <iostream>
// #include <Windows.h>
// using namespace std;
// class A
// {
// public:
	// A()
	// {
		// cout << "创建A" << endl;
	// }
	// ~A()
	// {
		// cout << "析构A" << endl;
	// }
// };
// class B
// {
// public:
	// B()
	// {
		// cout << "创建B" << endl;
	// }
	// ~B()
	// {
		// cout << "析构B" << endl;
	// }
// private:
	// A a;
// };
// int main()
// {
	// B obj;
	// system("pause"); 
	// return 0;
// }
