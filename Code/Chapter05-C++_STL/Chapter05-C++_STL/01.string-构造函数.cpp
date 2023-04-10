#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 引入 string 库
#include <string>
using namespace std;

int main03_1_1()
{
	// 1. 创建空字符串
	// string()
	string str1;
	cout << "str1：" << str1 << endl;

	// string(const char* s)
	const char* str2 = "hello string";
	string s2(str2);
	cout << "str2：" << s2 << endl;

	// 直接调用拷贝函数
	// string(const string& str);
	string s3(s2);
	cout << "str3：" << s3 << endl;

	// string(int n, char c)
	string s4(10, 'd');
	cout << "str4：" << s4 << endl;

	return 0;
}