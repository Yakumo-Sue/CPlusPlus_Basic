#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main03_0()
{

	// 1. pair<type, type> p ( value1, value2 );
	pair<string, int> p1(string("Tom"), 20);
	cout << "姓名： " << p1.first << " 年龄： " << p1.second << endl;

	// 2. pair<type, type> p = make_pair( value1, value2 );
	pair<string, int> p2 = make_pair("Jason", 30);
	cout << "姓名： " << p2.first << " 年龄： " << p2.second << endl;

	return 0;
}