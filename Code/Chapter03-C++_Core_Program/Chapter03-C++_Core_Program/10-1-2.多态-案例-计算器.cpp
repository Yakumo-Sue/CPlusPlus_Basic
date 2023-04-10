#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class AbstractCal
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int num1;
	int num2;
};

// 实现功能类
// 1.加法计算器
class AddCal : public AbstractCal
{
public:
	int getResult()
	{
		return num1 + num2;
	}
};
// 2.减法计算器
class SubCal : public AbstractCal
{
public:
	int getResult()
	{
		return num1 - num2;
	}
};
// 3.除法计算器
class DivCal : public AbstractCal
{
public:
	int getResult()
	{
		return num1 / num2;
	}
};
// 4.乘法计算器
class MulCal : public AbstractCal
{
public:
	int getResult()
	{
		return num1 * num2;
	}
};


int main10_1_2()
{
	// 创建加法计算器对象
	AbstractCal* abc = new AddCal;
	abc->num1 = 10;
	abc->num2 = 20;
	cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;
	// 清除对象
	delete abc;

	// 创建减法
	abc = new SubCal;
	abc->num1 = 10;
	abc->num2 = 20;
	cout << abc->num1 << " - " << abc->num2 << " = " << abc->getResult() << endl;
	delete abc;

	// 创建乘法
	abc = new MulCal;
	abc->num1 = 10;
	abc->num2 = 20;
	cout << abc->num1 << " × " << abc->num2 << " = " << abc->getResult() << endl;
	delete abc;

	// 创建除法
	abc = new DivCal;
	abc->num1 = 10;
	abc->num2 = 20;
	cout << abc->num1 << " / " << abc->num2 << " = " << abc->getResult() << endl;
	delete abc;

	return 0;
}