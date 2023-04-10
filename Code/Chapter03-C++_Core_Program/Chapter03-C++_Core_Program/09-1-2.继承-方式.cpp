#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 公共类
class Base
{
public:
	int a;
protected:
	int b;
private:
	int c;
};

// 继承类
class BaseSon1 : public Base
{
public:
	void func()
	{
		a;
		b;
		// c;  // 私有属性，无法访问
	}
};

class BaseSon2 : protected Base
{
public:
	void func()
	{
		a;
		b;
		// c;  // 私有属性，无法访问
	}
};

class BaseSon3 : private Base
{
public:
	void func()
	{
		a;
		b;
		// c;  // 私有属性，无法访问
	}
};

int main_9_1_2()
{
	// 公共继承
	BaseSon1 bs1;
	bs1.a;

	cout << "Size BaseSon1 = " << sizeof(BaseSon1) << endl;
	
	// 保护继承
	BaseSon2 bs2;
	// bs2.a;  // 保护类，无法外部输出

	// 私有继承
	BaseSon3 bs3;
	// bs2.a;  // 私有类，无法外部输出
	// 同理的子类再继承 BaseSon2 也是无法进行输出，因为私有化了
	
	return 0;
}