#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <functional>
using namespace std;

int main()
{
	// negate 取反
	negate<int> n;
	cout << n(29) << endl;

	// plus 加法
	plus<int> p;
	cout << p(29, 31) << endl;
	
	// minus 减法
	minus<int> mi;
	cout << mi(29, 19) << endl;

	// multiplies 乘法
	multiplies<int> mul;
	cout << mul(29, 3) << endl;

	// divides 除法
	divides<int> d;
	cout << d(21,7) << endl;

	// modulus 取模
	modulus<int> mod;
	cout << mod(29, 2) << endl;

	return 0;
}