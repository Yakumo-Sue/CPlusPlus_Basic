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

	// 尾插、尾删
	d1.push_back(10);
	d1.push_back(11);
	d1.pop_back();
	printDeque(d1);

	// 头插、头删
	d1.push_front(11);
	d1.push_front(12);
	d1.pop_front();
	printDeque(d1);

	// 添加 insert(pos,elem);
	d1.insert(d1.begin(), 20);
	printDeque(d1);

	// insert(pos,n,elem);
	d1.insert(d1.end(), 2, 100);
	printDeque(d1);

	// insert(pos,beg,end);
	deque<int> d2;
	d2.push_back(30);
	d2.push_back(40);
	d2.push_back(50);
	d2.push_back(60);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);

	// 删除 erase(beg,end);
	// d1.erase(d1.begin(), d2.end());
	// printDeque(d1);
	d1.clear();
	printDeque(d1);

	return 0;
}