#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
using namespace std;

int main03_5_1()
{
	// stack<T> stk
	stack<int> s;

	// push(elem);
	s.push(1);
	s.push(2);
	s.push(3);
	cout << "栈的大小为：" << s.size() << endl;

	// empty();
	while (!s.empty())
	{
		// 输出栈顶元素
		cout << "栈顶元素为： " << s.top() << endl;
		// 弹出栈顶元素
		s.pop();
	}

	cout << "栈的大小为：" << s.size() << endl;

	return 0;
}