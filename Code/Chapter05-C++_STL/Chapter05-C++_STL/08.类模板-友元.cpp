#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
// 全局函数配合友元  类外实现 - 先做函数模板声明，下方在做函数模板定义，在做友元
template<class T1, class T2> class friendTemplate;
// 如果声明了函数模板，可以将实现写到后面，否则需要将实现体写到类的前面让编译器提前看到
// template<class T1, class T2> void printFriendTemplate(friendTemplate<T1, T2>& p);


// 定义全局函数
template<class T1, class T2>
void printFriendTemplate(friendTemplate<T1, T2>& p)
{
	cout << "Person：" << p.Person << endl;
	cout << "Number：" << p.Number << endl;
}

// 创建类模板
template<class T1, class T2>
class friendTemplate
{
	// 实现友元
	// friend void printFriendTemplate<T1, T2>(friendTemplate<T1, T2>& p);
	friend void printFriendTemplate<>(friendTemplate<T1, T2>& p);
public:
	// 构造函数
	friendTemplate(T1 person, T2 num);

	T1 Person;
	T2 Number;
};
// 构造函数类外实现
template<class T1, class T2>
friendTemplate<T1, T2>::friendTemplate(T1 person, T2 num)
{
	this->Person = person;
	this->Number = num;
}


int main01_2_8()
{
	// 创建类
	friendTemplate<string, int> fTemp("Jerry", 123123);
	printFriendTemplate(fTemp);

	return 0;
}