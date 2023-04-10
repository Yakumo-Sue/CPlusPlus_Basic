#include "03-3-7.listPrintFn.h"

bool CompareList(int n1, int n2)
{
	return n1 > n2;
}

int main()
{
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);
	printList(L);

	// 1. 反转
	L.reverse();
	printList(L);

	// 2. 排序
	// 默认从小到大
	L.sort();
	printList(L);
	// 自定义规则：从大到小
	L.sort(CompareList);
	printList(L);

	return 0;
}