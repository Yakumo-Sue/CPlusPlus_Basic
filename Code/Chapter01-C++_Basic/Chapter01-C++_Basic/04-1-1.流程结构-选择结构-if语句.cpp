#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main_4_1_1()
{
	int score = 0;
	cout << "请输入一个数值：" << endl;
	cin >> score;

	cout << "您输入的分数为： " << score << endl;
	if (score >= 90)
	{
		cout << "优秀";
	}
	else if (score >= 80 && score < 90)
	{
		cout << "良";
	}
	else if (score >= 70 && score < 80)
	{
		cout << "还行";
	}
	else if (score >= 60 && score < 70)
	{
		cout << "及格";
	}
	else
	{
		cout << "不及格";
	}

	return 0;
}