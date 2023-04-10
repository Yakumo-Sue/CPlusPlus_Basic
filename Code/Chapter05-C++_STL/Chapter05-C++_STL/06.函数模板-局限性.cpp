#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

// 1. 如果参数的类型为数组则无法进行赋值操作
//template<typename T>
//void f(T a, T b)
//{
//	a = b;
//}

class Person01
{
public:
	Person01(string name, int age)
	{
		this->Name = name;
		this->Age = age;
	}

	string Name;
	int Age;
};

// 普通函数模板
template<typename T>
bool compareTemplate(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// 具体化，显示具体化的原型和定意思以template<>开头，并通过名称来指出类型
// 具体化优先于常规模板
template<> bool compareTemplate(Person01& p1, Person01& p2)
{
	if (p1.Name == p2.Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main01_1_6()
{
	// 创建类
	Person01 p1 = Person01("Tom", 12);
	Person01 p2 = Person01("Tom", 15);

	// 自定义数据类型，不会调用普通的函数模板
	// 可以创建具体化的 Person01 数据类型的模板，用于特殊处理这个类型
	bool result = compareTemplate(p1, p2);

	if (result)
	{
		cout << "p1 == p2 " << endl;
	}
	else
	{
		cout << "p1 != p2 " << endl;
	}

	return 0;
}