#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
// 定义宏常量
#define NUM 10

int main_1_1()
{
	// 测试：输出一个数值
	/* 多行注释 */
	cout << "Hello World!!" << endl;

	return 0;
}

int main_1_2()
{
	// 定义变量
	int a = 20;
	cout << "a = " << a << endl;

	return 0;
}

int main_1_3()
{
	// 宏常量
	cout << "宏常量：NUM = " << NUM << endl;
	// const 常量
	const int n = 100;
	cout << "const n = " << n << endl;

	return 0;
}