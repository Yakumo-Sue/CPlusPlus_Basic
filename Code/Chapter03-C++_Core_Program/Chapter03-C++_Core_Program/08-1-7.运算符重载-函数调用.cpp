#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

// 重载函数输出
class FnPrintClass
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};
// 重载相加函数
class FnAddClass
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main_8_1_7()
{
	// 创建函数输出重载类
	FnPrintClass FPC01;
	FPC01("测试重载字符串输出函数");

	// 创建函数相加重载类
	FnAddClass FAC01;
	int result = FAC01(10, 20);
	cout << "a + b = " << result << endl;
	// 匿名调用
	cout << "a + b = " << FnAddClass()(100,200) << endl;


	return 0;
}