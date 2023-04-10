#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

class House
{
	// 创建友元
	friend void Friend(House* house);
public:
	House()
	{
		this->livingRoom = "客厅";
		this->bedRoom = "卧室";
	}

// 定义成员属性
public:
	string livingRoom;
private:
	string bedRoom;
};

void Friend(House* house)
{
	cout << "访问：" << house->livingRoom << endl;
	// 友元创建后，即可访问私有属性
	cout << "访问：" << house->bedRoom << endl;
}

int main_7_1_1()
{
	// 创建类
	House house1;
	Friend(&house1);

	return 0;
}