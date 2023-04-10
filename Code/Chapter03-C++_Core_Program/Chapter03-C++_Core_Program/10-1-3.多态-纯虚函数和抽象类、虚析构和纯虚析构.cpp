#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

// 定义纯虚函数
class Base
{
public:
	// 纯虚函数
	// 类中只要有一个纯虚函数就称为抽象类
	// 抽象类无法实例化对象
	// 子类必须重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;
	// 并且定义完成后继承该类的子类必须进行声明
};
class ExtBase : public Base
{
public:
	virtual void func()
	{
		cout << "func调用" << endl;
	};
};

//int main()
//{
//	Base* base = NULL;
//	base = new ExtBase;
//	base->func();
//	delete base;
//
//	return 0;
//}

// 定义纯虚析构
class Animal {
public:
	Animal()
	{
		cout << "Animal 构造函数调用！" << endl;
	}
	virtual void Speak() = 0;
	//析构函数加上virtual关键字，变成虚析构函数
	//virtual ~Animal()
	//{
	//	cout << "Animal虚析构函数调用！" << endl;
	//}
	virtual ~Animal() = 0;
};
Animal::~Animal()
{
	cout << "Animal 纯虚析构函数调用！" << endl;
}

// 和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。
// 不能够被实例化。
class Cat : public Animal 
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数调用！" << endl;
		m_Name = new string(name);
	}
	virtual void Speak()
	{
		cout << *m_Name << "小猫在说话!" << endl;
	}
	~Cat()
	{
		cout << "Cat析构函数调用!" << endl;
		if (this->m_Name != NULL) {
			delete m_Name;
			m_Name = NULL;
		}
	}

public:
	string* m_Name;
};

int main_10_1_3() {

	Animal* animal = new Cat("Tom");
	animal->Speak();
	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
	//怎么解决？给基类增加一个虚析构函数
	//虚析构函数就是用来解决通过父类指针释放子类对象
	delete animal;

	return 0;
}