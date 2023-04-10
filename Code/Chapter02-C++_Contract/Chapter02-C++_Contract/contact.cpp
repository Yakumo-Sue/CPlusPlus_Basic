#include "contact.h"

// 菜单展示栏
void menu()
{
	cout << "------------     通讯录    ----------" << endl;
	cout << "-----01. 添加联系人             -----" << endl;
	cout << "-----02. 显示联系人             -----" << endl;
	cout << "-----03. 删除联系人             -----" << endl;
	cout << "-----04. 查找联系人             -----" << endl;
	cout << "-----05. 修改联系人             -----" << endl;
	cout << "-----06. 清空联系人             -----" << endl;
	cout << "-----00. 推出通讯录             -----" << endl;
	cout << "-------------------------------------" << endl;
}

// 添加联系人功能函数
void AddPerson(Contact* con)
{
	// 判断添加数据的空间
	if (con->size == MAX_NUM)
	{
		cout << "通讯录已满，无法添加。" << endl;
		return;
	}
	else
	{
		// 1. 用户名
		string name;
		cout << "请输入用户名：" << endl;
		cin >> name;
		// 通过通讯录结构体中的联系人并根据通讯录中的数量作为索引找到对应的用户
		con->pArr[con->size].name = name;

		// 2. 年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		con->pArr[con->size].age = age;

		// 3. 性别
		cout << "请输入性别：" << endl;
		cout << "1 -- male" << endl;
		cout << "2 -- female" << endl;
		// 判断输入数值
		int gender = 0;
		while (true)
		{
			cin >> gender;
			// 判断
			if (gender == 1 || gender == 2)
			{
				con->pArr[con->size].gender = gender;
				break;
			}
			cout << "输入数值错误，请重新输入：" << endl;
		}

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		con->pArr[con->size].phoneNumber = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		con->pArr[con->size].address = address;

		// 通讯录人数增加
		con->size++;

		// 提示
		cout << "添加成功！" << endl;
		system("pause");
		system("cls");
	}
}
// 展示联系人功能函数
void ShowPerson(Contact* con)
{
	// 判断是否为空
	if (con->size == 0)
	{
		cout << "当前记录为空" << endl;
		return;
	}
	else
	{
		int i = 0;
		cout << "----------------------------------" << endl;
		for (i = 0; i < con->size; i++)
		{
			cout << "姓名：   " << con->pArr[i].name << endl;
			cout << "年龄：   " << con->pArr[i].age << endl;
			cout << "性别：   " << (con->pArr[i].gender == 1 ? "male" : "female") << endl;
			cout << "手机号： " << con->pArr[i].phoneNumber << endl;
			cout << "地址：   " << con->pArr[i].address << endl;
			cout << "----------------------------------" << endl;
		}
	}
	system("pause");
	system("cls");
} 
// 删除联系人功能函数
void DeletePerson(Contact* con)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;

	// 获取判断结构
	int result = is_Exist(con, name);
	// 判断
	if (result != -1)
	{
		int i = 0;
		for (i = result; i < con->size; i++)
		{
			con->pArr[i] = con->pArr[i + 1];
		}
		con->size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");

}
// 封装判断用户是否存在函数
int is_Exist(Contact* con, string name)
{
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (con->pArr[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
// 查找联系人功能函数
void FindPerson(Contact* con)
{
	cout << "请输入您要查找的联系人：" << endl;
	string name;
	cin >> name;
	// 获取索引
	int result = is_Exist(con, name);
	if (result != -1)
	{
		cout << "----------------------------------" << endl;
		cout << "姓名：   " << con->pArr[result].name << endl;
		cout << "年龄：   " << con->pArr[result].age << endl;
		cout << "性别：   " << (con->pArr[result].gender == 1 ? "male" : "female") << endl;
		cout << "手机号： " << con->pArr[result].phoneNumber << endl;
		cout << "地址：   " << con->pArr[result].address << endl;
		cout << "----------------------------------" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}
// 修改联系人功能函数
void ModifyPerson(Contact* con)
{
	cout << "请输入您要修改的联系人：" << endl;
	string name;
	cin >> name;
	// 获取索引
	int result = is_Exist(con, name);
	if (result != -1)
	{ 
		// 1. 用户名
		string name;
		cout << "请输入用户名：" << endl;
		cin >> name;
		// 通过通讯录结构体中的联系人并根据通讯录中的数量作为索引找到对应的用户
		con->pArr[result].name = name;

		// 2. 年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		con->pArr[result].age = age;

		// 3. 性别
		cout << "请输入性别：" << endl;
		cout << "1 -- male" << endl;
		cout << "2 -- female" << endl;
		// 判断输入数值
		int gender = 0;
		while (true)
		{
			cin >> gender;
			// 判断
			if (gender == 1 || gender == 2)
			{
				con->pArr[result].gender = gender;
				break;
			}
			cout << "输入数值错误，请重新输入：" << endl;
		}

		//联系电话
		cout << "请输入联系电话：" << endl;
		string phone = "";
		cin >> phone;
		con->pArr[result].phoneNumber = phone;

		//家庭住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		con->pArr[result].address = address;

		// 提示
		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}
// 清空联系人功能函数
void ClearPerson(Contact* con)
{
	con->size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}