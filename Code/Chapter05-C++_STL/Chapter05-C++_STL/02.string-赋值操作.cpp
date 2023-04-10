#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 引入 string 库
#include <string>
using namespace std;

int main03_1_2()
{
	// string& operator=(const char* s);
	string str1 = "hello";
	str1 = "String, C++";
	cout << "str1：" << str1 << endl;

	// string& operator=(const string &s);
	string str2;
	str2 = str1;
	cout << "str2：" << str2 << endl;

	// string& operator=(char c);
	string str3;
	// 只能输出第一个字符
	str3 = 'AB';
	cout << "str3：" << str3 << endl;

	// tring& assign(const char *s);
	string str4;
	str4.assign("hello, C++");
	cout << "str4：" << str4 << endl;

	// string& assign(const char *s, int n);
	string str5;
	str5.assign("hello, C++", 5);
	cout << "str5：" << str5 << endl;

	// string& assign(const string &s);
	string str6;
	str6.assign(str5);
	cout << "str6：" << str6 << endl;

	// string& assign(int n, char c);
	string str7;
	// 递增对有一个字符
	str7.assign(10, 'sw');
	cout << "str7：" << str7 << endl;

	return 0;
}