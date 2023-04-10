#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

int main03_2_3()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	// empty();
	if (v1.empty())
	{
		cout << "v1 内容为空" << endl;
	}
	else
	{
		cout << "v1 不为空" << endl;
		// capacity();
		cout << "v1 的容量：" << v1.capacity() << endl;
		// size()
		cout << "v1 的大小：" << v1.size() << endl;
	}

	// resize 重新指定大小 ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
	v1.resize(15, 10);
	vector<int>::iterator it;
	for (it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// resize 重新指定大小 ，若指定的更小，超出部分元素被删除
	v1.resize(5);
	for (it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}