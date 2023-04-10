#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class AnimalClass
{
public:
	// 函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。
	virtual void speak()
	{
		cout << "动物说话！" << endl;
	}
};

class CatClass : public AnimalClass
{
public:
	void speak()
	{
		cout << "猫猫在说话！" << endl;
	}
};
class DogClass : public AnimalClass
{
public:
	void speak()
	{
		cout << "修狗在说话！" << endl;
	}
};

// 传入对象并调用对应的类
// 如果函数地址在编译阶段就能确定，那么静态联编
// 如果函数地址在运行阶段才能确定，就是动态联编
void doSpeak(AnimalClass& animal)
{
	animal.speak();
}

// 多态满足条件： 
// 1、有继承关系
// 2、子类重写父类中的虚函数
// 多态使用：
// 父类指针或引用指向子类对象
int main_10_1_1()
{
	// 定义猫猫类
	CatClass cat01;
	doSpeak(cat01);

	DogClass dog02;
	doSpeak(dog02);

	return 0;
}