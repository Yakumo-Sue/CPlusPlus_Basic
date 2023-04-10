#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

// 深拷贝
class DeepCopy
{
public:
	DeepCopy()
	{
		cout << "DeepCopy(深拷贝)的默认构造函数调用" << endl;
	};
	DeepCopy(int num, int ark)
	{
		Num = num;
		// 通过 new 关键字 将ark存放到堆区域
		Ark =  new int(ark);
		cout << "DeepCopy(深拷贝)的默认构造函数调用" << endl;
	};
	// 实现拷贝构造函数
	DeepCopy(const DeepCopy& dp)
	{
		cout << "DeepCopy(深拷贝)的拷贝构造函数调用" << endl;
		Num = dp.Num;
		// 编译器默认实现
		// Ark = dp.Ark;
		// 实现深拷贝
		Ark = new int(*dp.Ark);
	}
	// 析构函数通常用来销毁，开发人员创建的数据
	~DeepCopy()
	{
		// 释放数据
		if (Ark != NULL)
		{
			delete Ark;
			Ark = NULL;
		}
		cout << "DeepCopy(深拷贝)的析构函数调用" << endl;
	};
public:
	int Num;
	int *Ark;
};
void DP01()
{
	DeepCopy DC1(10, 123);

	cout << "DP01 的 num：" << DC1.Num << endl;
	cout << "DC1 的 Ark：" << *DC1.Ark << endl;

	// 拷贝函数会做 浅拷贝操作
	DeepCopy DC2(DC1); 

	cout << "DP02 的 num：" << DC2.Num << endl;
	cout << "DC2 的 Ark：" << *DC2.Ark << endl;

}

// 浅拷贝
class ShallowCopy
{
public:
	ShallowCopy()
	{
		cout << "ShallowCopy(浅拷贝)的默认构造函数调用" << endl;
	};
	ShallowCopy(int num, int ark)
	{
		Num = num;
		cout << "ShallowCopy(浅拷贝)的默认构造函数调用" << endl;
	};
	~ShallowCopy()
	{
		cout << "ShallowCopy(浅拷贝)的析构函数调用" << endl;
	};
public:
	int Num;
	int* Ark;
};
void SP01()
{
	ShallowCopy SP1(10, 123);
	cout << "SP1 的 num：" << SP1.Num << endl;

	ShallowCopy SP2(SP1);
	cout << "SP2 的 num：" << SP2.Num << endl;

}

int main_5_1_5()
{
	// 深拷贝调用
	DP01();
	// 浅拷贝调用
	//SP01();

	system("pause");

	return 0;
}