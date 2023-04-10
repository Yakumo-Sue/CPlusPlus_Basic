#include "worker.h"

class Employee : public Worker
{
public:
	// 实例化个人信息和岗位名称
	// 构造函数
	Employee(int id, string name, int dId);
	// 显示个人信息
	virtual void showInfo();
	// 获取岗位信息
	virtual string getDeptName();
};
