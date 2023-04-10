#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person3
{
public:
	//构造函数
	Person3()
	{
		cout << "Person的构造函数调用" << endl;
	}
	//析构函数
	~Person3()
	{
		cout << "Person的析构函数调用" << endl;
	}
};

void test01()
{
	Person3 p;
}

int main_5_1_1() {
	//test01();

	Person3 p;

	system("pause");

	return 0;
}