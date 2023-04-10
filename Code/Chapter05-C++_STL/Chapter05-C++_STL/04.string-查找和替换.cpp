#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 引入 string 库
#include <string>
using namespace std;

int main03_1_4()
{
	// int find(const string& str, int pos = 0) const;
	string str1 = "abcdefghijklmn";
	int pos = str1.find("f");
	// 判断是否存在
	if (pos == -1)
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "position：" << pos << endl;
	}

	// int rfind(const string& str, int pos = 0) const;
	// rfind = right find
	pos = str1.rfind("jk");
	cout << "position：" << pos << endl;

	// string& replace(int pos, int n, const string& str);
	str1.replace(1, 3, "1111");

	cout << "str1：" << str1 << endl;

	return 0;
}