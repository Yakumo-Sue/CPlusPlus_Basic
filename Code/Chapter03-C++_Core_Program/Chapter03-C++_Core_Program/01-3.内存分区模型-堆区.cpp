#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int* func2()
{
	int* a = new int(10);
	return a;
}

int main_1_3() {
	int* p = func2();

	cout << *p << endl;
	cout << *p << endl;

	return 0;
}