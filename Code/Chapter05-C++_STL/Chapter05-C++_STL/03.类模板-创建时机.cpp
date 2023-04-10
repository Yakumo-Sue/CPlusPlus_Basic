#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 创建类
class timeClass01
{
public:
	void showInfo01()
	{
		cout << "Normal Class01 show!" << endl;
	}
};
class timeClass02
{
public:
	void showInfo02()
	{
		cout << "Normal Class02 show!" << endl;
	}
};

// 创建类模板
template<class T>
class timeTmplate
{
public:
	T obj;
	void fn01()
	{
		obj.showInfo01();
	}
	void fn02()
	{
		obj.showInfo02();
	}
};

int main01_2_3()
{
	timeTmplate<timeClass01> p1;
	p1.fn01();
	// p1.fn02(); // 编译会出错，说明函数调用才会去创建成员函数

	return 0;
}