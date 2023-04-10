#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main_3_2()
{
	// =
	int a = 10;
	// 将之前的值进行覆盖
	a = 100;
	cout << "a = " << a << endl;

	// +=
	a = 10;
	a += 2;
	cout << "a = " << a << endl;

	// -=
	a = 10;
	a -= 2;
	cout << "a = " << a << endl;

	// *=
	a = 10;
	a *= 2;
	cout << "a = " << a << endl;

	// /=
	a = 10;
	a /= 2;
	cout << "a = " << a << endl;

	// %=
	a = 10;
	a %= 3;
	cout << "a = " << a << endl;

	return 0;
}