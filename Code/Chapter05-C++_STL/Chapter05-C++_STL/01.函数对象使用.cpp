#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 定义仿函数
// 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
class AddTwoNum
{
public:
	// 重构 ()
	int operator()(int val1, int val2)
	{
		return val1 + val2;
	}
};

// 函数对象可以有自己的状态
class printStr
{
public:
	int count; //内部自己的状态
	printStr()
	{
		count = 0;
	}

	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}
};

// 函数对象可以作为参数传递
void doPrint(printStr& ps, string test)
{
	ps(test);
}

int main()
{
	AddTwoNum atm;
	cout << "两数之和：" << atm(10, 20) << endl;

	printStr str1;
	str1("hello world");
	str1("hello world");
	str1("hello world");
	cout << "printStr 调用次数为： " << str1.count << endl;

	printStr str2;
	doPrint(str2, "Hello, C++!!!");

	return 0;
}