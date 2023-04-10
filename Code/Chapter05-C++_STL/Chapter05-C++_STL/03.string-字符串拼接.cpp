#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 引入 string 库
#include <string>
using namespace std;

int main03_1_3()
{
	// string& operator+=(const char* str);
	string str1 = "hello";
	str1 += " world";
	cout << "str1：" << str1 << endl;

	// string& operator+=(const char c);
	str1 += '!!';
	cout << "str2：" << str1 << endl;

	// string& operator+=(const string& str);
	string str2 = ", 123321";
	str1 += str2;
	cout << "str2：" << str1 << endl;

	// string& append(const char *s);
	string str3;
	str3.append("append char");
	cout << "str3：" << str3 << endl;

	// string& append(const char *s, int n);
	string str4;
	str4.append("hello, world", 5);
	cout << "str4：" << str4 << endl;

	// string& append(const string &s);
	string str5;
	str5.append(str4);
	cout << "str5：" << str5 << endl;

	// string& append(const string &s, int pos, int n);
	string str6;
	str6.append(str3, 0,6);
	cout << "str6：" << str6 << endl;

	return 0;
}