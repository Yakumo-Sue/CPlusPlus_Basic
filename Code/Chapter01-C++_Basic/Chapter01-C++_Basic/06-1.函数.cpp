#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int Sum(int x, int y);

int main_6_1_1()
{
	int a = 10;
	int b = 20;
	int res = Sum(a, b);

	cout << "res = " << res << endl;

	return 0;
}

int Sum(int x, int y)
{
	int result = x + y;
	return result;
}

void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//return ; 当函数声明时候，不需要返回值，可以不写return
}

int main_6_1_2() {

	int a = 10;
	int b = 20;

	swap(a, b);

	cout << "mian中的 a = " << a << endl;
	cout << "mian中的 b = " << b << endl;

	system("pause");

	return 0;
}