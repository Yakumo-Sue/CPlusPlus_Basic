#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

// 类模板中成员函数类外实现
template<class T1, class T2>
class OutTemplate
{
public:
	// 定义构造函数
	OutTemplate(T1 person, T2 num);
	// 定义成员函数
	void showTemp();

	T1 Person;
	T2 Number;
};
// 构造函数-类外实现
// 直接写，报错
// 1. 无法知晓类模板的数据类型
// 2. 编译器无法识别 T1, T2 数据类型
// OutTemplate::OutTemplate(T1 person, T2 num);
// 正确写法：
template<class T1, class T2>
OutTemplate<T1, T2>::OutTemplate(T1 person, T2 num)
{
	this->Person = person;
	this->Number = num;
}

// 成员函数-类外实现
// 同上
template<class T1, class T2>
void OutTemplate<T1, T2>::showTemp()
{
	cout << "Person：" << this->Person << endl;
	cout << "Number：" << this->Number << endl;
}

int main01_2_6()
{
	// 实例化类
	OutTemplate<string, int> otl("Tom", 123);
	otl.showTemp();

	return 0;
}