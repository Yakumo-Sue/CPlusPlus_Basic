#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Person5 {
public:
	Person5() {
		cout << "无参构造函数!" << endl;
		mAge = 0;
	}
	Person5(int age) {
		cout << "有参构造函数!" << endl;
		mAge = age;
	}
	Person5(const Person5 &p) {
		cout << "拷贝构造函数!" << endl;
		mAge = p.mAge;
	}
	//析构函数在释放内存之前调用
	~Person5() {
		cout << "析构函数!" << endl;
	}
public:
	int mAge;
};

//1. 使用一个已经创建完毕的对象来初始化一个新对象
void test1() {

	Person5 man(100); //p对象已经创建完毕
	Person5 newman(man); //调用拷贝构造函数
	Person5 newman2 = man; //拷贝构造

	//Person newman3;
	//newman3 = man; //不是调用拷贝构造函数，赋值操作
}

//2. 值传递的方式给函数参数传值
//相当于Person p1 = p;
void doWork(Person5 p1) {}
void test2() {
	Person5 pe; //无参构造函数
	doWork(pe);
}

//3. 以值方式返回局部对象
Person5 doWork2()
{
	Person5 pe1;
	cout << (int*)&pe1 << endl;
	return pe1;
}

void test3()
{
	Person5 pe = doWork2();
	cout << (int*)&pe << endl;
}


int main_5_1_3() {

	//test1();
	//test2();
	test3();

	system("pause");

	return 0;
}