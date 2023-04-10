#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main_4_1_3()
{
	int score = 0;
	cout << "请输入电影评分(1~9)：" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "经典" << endl;
		break;
	case 8:
		cout << "非常好" << endl;
		break;
	case 7:
	case 6:
		cout << "一般" << endl;
		break;
	default:
		cout << "烂片" << endl;
		break;
	}

	return 0;
}