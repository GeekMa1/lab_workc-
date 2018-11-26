#include "example_4_03_Circle.h"
double Circle::Area()
{
	//PI = 3.14;					//提示错误：左值指定const对象
	return PI*Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * PI*Radius;
}
