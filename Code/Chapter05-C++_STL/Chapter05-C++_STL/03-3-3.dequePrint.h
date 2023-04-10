#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 1. 引入 deque 
#include <deque>
using namespace std;

// 函数用于输出 deque 中存的数据
void printDeque(const deque<int>& d)
{
	// 定义迭代器
	deque<int>::const_iterator it;
	// 循环遍历
	for (it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}