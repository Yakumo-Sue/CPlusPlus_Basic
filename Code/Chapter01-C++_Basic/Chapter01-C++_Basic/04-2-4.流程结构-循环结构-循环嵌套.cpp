#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main_4_2_4()
{
	//外层循环执行1次，内层循环执行1轮
	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}*/
	int i = 0;
	for ( i = 1; i < 10; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			cout << i << " * " << j << " = " << i * j << "  ";
		}
		cout << endl;
	}

	return 0;
}