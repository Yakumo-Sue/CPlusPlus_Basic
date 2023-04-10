#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main_2_8()
{
	// 整形输入
	int a = 0;
	// cout 将右侧的所有数据展示
	cout << "Before：a = " << a << endl;
	cout << "请输入数值：" << endl;
	// cin 将键盘输入传递给右侧变量中
	cin >> a;
	cout << "After：a = " << a << endl;

	return 0;
}