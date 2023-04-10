#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <math.h>
#include <algorithm>
using namespace std;

// 1. 定义选手类
class Player
{
public:
	Player(string n, int s)
	{
		this->name = n;
		this->score = s;
	}

	string name;
	int score;
};

// 2. 创建选手
void createPlayer(vector<Player>& p)
{
	// 选手编号
	string nameSeed = "ABCDE";
	// 遍历赋值
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		// 分数初始化
		int score = 0;
		Player p1(name, score);
		// 输入到 vector 容器
		p.push_back(p1);
	}
}

// 3. 评委打分(随机)
void setScore(vector<Player>& p)
{
	// 定义 player 迭代器
	vector<Player>::iterator itVec;
	// 遍历
	for (itVec = p.begin(); itVec != p.end() ; itVec++)
	{
		// 使用 deque 存放分数
		deque<int> d;
		// 遍历并存入 10 位随机数
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			// 60 ~ 100
			int score = rand() % 41 + 60;
			// 存入 deque
			d.push_back(score);
		}
		// 排序
		sort(d.begin(), d.end());
		// 去除最高和最低
		d.pop_back();
		d.pop_front();
		// 用于合集所有分数
		int sum = 0;
		// 定义 deque 迭代器
		deque<int>::const_iterator itDeq;
		for (itDeq = d.begin(); itDeq != d.end(); itDeq++)
		{
			sum += *itDeq;
		}
		// 求平均分
		int avg = sum / d.size();
		// 赋值过去
		itVec->score = avg;
	}
}

// 4. 展示分数
void showScore(vector<Player>& v)
{
	vector<Player>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名： " << it->name << endl;
		cout << "平均分： " << it->score << endl;
	}
}

int main03_4_1()
{
	// 随机数种子
	srand((unsigned int)time(NULL));
	//1、创建5名选手
	vector<Player>v;  //存放选手容器

	// 创建
	createPlayer(v);
	// 打分
	setScore(v);
	// 展示
	showScore(v);

	return 0;
}