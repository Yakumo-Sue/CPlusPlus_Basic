#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 重载左移运算符
class LeftClass
{
	// 通过友元进行访问
	friend ostream& operator<<(ostream& cout, LeftClass& l);
public:
	LeftClass(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	//成员函数 实现不了  p << cout 不是我们想要的效果
	//void operator<<(LeftClass& l){
	//}
private:
	int a;
	int b;
};

// 方法一：通过全局函数进行左移运算符重载
ostream& operator<<(ostream& cout, LeftClass& l)
{
	cout << "a: " << l.a << endl;
	cout << "b: " << l.b;

	return cout;
}

int main_8_1_2()
{
	LeftClass l1(10, 20);

	cout << l1 << endl;

	return 0;
}