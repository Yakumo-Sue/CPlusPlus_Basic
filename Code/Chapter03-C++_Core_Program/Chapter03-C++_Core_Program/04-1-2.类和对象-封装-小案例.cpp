#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

// 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student
{
public:
	// 属性
	string stu_name;  // 学生姓名
	int ID;			  // 学生ID
public:
	// 方法
	// 赋值姓名
	void setName(string name)
	{
		stu_name = name;
	}
	// 赋值ID
	void setID(int id)
	{
		ID = id;
	}
	// 展示
	void showStu()
	{
		cout << "姓名: " << stu_name << endl;
		cout << "ID:  " << ID << endl;
	}
};

int main_4_1_2()
{
	Student s1;
	s1.setName("Jason");
	s1.setID(114514);
	s1.showStu();

	return 0;
}