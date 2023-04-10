#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

int main03_2_5()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		// push_back(ele);
		v1.push_back(i);
	}
	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}

	// swap(vec);
	v1.swap(v2);

	// 定义迭代器
	vector<int>::iterator it;
	// 循环 vector
	for (it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	// 循环 vector
	for (it = v2.begin(); it != v2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}