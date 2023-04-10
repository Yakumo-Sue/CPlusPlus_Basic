#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 引入 string 库
#include <string>
using namespace std;

int main03_1_5()
{
	string str1 = "aello";
	string str2 = "hello";

	// int compare(const string &s) const;
	int result = str1.compare(str2);

	// 判断
	if (result == 0)
	{
		cout << "str1 == str2" << endl;
	}
	else if (result > 0)
	{
		cout << "str1 > str2" << endl;
	}
	else
	{
		cout << "str1 < str2" << endl;
	}

	return 0;
}