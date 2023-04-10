#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 引入 string 库
#include <string>
using namespace std;

int main03_1_6()
{
	string str1 = "helol, wqeewq";

	int i = 0;
	for (i = 0; i < str1.size(); i++)
	{
		cout << str1[i] << " ";
	}
	cout << endl;

	for (i = 0; i < str1.size(); i++)
	{
		cout << str1.at(i) << " ";
	}
	cout << endl;

	// 修改
	str1[0] = 'A';
	str1.at(3) = 'B';

	cout << str1 << endl;

	return 0;
}