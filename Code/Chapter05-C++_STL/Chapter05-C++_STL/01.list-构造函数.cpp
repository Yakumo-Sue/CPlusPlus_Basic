#include "03-3-7.listPrintFn.h"

int main()
{
	// 1. list<T> lst;
	list<int> lint1;
	lint1.push_back(1);
	lint1.push_back(2);
	lint1.push_back(3);
	lint1.push_back(4);
	// 输出
	printList(lint1);

	// 2. list(beg,end);
	list<int> lint2(lint1.begin(), lint1.end());
	printList(lint2);

	// 3. list(n,elem);
	list<int> lint3(10, 5);
	printList(lint3);

	// 4. list(const list &lst);
	list<int> lint4(lint3);
	printList(lint4);

	return 0;
}