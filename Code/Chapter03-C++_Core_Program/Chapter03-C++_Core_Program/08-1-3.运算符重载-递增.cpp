#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 重载递增运算符
class AddClass
{
	// 友元
	friend ostream& operator<<(ostream& cout, AddClass addThis);

public:
	AddClass(int a)
	{
		num = a;
	}
	// 重载前置++运算符
	// 返回引用是因为这样就会对一个数据进行递增
	AddClass& operator++()
	{
		num++;
		return *this;
	}
	// 重载后置++运算符，通过占位符区别前置++
	AddClass operator++(int)
	{
		// 1. 记录结果
		AddClass temp = *this;
		// 2. 递增
		num++;
		// 3. 返回
		return temp;
	}
private:
	int num;
};

// 需要左移运算符重载方法
ostream& operator<<(ostream& cout, AddClass addThis)
{
	cout << addThis.num;
	return cout;
}

int main_8_1_3()
{
	// 前置++ 重载测试
	AddClass add01(10);
	cout << ++(++add01) << endl;
	cout << add01 << endl;

	// 后置++ 重载测试
	cout << add01++ << endl;
	cout << add01 << endl;

	return 0;
}