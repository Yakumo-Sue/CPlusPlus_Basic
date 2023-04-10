#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int* func3()
{
	int* a = new int(10);
	return a;
}

int main_1_4_1()
{
	int* p = func3();

	cout << *p << endl;
	cout << *p << endl;

	//利用delete释放堆区数据
	delete p;

	//cout << *p << endl; //报错，释放的空间不可访问

	return 0;
}

int main_1_4_2()
{
	// new 开辟int指针数组
	int* arr = new int[10];
	// 遍历
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	// 清除 new
	delete[] arr;

	return 0;
}