#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 利用函数模板封装一个排序的函数，可以对 不同数据类型数组 进行排序
// 排序规则从大到小，排序算法为选择排序
// 分别利用 char 数组和 int 数组进行测试

// 定义交换函数模板
template<typename T>
void swapTmplate(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

// 定义排序模板
template<typename T>
void sortTemplate(T arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int max = i;
		int j = 0;
		for (j = i + 1; j < len; j++)
		{
			// 判断数组内大小
			// 降序排列
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		// 如果最大数的下标不是i，交换两者
		if (max != i)
		{
			// 交换函数模板
			swapTmplate(arr[max], arr[i]);
		}
	}
}

// 定义输出模板
template<typename T>
void printTemplate(T arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main01_1_3()
{
	// 1. 测试 int 类型数据交换
	int intArr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6, 0 };
	// 2. 获取数组长度
	int lenInt = sizeof(intArr) / sizeof(int);
	// 调用函数模板
	sortTemplate(intArr, lenInt);
	printTemplate(intArr, lenInt);

	// 2. 测试 char 类型数据交换
	char charArr[] = "bdcfeagh";
	// 2. 获取数组长度
	int lenChar = sizeof(charArr) / sizeof(char);
	// 调用函数模板
	sortTemplate(charArr, lenChar);
	printTemplate(charArr, lenChar);

	return 0;
}