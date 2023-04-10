#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 创建类
class Person4
{
public:
	// 无参构造函数（默认构造函数）
	Person4()
	{
		cout << "无参构造函数!" << endl;
	}
	// 有参构造函数
	Person4(int a)
	{
		age = a;
		cout << "有参构造函数!" << endl;
	}
	// 拷贝构造函数
	Person4(const Person4& p)
	{
		age = p.age;
		cout << "拷贝构造函数!" << endl;
	}

	// 析构函数
	~Person4()
	{
		cout << "析构函数!" << endl;
	}

public:
	int age;
};

int main_5_1_2()
{
	// 方法一：括号法
	// 注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
	// Person4 peo1;		// 默认构造
	// Person4 peo2(10);	// 有参构造
	// Person4 peo3(peo2);  // 拷贝构造

	// 方法二：显式法
	// 注意2：Person(10)单独写就是匿名对象  当前行结束之后，马上析构
	// Person4 peo2 = Person4(10);		// 有参构造
	// Person4 peo3 = Person4(peo2);	// 拷贝构造

	// 方法三：隐式转换法
	Person4 p4 = 10; // Person4 p4 = Person(10);
	Person4 p5 = p4; // Person4 p5 = Person(p4);

	// 注意3：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
	// Person p5(p4);

	return 0;
}