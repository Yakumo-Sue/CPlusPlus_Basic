#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include <vector>
#include <string>
#include <map>
#include <ctime>
using namespace std;

// 定义部门ID
#define CEHUA  0
#define MEISHU 1
#define YANFA  2

/*
- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息的插入  key(部门编号) value(员工)
- 分部门显示员工信息
*/

// 定义员工类
class Worker
{
public:
	string w_name;
	int w_salary;
};

// 创建员工函数，通过 vector 保存员工
void createWorker(vector<Worker>& w)
{
	string nameStr = "ABCDEFGHIJ";
	// 遍历
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		Worker worker;
		worker.w_name = "员工";
		worker.w_name += nameStr[i];
		worker.w_salary = rand() % 10000 + 10000; // 10000 ~ 19999

		// 将数据放入到 vector 容器中
		w.push_back(worker);
	}
}

// 员工分类函数通过 map 进行
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	// 定义迭代器
	vector<Worker>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptId = rand() % 3; // 0 1 2 
		// 员工分配编号
		m.insert(make_pair(deptId, *it));
	}
}

// 分类展示
void showGroup(multimap<int, Worker>& m)
{
	// 0  A  B  C   1  D  E   2  F G ...
	cout << "策划部门：" << endl;
	// find 函数查找
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.w_name << " | " << "薪水：" << pos->second.w_salary << endl;
	}
	cout << "----------------------" << endl;

	cout << "美术部门：" << endl;
	// find 函数查找
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.w_name << " | " << "薪水：" << pos->second.w_salary << endl;
	}
	cout << "----------------------" << endl;

	cout << "研发部门：" << endl;
	// find 函数查找
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.w_name << " | " << "薪水：" << pos->second.w_salary << endl;
	}
	cout << "----------------------" << endl;
}

int main03_9_1()
{
	srand((unsigned int)time(NULL));
	// 创建员工
	vector<Worker> worker;
	createWorker(worker);

	// 岗位分类
	multimap<int, Worker> deptId;
	setGroup(worker, deptId);

	// 展示分组
	showGroup(deptId);

	// 测试创建
	//vector<Worker>::iterator it;
	//for (it = worker.begin(); it != worker.end(); it++)
	//{
	//	cout << it->w_name << " " << it->w_salary << endl;
	//}

	return 0;
}