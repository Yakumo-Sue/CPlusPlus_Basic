#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 1. 引入 set 库
#include <set>
#include <string>
using namespace std;

void printSet(set<int>& s)
{
	set<int>::iterator it;
	for (it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}