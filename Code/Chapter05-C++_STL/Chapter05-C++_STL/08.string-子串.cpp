#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 引入 string 库
#include <string>
using namespace std;

int main03_1_8()
{
	// string substr(int pos = 0, int n = npos) const;
	string str1 = "abcdefg";
	string subStr1 = str1.substr(1, 4);
	cout << "subStr1：" << subStr1 << endl;

	// 获取邮箱@前的数据
	string email = "heloWld@email.com";
	int pos = email.find("@");
	string username = email.substr(0, pos);
	cout << "Username：" << username << endl;

	return 0;
}