#include "03-3-3.dequePrint.h"

int main03_3_1()
{
	// 方法一：deque<T>
	deque<int> d1;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	// 输出
	printDeque(d1);

	// 方法二：deque(beg, end);
	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	// 方法三：deque(n, elem);
	deque<int> d3(10, 20);
	printDeque(d3);

	// 方法四：deque(const deque &deq);
	deque<int> d4(d3);
	printDeque(d4);

	return 0;
}