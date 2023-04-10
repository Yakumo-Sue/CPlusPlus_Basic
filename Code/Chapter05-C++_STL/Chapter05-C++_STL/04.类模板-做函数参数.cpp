#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 定义类模板
template<class NameType, class AgeType>
class Person03
{
public:
	Person03(NameType name, AgeType age)
	{
		this->Name = name;
		this->Age = age;
	}

	void printFn()
	{
		cout << "name: " << this->Name << endl;
		cout << "age: " << this->Age << endl;
	}

	NameType Name;
	AgeType Age;
};

// 1. 指定传入的类型
void printPerson01(Person03<string, int>& p)
{
	p.printFn();
}

// 2. 参数模板化
template<class T1, class T2>
void printPerson02(Person03<T1, T2>& p)
{
	p.printFn();
	cout << "T1 的类型为：" << typeid(T1).name() << endl;
	cout << "T1 的类型为：" << typeid(T2).name() << endl;
}

// 3. 整体类模板话
template<class T>
void printPerson03(T& p)
{
	p.printFn();
	cout << "T 的类型为：" << typeid(T).name() << endl;
}

int main01_2_4()
{
	Person03<string, int> p01("Tom", 20);
	// printPerson01(p01);
	// printPerson02(p01);
	printPerson03(p01);


	return 0;
}