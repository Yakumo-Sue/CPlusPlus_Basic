#include "03-3-3.dequePrint.h"

int main()
{
	deque<int> d1;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	// 判断是否为空
	if (d1.empty())
	{
		cout << "d1为空!" << endl;
	}
	else
	{
		cout << "d1不为空!" << endl;
		//统计大小
		cout << "d1的大小为：" << d1.size() << endl;
	}

	// 重新指定大小
	d1.resize(15, 1);
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);


	return 0;
}