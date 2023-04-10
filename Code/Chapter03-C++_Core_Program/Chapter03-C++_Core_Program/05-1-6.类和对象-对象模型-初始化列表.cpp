#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 初始化列表
class InitList
{
public:
	int A;
	int B;
	int C;

public:
	// 传统方式
	/*
	InitList(int a, int b, int c)
	{
		A = a;
		B = b;
		C = c;
	}
	*/

	// 初始化列表方式
	/*
	InitList() :A(10), B(20), C(30)
	{}
	*/

	// 初始化列表方式初始化
	InitList(int a, int b, int c)
		:A(a), B(b), C(c)
	{}
	void PrintList()
	{
		cout << "A：" << A << endl;
		cout << "B：" << B << endl;
		cout << "C：" << C << endl;
	}
};

void initList()
{
	// 方法一：初始化列表方式使用
	/*
	InitList il1;
	cout << "il1 的 A：" << il1.A << endl;
	cout << "il1 的 B：" << il1.B << endl;
	cout << "il1 的 C：" << il1.C << endl;
	*/
	
	// 方法二：初始化列表方式初始化使用
	InitList IL1(1, 2, 3);
	IL1.PrintList();
}


int main_5_1_6()
{

	initList();
	return 0;
}