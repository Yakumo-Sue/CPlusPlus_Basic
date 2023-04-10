#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 创建命名空间
using namespace std;

int main_2_3()
{
	float fl = 3.14f;
	double dl = 3.14;

	cout << fl << endl;
	cout << dl << endl;

	cout << "float  sizeof = " << sizeof(fl) << endl;
	cout << "double sizeof = " << sizeof(dl) << endl;

	// 科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2 
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;  // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;

	return 0;
}