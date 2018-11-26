#ifndef _Circle		//条件编译，避免重复包含
#define _Circle
class Circle
{
private:
	double Radius;
	const double PI;
public:
	Circle(double r = 0):PI(3.1415926)			//未初始化常量成员，和表达式必须是可修改的左值
	{								//原因：常数据成员的初始化只能在构造函数的初始化列表内进行，不能通过在函数的函数体中用赋值等语句实现
		//PI = 3.1415926;
		Radius = r;
	}
	double Area();
	double Circumference();
};
#endif