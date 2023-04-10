#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 引入 string 库
#include <string>
using namespace std;

int main03_1_7()
{
	// string& insert(int pos, const char* s);
	string str1 = "qweqweqwe";
	str1.insert(2, "123");
	cout << "str1：" << str1 << endl;

	// string& erase(int pos, int n = npos);
	str1.erase(2, 3);
	cout << "str1：" << str1 << endl;

	return 0;
}