#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class EqualClass
{
public:
	// 定义构造函数
	EqualClass(int age)
	{
		// 在堆区内开辟年龄变量
		Age = new int(age);
	}
	
	// 重构赋值运算符
	EqualClass& operator=(EqualClass& EQC)
	{
		// 首先清除对象
		if (Age != NULL)
		{
			delete Age;
			Age = NULL;
		}
		// 进行深拷贝
		Age = new int(*EQC.Age);

		return *this;
	}

	// 析构函数清除对象
	~EqualClass()
	{
		if (Age != NULL)
		{
			delete Age;
			Age = NULL;
		}
	}

	// 定义年龄指针
	int* Age;
};

int main_8_1_5()
{
	EqualClass EQ01(18);
	EqualClass EQ02(20);
	EqualClass EQ03(24);

	// 赋值操作测试
	EQ01 = EQ02;
	EQ02 = EQ03;

	cout << "EQ01 = " << *EQ01.Age << endl;
	cout << "EQ02 = " << *EQ02.Age << endl;
	cout << "EQ03 = " << *EQ03.Age << endl;

	return 0;
}