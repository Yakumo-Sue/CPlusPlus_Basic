#include "workerManager.h"

void Fn()
{
	// 创建类
	WorkerManager WM;
	int choice = 0;
	
	// 循环判断
	while (true)
	{
		// 展示菜单
		WM.showMenu();
		// 选择
		cout << "请输入您的选择:" << endl;
		// 输入数值
		cin >> choice;

		switch (choice)
		{
		case 0: // 退出系统
			WM.exitSystem();
			break;
		case 1: // 添加职工
		 	WM.addEmp();
			break;
		case 2: // 显示职工
			WM.showEmp();
			break;
		case 3: // 删除职工
			WM.delEmp();
			break;
		case 4: // 修改职工
			WM.modEmp();
			break;
		case 5: // 查找职工
			WM.findEmp();
			break;
		case 6: // 排序职工
			WM.sortEmp();
			break;
		case 7: // 清空文件
			break;
		default:
			cout << "不在选择内" << endl;
			system("cls");
			break;
		}
	}
}

void test()
{
	Worker* worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "李四", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "王五", 3);
	worker->showInfo();
	delete worker;
}

int main()
{
	Fn();
	//test();
	return 0;
}