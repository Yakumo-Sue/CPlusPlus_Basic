#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person6 {
public:
	//无参（默认）构造函数
	Person6() {
		cout << "无参构造函数!" << endl;
	}
	//有参构造函数
	Person6(int a) {
		age = a;
		cout << "有参构造函数!" << endl;
	}
	//拷贝构造函数
	Person6(const Person6& p) {
		age = p.age;
		cout << "拷贝构造函数!" << endl;
	}
	//析构函数
	~Person6() {
		cout << "析构函数!" << endl;
	}
public:
	int age;
};

void test01()
{
	Person6 p1(18);
	//如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
	Person6 p2(p1);

	cout << "p2的年龄为： " << p2.age << endl;
}

void test02()
{
	//如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
	Person6 p1; //此时如果用户自己没有提供默认构造，会出错
	Person6 p2(10); //用户提供的有参
	Person6 p3(p2); //此时如果用户没有提供拷贝构造，编译器会提供

	//如果用户提供拷贝构造，编译器不会提供其他构造函数
	Person6 p4; //此时如果用户自己没有提供默认构造，会出错
	Person6 p5(10); //此时如果用户自己没有提供有参，会出错
	Person6 p6(p5); //用户自己提供拷贝构造
}

int main_5_1_4() {

	test01();

	system("pause");

	return 0;
}