#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main_5_1_1()
{
	// 定义方式：
	// 方法一：
	int arr1[10];
	// 方法二：
	//如果{}内不足10个数据，剩余数据用0补全
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,0 };
	// 方法三：
	int arr3[] = { 1,2,3,4,5,6,7,8,9 };

	// 方法一赋值：
	arr1[0] = 100;
	arr1[1] = 10;
	arr1[2] = 11;
	arr1[3] = 98;

	// 利用下标输出
	cout << "arr1[0] = " << arr1[0] << endl;
	cout << "arr1[1] = " << arr1[1] << endl;
	cout << "arr1[2] = " << arr1[2] << endl;

	// 方法二使用循环遍历输出
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "arr[" << i << "] = " << arr2[i] << endl;
	}
	// 方法三同上

	return 0;
}

int main_5_1_2()
{
	//数组名用途
	//1、可以获取整个数组占用内存空间大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "整个数组所占内存空间为： " << sizeof(arr) << endl;
	cout << "每个元素所占内存空间为： " << sizeof(arr[0]) << endl;
	cout << "数组的元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

	//2、可以通过数组名获取到数组首地址
	cout << "数组首地址为： " << (int)arr << endl;
	cout << "数组中第一个元素地址为： " << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为： " << (int)&arr[1] << endl;

	//arr = 100; 错误，数组名是常量，因此不可以赋值

	return 0;
}

int main_5_1_3()
{
	int arr[10] = { 4,2,8,0,5,7,1,3,9,6 };

	int i = 0;
	for (i = 0; i < 10 - i; i++)
	{
		int j = 0;
		for (j = 0; j < 10 - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}