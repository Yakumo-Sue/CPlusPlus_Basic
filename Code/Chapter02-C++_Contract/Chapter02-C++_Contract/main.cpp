#include "contact.h"

// 主要运行程序
int main()
{
	// 创建通讯录
	Contact con;
	// 初始化通讯录人数
	con.size = 0;

	// 输入数值
	int input = 0;
	// 循环
	while (true)
	{
		// 菜单栏
		menu();
		// 输入数值
		cout << "请输入要操作的数值：" << endl;
		cin >> input;
		// 根据数值判断需要的操作
		switch (input)
		{
		// 添加联系人
		case 1:
			AddPerson(&con);
			break;
		// 显示联系人
		case 2:
			ShowPerson(&con);
			break;
		// 删除联系人
		case 3:
			DeletePerson(&con);
			break;
		// 查找联系人
		case 4:
			FindPerson(&con);
			break;
		// 修改联系人
		case 5:
			ModifyPerson(&con);
			break;
		// 清空联系人
		case 6:
			ClearPerson(&con);
			break;
		// 推出通讯录
		case 0:
			cout << "退出通讯录" << endl;
			return 0;
			break;
		default:
			break;
		}
	}

	return 0;
}