#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// 定义输出函数
template<typename T>
void forEachPrint(T val)
{
	cout << val << " ";
}

// 定义仿函数输出方式
template<class T>
class ForEachPrint
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
	vector<int> vi;
	
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		vi.push_back(i);
	}
	
	// 遍历 1
	for_each(vi.begin(), vi.end(), forEachPrint<int>);
	cout << endl;

	// 遍历 2
	for_each(vi.begin(), vi.end(), ForEachPrint<int>());
	cout << endl;

	return 0;
}