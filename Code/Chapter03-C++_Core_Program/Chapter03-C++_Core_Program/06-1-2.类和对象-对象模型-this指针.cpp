#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class ThisClass
{
public:
	ThisClass(int age)
	{
		// 名称默认为相同的，则会不进行赋值
		//age = age;
		// this 指针指向对象类中的 age
		this->age = age;
	}
	// this 指向 p2 的指针
	// 而 *this 指向的就是 p2 这个对象类
	ThisClass& ThisAddAge(ThisClass& tc)
	{
		this->age += tc.age;
		return *this;
	}
	int age;
};

void tc()
{
	ThisClass TC1(10);
	cout << "TC1.age = " << TC1.age << endl;

	ThisClass TC2(10);
	TC2.ThisAddAge(TC1).ThisAddAge(TC1);
	cout << "TC2.age = " << TC2.age << endl;
}

int main_6_1_2()
{
	tc();

	return 0;
}