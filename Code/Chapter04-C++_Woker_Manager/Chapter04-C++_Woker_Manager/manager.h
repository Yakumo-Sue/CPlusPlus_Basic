﻿#include "worker.h"

class Manager : public Worker
{
public:
	// 实例化个人信息和岗位名称
	// 构造函数
	Manager(int id, string name, int dId);
	// 显示个人信息
	virtual void showInfo();
	// 获取岗位信息
	virtual string getDeptName();
};