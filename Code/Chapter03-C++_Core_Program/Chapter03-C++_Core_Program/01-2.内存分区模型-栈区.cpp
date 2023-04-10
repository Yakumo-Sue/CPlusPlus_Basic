#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int* func1()
{
	int a = 10; // 局部变量存放在栈区，函数执行完会释放
	return &a;
}

int main_1_2() {
	int* p = func1();

	cout << *p << endl; // 编译器进行了保留会输出正确值
	cout << *p << endl; // 指向了野指针位置

	return 0;
}