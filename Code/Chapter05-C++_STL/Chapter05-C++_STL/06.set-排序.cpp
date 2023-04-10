#include "03-3-8.setPrintFn.h"

// 示例一   set存放内置数据类型
class MyCompare
{
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};
int main03_7_6_1()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);
	set<int>::iterator it;
	//默认从小到大
	for (it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//指定排序规则
	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);
	set<int, MyCompare>::iterator it;
	for (it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}

// 示例二 set存放自定义数据类型
class People
{
public:
	People(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;

};
class comparePerson
{
public:
	bool operator()(const People& p1, const People& p2)
	{
		//按照年龄进行排序  降序
		return p1.m_Age > p2.m_Age;
	}
};

int main03_7_6()
{
	set<People, comparePerson> s;

	People p1("刘备", 23);
	People p2("关羽", 27);
	People p3("张飞", 25);
	People p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	set<People, comparePerson>::iterator it;
	for (it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
	}

	return 0;
}