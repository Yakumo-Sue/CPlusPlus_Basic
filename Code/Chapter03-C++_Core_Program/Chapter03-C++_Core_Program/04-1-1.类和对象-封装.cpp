#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
// 圆周率
const double PI = 3.14;

// 1. 意义
// 将属性和行为作为以恶搞整体，用来表现某个事物

//封装一个圆类，求圆的周长
//class代表设计一个类，后面跟着的是类名
class Circle
{
public:
	int range; // 半径
	// 行为
	double calZC()
	{
		return 2 * PI * range;
	}
};

int main_4_1()
{
	//通过圆类，创建圆的对象
	// c1就是一个具体的圆
	Circle c1;
	c1.range = 10;

	cout << "周长为：" << c1.calZC() << endl;

	return 0;
}