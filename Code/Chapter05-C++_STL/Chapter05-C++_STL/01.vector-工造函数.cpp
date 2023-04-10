#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 1. 引入 vector 库
#include <vector>
using namespace std;

void printVector(vector<int>& v)
{
	// 1. 输出方式通过迭代器
	vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main03_2_1()
{
	// vector<T> v;
	vector<int> v1;

	// 遍历传参
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	// 输出
	printVector(v1);

	// vector(v.begin(), v.end()); 拷贝
	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	// vector(n, elem);
	vector<int> v3(10, 3);
	printVector(v3);

	// vector(const vector &vec);
	vector<int> v4(v3);
	printVector(v4);

	return 0;
}