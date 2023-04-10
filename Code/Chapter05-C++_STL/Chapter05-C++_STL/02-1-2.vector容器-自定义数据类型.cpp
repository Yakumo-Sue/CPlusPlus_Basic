#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 1. 引入 vector 
#include <vector>
using namespace std;

class vectorClass
{
public:
	vectorClass(string name, int age) {
		mName = name;
		mAge = age;
	}
public:
	string mName;
	int mAge;
};

int main02_1_2()
{
	// 1. 创建容器
	vector<vectorClass> VC;
	// 2. 创建数据
	vectorClass VC1("aaa", 10);
	vectorClass VC2("bbb", 20);
	vectorClass VC3("ccc", 30);
	vectorClass VC4("ddd", 40);
	vectorClass VC5("eee", 50);

	// 3. 存放数据
	VC.push_back(VC1);
	VC.push_back(VC2);
	VC.push_back(VC3);
	VC.push_back(VC4);
	VC.push_back(VC5);

	// 遍历输出
	vector<vectorClass>::iterator it;
	for (it = VC.begin(); it != VC.end(); it++)
	{
		cout << "Name:" << (*it).mName << " Age:" << (*it).mAge << endl;
	}

	return 0;
}