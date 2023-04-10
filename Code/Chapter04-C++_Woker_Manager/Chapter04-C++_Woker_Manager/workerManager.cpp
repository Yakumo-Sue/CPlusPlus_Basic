#include "workerManager.h"

// 补全功能
// 构造函数
WorkerManager::WorkerManager()
{
	//// 初始化属性
	//// 初始化人数
	//this->m_EmpNum = 0;
	//// 初始化数组指针
	//this->m_EmpArray = NULL;
	
	// 创建读取流
	ifstream ifs;
	// 打开文件
	ifs.open(FILENAME, ios::in);

	// 1. 判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;	
		// 初始化属性
		// 初始化人数
		this->m_EmpNum = 0;
		// 初始化数组指针
		this->m_EmpArray = NULL;
		// 初始化文件空标志
		this->m_FileIsEmpty = true;
		// 关闭文件
		ifs.close();
		// 终止
		return;
	}
	// 2. 文件存在单无内容
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空！" << endl;
		// 初始化
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	// 读取数据时记录
	int num = this->getEmpNum();
	cout << "职工个数为：" << num << endl;
	this->m_EmpNum = num;

	// 展示已有员工数据
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	// 初始化员工
	this->initEmp();
	// 测试代码
	//int i = 0;
	//for (i = 0; i < m_EmpNum; i++)
	//{
	//	cout << "职工号： " << this->m_EmpArray[i]->m_Id
	//		<< " 职工姓名： " << this->m_EmpArray[i]->m_Name
	//		<< " 部门编号： " << this->m_EmpArray[i]->m_DeptId << endl;
	//}
}

// 1. 展示菜单
void WorkerManager::showMenu()
{
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

// 3. 增加职工功能
void WorkerManager::addEmp()
{
	cout << "请输入增加职工数量：" << endl;
	int addNum = 0;
	cin >> addNum;

	// 判断人数
	if (addNum > 0)
	{
		// 1. 计算空间大小
		int newSize = this->m_EmpNum + addNum;
		// 2. 开辟空间
		Worker** newSpace = new Worker * [newSize];
		// 3. 将原空间内容存放到新开辟空间下
		if (this->m_EmpArray != NULL)
		{
			int i = 0;
			// 遍历并转存
			for (i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		// 输入添加的数据
		int i = 0;
		for (i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;
			// 1. 输入id
			cout << "请输入第 " << i + 1 << " 个新职工编号：" << endl;
			cin >> id;
			// 2. 输入姓名
			cout << "请输入第 " << i + 1 << " 个新职工姓名：" << endl;
			cin >> name;
			// 3. 输入职位
			cout << "请选择该职工的岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;
			// 判断不同职位调用不同类
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1: //普通员工
				worker = new Employee(id, name, 1);
				break;
			case 2: //经理
				worker = new Manager(id, name, 2);
				break;
			case 3:  //老板
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			// 写入
			newSpace[this->m_EmpNum + i] = worker;
		}
		// 释放原有空间
		delete[] this->m_EmpArray;
		// 更改空间指向
		this->m_EmpArray = newSpace;
		// 更新数量
		this->m_EmpNum = newSize;
		// 更新职工不为空标志
		this->m_FileIsEmpty = false;
		// 提示信息
		cout << "成功添加 " << addNum << " 名新职工" << endl;
		// 保存文件
		this->save();
	}
	else
	{
		cout << "输入错误" << endl;
	}
	system("pause");
	system("cls");
}

// 4. 写入文件功能
void WorkerManager::save()
{
	// 创建文件流
	ofstream ofs;
	// 打开文件
	ofs.open(FILENAME, ios::out);
	// 循环遍历并写入
	int i = 0;
	for (i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	// 关闭流
	ofs.close();
	cout << "以写入到文件中" << endl;
}

// 5. 统计人数功能
int WorkerManager::getEmpNum()
{
	// 创建读取流
	ifstream ifs;
	// 打开文件
	ifs.open(FILENAME, ios::in);
	
	int id;
	string name;
	int dId;

	// 循环判断
	int num = 0;
	while (ifs>>id && ifs>> name && ifs >> dId)
	{
		// 记录人数
		num++;
	}
	// 关闭流
	ifs.close();

	return num;
}
void WorkerManager::initEmp()
{
	// 创建读取流
	ifstream ifs;
	// 打开文件
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	// 循环判断
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		// 创建员工类
		Worker* worker = NULL;
		//根据不同的部门Id创建不同对象
		if (dId == 1)  // 1普通员工
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) //2经理
		{
			worker = new Manager(id, name, dId);
		}
		else //总裁
		{
			worker = new Boss(id, name, dId);
		}
		// 存放到数组中
		this->m_EmpArray[index] = worker;
		index++;
	}
}

// 6. 显示职工功能
void WorkerManager::showEmp()
{
	// 1. 判断文件是否存在
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
		return;
	}
	// 2. 遍历并展示
	int i = 0;
	for (i = 0; i < this->m_EmpNum; i++)
	{
		// 利用多态调用接口
		this->m_EmpArray[i]->showInfo();
	}

	system("pause");
	system("cls");
}

// 7. 删除职工功能
void WorkerManager::delEmp()
{
	// 1. 判断文件是否存在
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
		return;
	}
	// 2. 文件存在则查找
	cout << "请输入要删除的职工号：" << endl;
	int id = 0;
	cin >> id;
	// 调用函数并查找对应职工
	int index = this->isExist(id);
	// 判断 index
	if (index != -1)
	{
		int i = 0;
		for (i = index; i < this->m_EmpNum - 1; i++)
		{
			this->m_EmpArray[i] = this->m_EmpArray[i + 1];
		}
		this->m_EmpNum--;
		// 删除后同步到文件中
		this->save();
		// 提示
		cout << "删除成功!" << endl;
	}
	else
	{
		cout << "删除失败，未找到该职工！" << endl;
	}
}
int WorkerManager::isExist(int id)
{
	int index = -1;
	int i = 0;
	// 遍历数据
	for (i = 0; i < this->m_EmpNum; i++)
	{
		// 判断id是否相等
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

// 8. 修改职工功能
void WorkerManager::modEmp()
{
	// 1. 判断文件是否存在
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
		return;
	}
	// 2. 查找用户
	cout << "请输入修改职工的编号：" << endl;
	int id;
	cin >> id;
	// 3. 调用函数查找
	int result = this->isExist(id);
	// 4. 判断索引
	if (result != -1)
	{
		// 直接进行删除
		delete this->m_EmpArray[result];
		// 创建新职工
		int newId = 0;
		string newName = "";
		int dSelect = 0;
		// 输入数据
		cout << "查到： " << id << "号职工，请输入新职工号： " << endl;
		cin >> newId;

		cout << "请输入新姓名： " << endl;
		cin >> newName;

		cout << "请输入岗位： " << endl;
		cout << "1、普通职工" << endl;
		cout << "2、经理" << endl;
		cout << "3、老板" << endl;
		cin >> dSelect;

		Worker* worker = NULL;
		// 判断岗位
		switch (dSelect)
		{
		case 1:
			worker = new Employee(newId, newName, dSelect);
			break;
		case 2:
			worker = new Manager(newId, newName, dSelect);
			break;
		case 3:
			worker = new Boss(newId, newName, dSelect);
			break;
		default:
			break;
		}
		// 更改数据
		this->m_EmpArray[result] = worker;
		// 提示
		cout << "修改成功！" << endl;
		// 保存到文件中
		this->save();
	}
	else
	{
		cout << "修改错误，查无此人！" << endl;
	}
	// 按任意键 清屏
	system("pause");
	system("cls");
}

// 9. 查找职工功能
void WorkerManager::findEmp()
{
	// 1. 判断文件是否存在
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
		return;
	}
	// 定义查找方式
	cout << "请输入查找的方式：" << endl;
	cout << "1、按职工编号查找" << endl;
	cout << "2、按姓名查找" << endl;
	// 输入
	int select = 0;
	cin >> select;
	// 职工查找
	if (select == 1)
	{
		int id;
		cout << "请输入查找的职工编号：" << endl;
		cin >> id;
		// 查找索引
		int ret = isExist(id);
		if (ret != -1)
		{
			cout << "查找成功！该职工信息如下：" << endl;
			this->m_EmpArray[ret]->showInfo();
		}
		else
		{
			cout << "查找失败，查无此人" << endl;
		}
	}
	else if (select == 2)
	{
		string name;
		cout << "请输入查找的姓名：" << endl;
		cin >> name;
		// 设置节流
		bool flag = false;
		// 循环遍历数据
		int i = 0;
		for (i = 0; i < this->m_EmpNum; i++)
		{
			if(this->m_EmpArray[i]->m_Name == name)
			{ 
				cout << "查找成功,职工编号为："
					<< m_EmpArray[i]->m_Id
					<< " 号的信息如下：" << endl;
				// 节流正确
				flag = true;
				// 展示信息
				this->m_EmpArray[i]->showInfo();
			}
		}
		if (flag == false)
		{
			//查无此人
			cout << "查找失败，查无此人" << endl;
		}
	}
	else
	{
		cout << "查找失败，查无此人" << endl;
	}

	// 按任意键 清屏
	system("pause");
	system("cls");
}

// 10. 排序功能
void WorkerManager::sortEmp()
{
	// 判断文件是否存在
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
		// 按任意键 清屏
		system("pause");
		system("cls");
	}
	// 存在即设定排序方式
	cout << "请选择排序方式： " << endl;
	cout << "1、按职工号进行升序" << endl;
	cout << "2、按职工号进行降序" << endl;
	// 输入
	int select = 0;
	cin >> select;
	// 循环
	int i = 0;
	for (i = 0; i < this->m_EmpNum; i++)
	{
		int minOrMax = i;
		int j = 0;
		// 循环数据
		for (j = i + 1 ; j < m_EmpNum; j++)
		{
			// 升序排列
			if (select == 1)
			{
				// 通过id判断职工大小并切换
				if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id)
				{
					minOrMax = j;
				}
			}
			// 降序排列
			else
			{
				if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[j]->m_Id)
				{
					minOrMax = j;
				}
			}
		}
		// 交换位置
		if (i != minOrMax)
		{
			Worker* temp = m_EmpArray[i];
			m_EmpArray[i] = m_EmpArray[minOrMax];
			m_EmpArray[minOrMax] = temp;
		}
	}
	// 提示
	cout << "排序成功,排序后结果为：" << endl;
	// 保存并展示
	this->save();
	this->showEmp();
}

// 11. 清空数据功能
void WorkerManager::clearEmp()
{
	cout << "确认清空？" << endl;
	cout << "1、确认" << endl;
	cout << "2、返回" << endl;
	// 输入
	int select = 0;
	cin >> select;
	// 判断选择
	if (select == 1)
	{
		// 打开模式 ios::trunc 如果存在删除文件并重新创建
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		// 如果数据不为空，咋要释放栈区空间
		if (this->m_EmpArray != NULL)
		{
			int i = 0;
			for (i = 0; i < this->m_EmpNum; i++)
			{
				// 判断每个数据
				if (this->m_EmpArray[i] != NULL)
				{
					// 清空数据
					delete this->m_EmpArray[i];
				}
			}
			// 释放并初始化数组
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		// 提示
		cout << "清空完成！" << endl;
	}
	// 按任意键 清屏
	system("pause");
	system("cls");
}

// 2. 退出功能
void WorkerManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	exit(0);
}

// 析构函数
WorkerManager::~WorkerManager()
{
	// 释放堆栈数据
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
	}
}