#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 定义函数模板
template<typename T>
void printFn(T a)
{
	cout << "调用的是函数模板" << endl;
}
// 普通函数
void printFn(int a)
{
	cout << "调用的是函数" << endl;
}
// 定义函数模板
template<typename T>
void printFn(T a, T b)
{
	cout << "调用重载的模板" << endl;
}


int main01_1_5()
{
	// 1、如果函数模板和普通函数都可以实现，优先调用普通函数
	// 注意 如果告诉编译器  普通函数是有的，但只是声明没有实现，或者不在当前文件内实现，就会报错找不到
	int a = 10;
	printFn(a); // 调用普通函数

	// 2、可以通过空模板参数列表来强制调用函数模板
	printFn<>(a); // 调用函数模板

	//3、函数模板也可以发生重载
	int b = 20;
	printFn(a, b); // 调用重载的函数模板

	//4、 如果函数模板可以产生更好的匹配,优先调用函数模板
	char c1 = 'a';
	printFn(c1); // 调用函数模板

	return 0;
}