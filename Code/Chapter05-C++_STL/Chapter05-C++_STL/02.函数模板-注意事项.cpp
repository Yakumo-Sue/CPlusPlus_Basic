#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 定义函数模板
template<typename T>
void sortFn02(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

// 1. 测试
void test01_1_2()
{
	// 1. 自动类型推导，必须推导出一致的数据类型T,才可以使用
	int a = 10;
	int b = 20;
	char c = 'a';
	// 自动转换
	sortFn02(a, b);  // 可以推导出一致的T
	// sortFn02(a, c);	      // T 类型不同，报错 
}

// 2. 模板必须要确定出T的数据类型，才可以使用
template <typename T>
void fnc()
{
	cout << "fnc 调用" << endl;
}

int main01_1_2()
{
	// test01_1_2();

	// 直接调用模板函数
	// fnc();  // 报错，不可以独立使用，必须确定 T 的类型
	fnc<int>(); // 利用显示指定类型的方式，给T一个类型，才可以使用该模板

	return 0;
}