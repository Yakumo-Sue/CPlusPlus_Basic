#include "03-3-7.listPrintFn.h"

int main()
{
	// 创建 list
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	// 1. 赋值
	// list& operator=(const list &lst);
	list<int> L2;
	L2 = L1;
	printList(L2);

	// assign(beg, end);
	list<int> L3;
	L3.assign(L1.begin(), L1.end());
	printList(L3);

	// assign(n, elem);
	list<int> L4;
	L4.assign(5,10);
	printList(L4);

	// 2. 交换
	// swap(lst);
	list<int> L5;
	L5.assign(10, 5);

	cout << "交换前： " << endl;
	printList(L1);
	printList(L5);

	L1.swap(L5);

	cout << "交换后： " << endl;
	printList(L1);
	printList(L5);


	return 0;
}