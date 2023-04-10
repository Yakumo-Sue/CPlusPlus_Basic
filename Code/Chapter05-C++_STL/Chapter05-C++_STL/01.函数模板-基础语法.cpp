#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 函数模板声明
template<typename T>
void sortFn01(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main_1_1_1()
{
	// 定义整形数据交换
	int a = 10;
	int b = 20;
	// 利用模板实现交换
	// 自动类型检测
	// sortFn(a, b);
	// 显示指定类型
	sortFn01<int>(a, b);
	// 输出
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 定义字符型数据交换
	char c = 'a';
	char d = 'b';
	// 自动类型检测
	// sortFn(c, d);
	// 显示指定类型
	sortFn01<char>(c, d);
	// 输出
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;


	return 0;
}