#pragma once
#include<iostream>
#include <fstream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#define FILENAME "empFile.txt"
using namespace std;

// 设计管理类
class WorkerManager
{
public:
	// 构造函数
	WorkerManager();

	// 1. 展示菜单
	void showMenu();

	// 3. 添加成员
	// 记录文件中的人数个数
	int m_EmpNum;
	// 员工数组的指针
	Worker** m_EmpArray;
	// 增加职工
	void addEmp();

	// 4. 将成员信息写入文件中
	void save();

	// 5. 读取文件中信息
	bool m_FileIsEmpty;
	// 统计人数
	int getEmpNum();
	// 初始化员工
	void initEmp();

	// 6. 显示职工
	void showEmp();

	// 7. 删除职工
	void delEmp();
	// 按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
	int isExist(int id);

	// 8. 修改职工
	void modEmp();

	// 9. 查找职工
	void findEmp();

	// 10. 排序
	void sortEmp();

	// 11. 清空数据
	void clearEmp();

	// 2. 提供退出功能
	void exitSystem();

	// 析构函数
	~WorkerManager();
};
