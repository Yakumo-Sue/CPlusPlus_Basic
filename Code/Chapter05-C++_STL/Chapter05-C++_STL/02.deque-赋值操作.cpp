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

	// deque& operator=(const deque &deq);
	deque<int> d2;
	d2 = d1;
	printDeque(d2);

	// assign(beg, end);
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

	// assign(n, elem);
	deque<int> d4;
	d4.assign(1,10);
	printDeque(d4);

	return 0;
}