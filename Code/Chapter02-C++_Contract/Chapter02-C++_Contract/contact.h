#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 定义命名空间
using namespace std;

// 设置默认值
#define MAX_NUM 100

// 联系人结构体设计
struct Person
{
	string name;		// 姓名
	int age;			// 年龄
	int gender;			// 性别 --> 1 male; 2 female
	string phoneNumber; // 手机号
	string address;		// 地址
};
// 通讯录结构体
struct Contact
{
	struct Person pArr[MAX_NUM];
	int size;
};

// 函数功能区域
// 1. 菜单展示
void menu();
// 2. 添加用户
void AddPerson(Contact* con);
// 3. 展示用户
void ShowPerson(Contact* con);
// 4. 删除用户
void DeletePerson(Contact* con);
// 4.1 判断用户是否存在
int is_Exist(Contact* con, string name);
// 5. 查找用户
void FindPerson(Contact* con);
// 6. 修改用户
void ModifyPerson(Contact* con);
// 7. 清空用户
void ClearPerson(Contact* con);