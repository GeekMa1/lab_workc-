#ifndef _Circle		//�������룬�����ظ�����
#define _Circle
class Circle
{
private:
	double Radius;
	const double PI;
public:
	Circle(double r = 0):PI(3.1415926)			//δ��ʼ��������Ա���ͱ��ʽ�����ǿ��޸ĵ���ֵ
	{								//ԭ�򣺳����ݳ�Ա�ĳ�ʼ��ֻ���ڹ��캯���ĳ�ʼ���б��ڽ��У�����ͨ���ں����ĺ��������ø�ֵ�����ʵ��
		//PI = 3.1415926;
		Radius = r;
	}
	double Area();
	double Circumference();
};
#endif