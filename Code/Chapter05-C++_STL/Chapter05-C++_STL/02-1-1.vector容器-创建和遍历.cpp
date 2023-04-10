#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 1. 引入 vector 
#include <vector>
// 2. 引入 algorithm 使用 for_each
#include <algorithm>
using namespace std;

// 用于输出的函数
void printFn02(int val)
{
	cout << val << endl;
}

int main01_1_1()
{
	// 1. 创建 vector 容器，并且通过模板参数指定容器中存放的数据的类型
	vector<int> v;
	// 2. 从尾部插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// 每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
	// v.begin() 返回迭代器，这个迭代器指向容器中第一个数据
	// v.end() 返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
	// vector<int>::iterator 拿到vector<int>这种容器的迭代器类型

	// 第一种遍历方式：通过 while 循环遍历
	// 首先定义返回迭代器
	vector<int>::iterator vBegin = v.begin();
	vector<int>::iterator vEnd = v.end();
	// 其次循环
	while (vBegin != vEnd)
	{
		// 获取到的数据为地址 需要解引用
		cout << *vBegin << endl;
		vBegin++;
	}

	cout << "-------------隔离行--------------" << endl;

	// 第二种遍历方式：通过 for 循环遍历
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	cout << "-------------隔离行--------------" << endl;

	// 第三种遍历方式：通过内置 for_each 语法遍历
	// 第一个参数为容器的起始位置
	// 第二个参数为容器的末尾位置
	// 第三个参数为输出函数
	for_each(v.begin(), v.end(), printFn02);
	
	return 0;

}