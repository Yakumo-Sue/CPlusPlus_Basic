#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Cube
{
public:
	// 设置长并获取长
	void setLong(int inputLong)
	{
		Long = inputLong;
	}
	int getLong()
	{
		return Long;
	}
	// 设置宽并获取宽
	void setWidth(int inputWidth)
	{
		Width = inputWidth;
	}
	int getWidth()
	{
		return Width;
	}
	// 设置高并获取高
	void setHeight(int inputHeight)
	{
		Height = inputHeight;
	}
	int getHeight()
	{
		return Height;
	}
	// 获取面积和体积
	int Acreage()
	{
		if (Long == NULL || Width == NULL || Height == NULL)
		{
			cout << "请设置长宽高后在进行面积计算！！！" << endl;
			return 0;
		}
		int Area = 2 * (Long * Width + Long * Height + Width * Height);
		return Area;
	}
	int Volume()
	{
		if (Long == NULL || Width == NULL || Height == NULL)
		{
			cout << "请设置长宽高后在进行体积计算！！！" << endl;
			return 0;
		}
		return Long * Height * Width;
	}
private:
	int Long;		// 长
	int Width;		// 宽
	int Height;		// 高
};

void is_Same(Cube& cu1, Cube cu2);

int main_4_1_6()
{
	// 生成实例
	Cube c;
	// 设置长宽高
	c.setHeight(10);
	c.setLong(5);
	c.setWidth(7);
	// 输出长宽高
	cout << "长为：" << c.getLong() << endl;
	cout << "宽为：" << c.getWidth() << endl;
	cout << "高为：" << c.getHeight() << endl;
	// 输出面积
	cout << "面积为：" << c.Acreage() << endl;
	cout << "体积为：" << c.Volume() << endl;

	return 0;
}

void is_Same(Cube& cu1, Cube cu2)
{
	if (cu1.Acreage() == cu2.Acreage())
	{
		cout << "立方体面积相等" << endl;
		return;
	}
	cout << "不相等" << endl;
	return;
}