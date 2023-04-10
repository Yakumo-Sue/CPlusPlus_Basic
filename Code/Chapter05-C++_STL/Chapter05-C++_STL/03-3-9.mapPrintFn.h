#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, int>& m)
{
	// 定义迭代器
	map<int, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}