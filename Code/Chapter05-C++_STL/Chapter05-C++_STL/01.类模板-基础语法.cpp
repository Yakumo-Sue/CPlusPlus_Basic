#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 定义类模板
template<class NameType, class AgeType>
class useClassTemplate
{
public:
	useClassTemplate(NameType name, AgeType age)
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

int main01_2_1()
{
	// 使用时必须定义类型
	// 指定NameType 为 string 类型，AgeType 为 int 类型
	useClassTemplate<string, int> p1("Tom", 23);
	p1.printFn();


	return 0;
}