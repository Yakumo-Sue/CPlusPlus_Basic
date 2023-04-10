#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 定义类模板
template<class T>
class arrFn
{
public:
	// 定义构造函数
	arrFn(int capacity);

	// 拷贝构造函数
	arrFn(const arrFn& arr);
	
	// operator 重载 = ；防止浅拷贝
	arrFn& operator=(const arrFn& arr)
	{
		cout << "重载区" << endl;
		// 先判断原堆区是否有数据
		// 有释放
		if (this->Address != NULL)
		{
			delete[] this->Address;
			this->Address = NULL;
			this->Capacity = 0;
			this->Size = 0;
		}
		// 无则重新开辟
		this->Capacity = arr.Capacity;
		this->Size = arr.Size;
		this->Address = new T[arr.Capacity];

		// 将 arr 中的数据进行拷贝
		int i = 0;
		for (i = 0; i < this->Size; i++)
		{
			this->Address[i] = arr.Address[i];
		}
		return *this;
	}
	// operator 重载 []；
	T& operator[](int index)
	{
		return this->Address[index];
	}

	// 尾插法
	void push(const T& value);
	// 尾删法
	void pop(const T& value);
	//获取数组容量
	int getCapacity();
	//获取数组大小
	int	getSize();

	// 析构函数释放
	~arrFn();

private:
	T* Address;		// 指针指向堆区开辟的真实数组
	int Capacity;	// 数组容量
	int Size;		// 数组大小
};

// 类外声明类模板的构造函数
template<class T>
arrFn<T>::arrFn(int capacity)
{
	cout << "构造函数" << endl;
	this->Capacity = capacity;
	this->Size = 0;
	this->Address = new T[this->Capacity];
}

// 类外声明类模板的拷贝构造函数
template<class T>
arrFn<T>::arrFn(const arrFn& arr)
{
	cout << "拷贝函数" << endl;
	this->Capacity = arr.Capacity;
	this->Size = arr.Size;
	// this->Address = arr.Address;
	// 进行深拷贝
	this->Address = new T[arr.Capacity];
	// 将 arr 中的数据进行拷贝
	int i = 0;
	for (i = 0; i < this->Size; i++)
	{
		this->Address[i] = arr.Address[i];
	}
}

// 类外声明类模板的成员函数
template<class T>
void arrFn<T>::push(const T& value)
{
	// 判断容器大小
	if (this->Capacity == this->Size)
	{
		return;
	}
	// 插入
	this->Address[this->Size] = value;
	this->Size++;
}

template<class T>
void arrFn<T>::pop(const T& value)
{
	// 判断容器大小
	if (this->Size == 0)
	{
		return;
	}
	// 删除
	this->Size--;
}

template<class T>
int arrFn<T>::getCapacity()
{
	return this->Capacity;
}

template<class T>
int arrFn<T>::getSize()
{
	return this->Size;
}


// 类外声明类模板的析构函数
template<class T>
arrFn<T>::~arrFn()
{
	cout << "析构函数" << endl;
	if (this->Address != NULL)
	{
		delete[] this->Address;
		this->Address = NULL;
		this->Capacity = 0;
		this->Size = 0;
	}
}