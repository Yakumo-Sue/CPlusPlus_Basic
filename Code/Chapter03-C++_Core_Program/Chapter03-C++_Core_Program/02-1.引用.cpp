#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main_2_1()
{
	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}