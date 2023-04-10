#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// 自定义数据类型
class CountData
{
public:
	CountData(int val)
	{
		this->id = val;
	}

	// 重构 == 
	bool operator==(const CountData& c)
	{
		if (this->id == c.id)
		{
			return true;
		}
		return false;
	}

	int id;
};

int main()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(4);

	int num = count(v1.begin(), v1.end(), 4);

	cout << "4的个数为： " << num << endl;

	vector<CountData> v2;
	// 创建类数据
	CountData c1(10);
	CountData c2(20);
	CountData c3(30);
	CountData c4(40);
	CountData c5(30);
	CountData c6(20);
	CountData c7(20);
	CountData c8(20);
	// 放入 容器
	v2.push_back(c1);
	v2.push_back(c2);
	v2.push_back(c3);
	v2.push_back(c4);
	v2.push_back(c5);
	v2.push_back(c6);
	v2.push_back(c7);
	v2.push_back(c8);

	CountData c(20);

	int countNum = count(v2.begin(), v2.end(), c);

	cout << "num = " << countNum << endl;

	return 0;
}