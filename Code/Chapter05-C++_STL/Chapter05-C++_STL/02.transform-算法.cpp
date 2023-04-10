#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// 转移
template<class T>
class TransForm
{
public:
	T operator()(T val)
	{
		return val;
	}
};

// 定义仿函数输出方式
template<class T>
class TransformPrint
{
public:
	void operator()(T val)
	{
		cout << val << " ";
	}
};

int main()
{
	// 定义 vector 容器
	vector<int> vi1;

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		vi1.push_back(i);
	}

	// 定义转移容器
	vector<int> vi2;
	vi2.resize(vi1.size());

	// 使用转移算法
	transform(vi1.begin(), vi1.end(), vi2.begin(), TransForm<int>());

	// 遍历 vi2
	for_each(vi2.begin(), vi2.end(), TransformPrint<int>());


	return 0;
}