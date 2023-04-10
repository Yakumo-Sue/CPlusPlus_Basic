#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class CompareClass
{
public:
	// 定义构造函数
	CompareClass(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

	// 重载 == 运算符
	bool operator==(CompareClass& CC)
	{
		if (this->m_Age == CC.m_Age && this->m_Name == CC.m_Name)
		{
			return true;
		}
		return false;
	}
	// 重载 != 运算符
	bool operator!=(CompareClass& CC)
	{
		if (this->m_Age == CC.m_Age && this->m_Name == CC.m_Name)
		{
			return false;
		}
		return true;
	}

	// 定义数据
	string m_Name;
	int m_Age;

};

int main_8_1_6()
{
	// 定义对象
	CompareClass CC01("Tom", 12);
	CompareClass CC02("Tom1", 12);

	if (CC01 == CC02)
	{
		cout << "CC01 等于 CC02" << endl;
	}
	else
	{
		cout << "CC01 不等于 CC02" << endl;
	}

	if (CC01 != CC02)
	{
		cout << "CC01 不等于 CC02" << endl;
	}
	else
	{
		cout << "CC01 等于 CC02" << endl;
	}

	return 0;
}