#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class splitTemplate {
public:
	splitTemplate(T1 name, T2 age);
	void showPerson();
public:
	T1 m_Name;
	T2 m_Age;
};

//构造函数 类外实现
template<class T1, class T2>
splitTemplate<T1, T2>::splitTemplate(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
}

//成员函数 类外实现
template<class T1, class T2>
void splitTemplate<T1, T2>::showPerson() {
	cout << "姓名: " << this->m_Name << endl;
	cout << "年龄:" << this->m_Age << endl;
}