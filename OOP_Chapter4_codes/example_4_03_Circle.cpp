#include "example_4_03_Circle.h"
double Circle::Area()
{
	//PI = 3.14;					//��ʾ������ֵָ��const����
	return PI*Radius*Radius;
}
double Circle::Circumference()
{
	return 2 * PI*Radius;
}
