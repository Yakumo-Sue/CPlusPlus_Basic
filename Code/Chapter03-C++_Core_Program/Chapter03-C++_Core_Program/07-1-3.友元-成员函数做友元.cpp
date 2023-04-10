#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class Old;
class Young
{
public:
	Young();
	void answer();
	void answer2();
private:
	Old* old;
};

class Old
{
	// 创建类友元
	friend void Young::answer();
public:
	Old();
public:
	string name;
private:
	int age;
};
// 在全局环境中定义构造函数
Old::Old()
{
	this->name = "zhangsan";
	this->age = 12;
}

// 在全局环境中定义构造函数
Young::Young()
{
	old = new Old;
}
// 在全局环境定义类函数
void Young::answer()
{
	cout << "访问：" << old->name << endl;
	// 在 Old 中创建了 Young 的友元，这样即可访问 Old 类中的私有属性
	cout << "访问：" << old->age << endl;
}
void Young::answer2()
{
	cout << "访问：" << old->name << endl;
	// 报错
	//cout << "访问：" << old->age << endl;
}


int main_7_1_3()
{
	// 创建 Young 类
	Young y1;
	y1.answer();

	return 0;
}