#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main_4_2_1_1()
{
	int num = 0;

	while (num < 10)
	{
		cout << "num = " << num << endl;
		num++;
	}

	return 0;
}

int main_4_2_1_2()
{
	int num = 54;
	int input = 0;

	while (1)
	{
		cout << "请用户输入一个数值(1~100)：" << endl;
		cin >> input;
		if (input > num)
		{
			cout << "猜大了" << endl;
		}
		else if (input < num)
		{
			cout << "猜小了" << endl;
		}
		else
		{
			cout << "猜对了" << endl;
			break;
		}
	}
	return 0;
}