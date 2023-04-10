#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 方法一：通过成员变量进行运算符重载
class AddClass
{
public:
	AddClass() {};
	// 定义构造函数
	AddClass(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	// 定义运算符重载
	//AddClass operator+(const AddClass& p)
	//{
	//	//  创建一个类
	//	AddClass temp;
	//	temp.a = this->a + p.a;
	//	temp.b = this->b + p.b;
	//	return temp;
	//}

public:
	int a;
	int b;
};

// 方法二：通过全局函数进行运算符的重载
AddClass operator+(AddClass& p1, AddClass& p2)
{
	AddClass temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	return temp;
}

int main_8_1_1()
{
	AddClass a1(10, 20);
	AddClass a2(10, 20);

	AddClass a3 = a1 + a2;

	cout << "a: " << a3.a << endl;
	cout << "b: " << a3.b << endl;

	return 0;
}