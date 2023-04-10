#include "03-3-3.dequePrint.h"
#include <algorithm>

int main03_3_6()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	sort(d.begin(), d.end());
	printDeque(d);


	return 0;

}