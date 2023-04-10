#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

int main03_2_4()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		// push_back(ele);
		v1.push_back(i);
	}
	// pop_back();
	v1.pop_back();
	// 定义迭代器
	vector<int>::iterator it;
	// 循环 vector
	for (it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// insert(const_iterator pos, ele);
	v1.insert(v1.begin(), 10);
	// 循环 vector
	for (it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// insert(const_iterator pos, int count,ele);
	v1.insert(v1.begin(), 2, 1000);
	for (it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// erase(const_iterator pos);
	v1.erase(v1.begin());
	for (it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// erase(const_iterator start, const_iterator end);
	v1.erase(v1.begin(), v1.end());
	v1.clear();
	for (it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;


	return 0;
}