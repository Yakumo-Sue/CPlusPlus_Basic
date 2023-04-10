#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 定义类模板
template<class NameType, class AgeType = int>
class Person02
{
public:
	Person02(NameType name, AgeType age)
	{
		this->Name = name;
		this->Age = age;
	}

	void printFn()
	{
		cout << "name: " << this->Name << endl;
		cout << "age: " << this->Age << endl;
	}

	NameType Name;
	AgeType Age;
};

// 1. 测试
// 1、类模板没有自动类型推导的使用方式
void test01_2_2_1()
{
	// Person02 p("Tom", 123) // 错误、类模板使用时候，不可以用自动类型推导
	// 必须使用显示指定类型的方式，使用类模板
	Person02<string, int> p("Tom", 123);
	p.printFn();
}
// 2. 测试
// 2、类模板在模板参数列表中可以有默认参数
void test01_2_2_2()
{
	Person02<string> p("Jerry", 123);
	p.printFn();
}
int main01_2_2()
{
	// test01_2_2_1();
	// test01_2_2_2();

	return 0;
}