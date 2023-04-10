#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void BubbleSort(int* arr, int len);
void printArray(int arr[], int len);

int main_7_1_1()
{
	// 定义整形类型
	int a = 10;
	// 定义一个指针指向 a
	// 通过 & 获取 a 的内存地址
	int* p = &a;

	cout << "&a = " << &a << endl;
	cout << "p  = " << p << endl;

	// 指针的使用
	// 通过 *（解引用）方式操作指针变量指向内存
	cout << "*p = " << *p << endl;

	return 0;
}

int main_7_1_2()
{

	int a = 10;

	int* p;
	p = &a; //指针指向数据a的地址

	cout << *p << endl; //* 解引用
	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;

	return 0;
}

int main_7_1_3()
{
	// 指向的内存地址编号为 0 的空间
	int* p = NULL;

	cout << *p << endl;

	return 0;
}

int main_7_1_4()
{
	// 指针变量p指向内存地址编号为0x1100的空间
	int* p = (int*)0x1100;

	cout << *p << endl;

	return 0;
}

int main_7_1_5()
{
	int a = 10;
	int b = 10;

	// const 修饰的是指针，指针指向可以改，指针指向的值不可以更改
	const int* p1 = &a;
	p1 = &b;
	// *p1 = 100; // 报错

	// const 修饰的是常量，指针指向不可以改，指针指向的值可以更改
	int* const p2 = &a;
	// p2 = &b; // 错误
	*p2 = 100;  // 正确

	// const 既修饰指针又修饰常量
	const int* const p3 = &a;
	// p3 = &b;   // 错误
	// *p3 = 100; // 错误

	return 0;
}

int main_7_1_6()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;  //指向数组的指针

	cout << "第一个元素： " << arr[0] << endl;
	cout << "指针访问第一个元素： " << *p << endl;

	for (int i = 0; i < 10; i++)
	{
		//利用指针遍历数组
		cout << *p << endl;
		p++;
	}


	return 0;
}

int main_7_1_7()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(int);

	BubbleSort(arr, len);

	printArray(arr, len);
	
	return 0;
}

void BubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}