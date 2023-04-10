#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 创建类
class CreateC
{
public:
	// 非静态成员变量占对象空间
	int CCA;
	// 静态成员变量不占对象空间
	static int CCB;
	// 函数
	// 同理，函数也不占用对象空间，所有函数共享一个函数实例
	void func1() {};
	// 静态成员函数也不占对象空间
	static void func2() {};
};
int CreateC::CCB = 10;

void CC()
{
	CreateC CC1;
	cout << "sizeof of CC1 = " << sizeof(CC1) << endl;

}

int main_6_1_1()
{
	CC();
	return 0;
}