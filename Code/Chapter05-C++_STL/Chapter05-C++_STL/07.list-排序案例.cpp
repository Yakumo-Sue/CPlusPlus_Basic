#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <list>
using namespace std;

// 定义类
class PersonClass
{
public:
	PersonClass(string name, int age, int height) {
		this->p_Name = name;
		this->p_Age = age;
		this->p_Height = height;
	}

public:
	string p_Name;
	int p_Age;
	int p_Height;
};

// 定义排序方式
bool comparePerson(PersonClass& p1, PersonClass& p2)
{
	if (p1.p_Age == p2.p_Age)
	{
		return p1.p_Height > p2.p_Height;
	}
	else
	{
		return p1.p_Age > p2.p_Age;
	}
}

// 遍历方法重写 - 排序前
void showPersonList(const list<PersonClass>& p)
{
	// 定义迭代器
	cout << "---------------------------------" << endl;
	list<PersonClass>::const_iterator it;
	for (it = p.begin(); it != p.end(); it++)
	{
		cout << "姓名：" << it->p_Name << " | "
			<< "年龄：" << it->p_Age << " | "
			<< "身高：" << it->p_Height << endl;
	}
	cout << "---------------------------------" << endl;
}

int main03_7_7()
{
	// 定义以PersonClass的链表
	list<PersonClass> L;
	// 创建数据
	PersonClass p1("刘备", 35, 175);
	PersonClass p2("曹操", 45, 180);
	PersonClass p3("孙权", 40, 170);
	PersonClass p4("赵云", 25, 190);
	PersonClass p5("张飞", 35, 160);
	PersonClass p6("关羽", 35, 200);
	// 插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	// 查看数据
	showPersonList(L);
	L.sort(comparePerson);
	showPersonList(L);

	return 0;
}