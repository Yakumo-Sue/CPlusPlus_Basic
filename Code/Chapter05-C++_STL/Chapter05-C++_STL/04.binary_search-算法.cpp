#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// 二分查找
	bool result = binary_search(v.begin(), v.end(), 2);

	if (result)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

	return 0;
}