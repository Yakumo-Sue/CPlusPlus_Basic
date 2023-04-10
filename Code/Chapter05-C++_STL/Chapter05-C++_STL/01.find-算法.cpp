#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// 自定义数据查找
class FindData
{
public:
	FindData(int id)
	{
		this->F_id = id;
	}

	// 重构 ==
	bool operator==(const FindData& f)
	{
		if (this->F_id == f.F_id)
		{
			return true;
		}
		return false;
	}

	int F_id;
};

int main()
{
	// 定义类组
	FindData f1(10);
	FindData f2(20);
	FindData f3(30);
	FindData f4(40);
	FindData f5(50);

	// 放入 vector 容器
	vector<FindData> v;
	v.push_back(f1);
	v.push_back(f2);
	v.push_back(f3);
	v.push_back(f4);
	v.push_back(f5);

	// 查找
	vector<FindData>::iterator it = find(v.begin(), v.end(), f3);
	if (it != v.end())
	{
		cout << "找到了，ID为：" << it->F_id << endl;
	}
	else
	{
		cout << "未找到！" << endl;
	}

	return 0;
}