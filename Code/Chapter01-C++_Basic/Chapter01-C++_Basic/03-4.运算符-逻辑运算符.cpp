#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main_3_4()
{
	// 逻辑运算符  --- 非
	int a = 10;
	cout << "!a = " << !a << endl;
	cout << "!!a = " << !!a << endl;
	
	// 逻辑运算符  --- 与
	int b = 10;
	cout << "a && b = " << (a && b) << endl;
	b = 0;
	cout << "a && b = " << (a && b) << endl;

	// 逻辑运算符  --- 或
	b = 10;
	cout << "a || b = " << (a || b) << endl;
	b = 0;
	cout << "a || b = " << (a || b) << endl;

	return 0;
}