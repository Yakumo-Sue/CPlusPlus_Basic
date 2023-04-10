#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class Person2 {
public:
	// 姓名设置可读可写
	void setName(string name) {
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}

	// 设置年龄并获取年龄
	void setAge(int age) {
		m_Age = age;
	}
	int getAge() {
		return m_Age;
	}

	// 情人设置为只写
	void setLover(string lover) {
		m_Lover = lover;
	}

private:
	string m_Name;	// 可读可写  姓名
	int m_Age;		// 只读  年龄
	string m_Lover; // 只写  情人
};

int main_4_1_5() {
	Person2 p;
	// 姓名设置
	p.setName("Su");
	cout << "姓名： " << p.getName() << endl;

	// 年龄设置
	p.setAge(23);
	cout << "年龄： " << p.getAge() << endl;

	// 情人设置
	p.setLover("风见幽香");
	//cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取

	return 0;
}