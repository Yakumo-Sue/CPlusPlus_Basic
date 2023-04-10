#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class SC1
{
public:
	// 静态成员变量特点：
	// 1 在编译阶段分配内存
	// 2 类内声明，类外初始化
	// 3 所有对象共享同一份数据
	static int SC_A;	// 静态成员变量
private:
	static int SC_B;	// 静态变量私有属性
};

// 初始化静态变量
int SC1::SC_A = 100;
int SC1::SC_B = 100;

// 1. 访问
void SCTest01()
{
	// 1. 通过对象进行访问
	SC1 sc1;
	sc1.SC_A = 200;
	cout << "sc1.SC_A = " << sc1.SC_A << endl;

	// 2. 通过类名直接访问
	cout << "sc1.SC_A = " << SC1::SC_A << endl;

	// 3. 私人属性无法访问
	//cout << "SC1.SC_B = " << SC1::SC_B << endl;
}

class SC2
{
public:
	static void fn1()
	{
		cout << "static void fn1 静态函数成员" << endl;
	}
};

// 1. 访问
void SCTest02()
{
	// 1. 对象访问
	SC2 sc2;
	sc2.fn1();
	// 2. 类名访问
	SC2::fn1();
}

int main_5_1_7()
{
	//SCTest01();
	SCTest02();

	return 0;
}