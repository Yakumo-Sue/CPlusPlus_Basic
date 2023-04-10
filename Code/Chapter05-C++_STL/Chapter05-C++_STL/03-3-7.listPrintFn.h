#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 1. 引入 list 库
#include <list>
using namespace std;

void printList(const list<int>& l)
{
	// 定义迭代器
	list<int>::const_iterator it;
	for (it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}