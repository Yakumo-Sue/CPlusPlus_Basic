#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 结构体定义
struct Student
{
	// 成员列表
	string name;
	int age;
	int score;
} stu3; // 结构体变量创建方式 3

// 结构体定义
struct Teacher
{
	//成员列表
	int id; //职工编号
	string name;  //教师姓名
	int age;   //教师年龄
	struct Student stu; //子结构体 学生
};

int main_8_1_1()
{
	// 调用结构体创建变量 1
	struct Student stu1;

	stu1.name = "Edmond";
	stu1.age = 23;
	stu1.score = 98;

	// 输出
	cout << "姓名：" << stu1.name << endl;
	cout << "年龄：" << stu1.age << endl;
	cout << "分数：" << stu1.score << endl;

	cout << "--------------" << endl;

	// 结构体变量创建方式 2
	struct Student stu2 = { "李四", 19, 60 };

	cout << "姓名：" << stu2.name << endl;
	cout << "年龄：" << stu2.age << endl;
	cout << "分数：" << stu2.score << endl;

	cout << "--------------" << endl;

	stu3.name = "王五";
	stu3.age = 18;
	stu3.score = 80;

	cout << "姓名：" << stu3.name << endl;
	cout << "年龄：" << stu3.age << endl;
	cout << "分数：" << stu3.score << endl;

	return 0;
}

int main_8_1_2()
{
	struct Student arr[3] =
	{
		{"zs", 18, 76},
		{"ls", 20, 86},
		{"ww", 22, 79}
	};

	// 遍历输出
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		cout << "姓名：" << arr[i].name << endl;
		cout << "年龄：" << arr[i].age << endl;
		cout << "分数：" << arr[i].score << "\n" << endl;
	}

	return 0;
}

int main_8_1_3()
{
	struct Student stu = { "张三",18,100, };
	// 定义结构体指针
	struct Student* ps = &stu;
	// 修改
	ps->score = 98;

	// 输出
	cout << "姓名：" << ps->name << endl;
	cout << "年龄：" << ps->age << endl;
	cout << "分数：" << ps->score << endl;

	return 0;
}

int main_8_1_4()
{
	struct Teacher t1;
	t1.id = 10000;
	t1.name = "老王";
	t1.age = 40;

	t1.stu.name = "张三";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "教师-职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;

	cout << "辅导学员-姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;

	return 0;
}

//值传递
void printStudent(Student stu)
{
	stu.age = 28;
	cout << "子函数中 姓名：" << stu.name 
		<< " 年龄： " << stu.age 
		<< " 分数：" << stu.score << endl;
}

//地址传递
void printStudent2(Student* stu)
{
	stu->age = 32;
	cout << "子函数中 姓名：" << stu->name 
		<< " 年龄： " << stu->age 
		<< " 分数：" << stu->score << endl;
}

int main() {

	Student stu = { "张三",18,100 };
	//值传递
	printStudent(stu);
	cout << "主函数中 姓名：" << stu.name 
		<< " 年龄： " << stu.age 
		<< " 分数：" << stu.score << endl;

	cout << endl;

	//地址传递
	printStudent2(&stu);
	cout << "主函数中 姓名：" << stu.name 
		<< " 年龄： " << stu.age 
		<< " 分数：" << stu.score << endl;

	return 0;
}