#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class MinusClass
{
	// 设置友元
	friend ostream& operator<<(ostream& cout, MinusClass minusNum);
public:
	MinusClass()
	{
		num = 12;
	}
	// 重载前置-- 运算符
	MinusClass& operator--()
	{
		num--;
		return *this;
	}
	// 重载后置-- 运算符
	MinusClass operator--(int)
	{
		MinusClass temp = *this;
		num--;
		return temp;
	}
private:
	int num;
};

// 重载左移运算符
ostream& operator<<(ostream& cout, MinusClass minusNum)
{
	cout << minusNum.num;

	return cout;
}

int main_8_1_4()
{
	MinusClass minus01;
	cout << minus01 << endl;
	cout << --minus01 << endl;
	cout << --(--minus01) << endl;

	cout << minus01-- << endl;
	cout << minus01 << endl;

	return 0;
}