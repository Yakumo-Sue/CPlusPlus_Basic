#include "03-3-7.listPrintFn.h"

int main()
{
	list<int> L;
	// 尾插
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	// 头插
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);
	printList(L);

	// 尾删
	L.pop_back();
	printList(L);

	// 头删
	L.pop_front();
	printList(L);

	// 插入
	list<int>::iterator it = L.begin();
	L.insert(++it, 1000);
	printList(L);

	// 删除
	it = L.begin();
	L.erase(++it);
	printList(L);

	//移除
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);
	L.remove(10000);
	printList(L);

	//清空
	L.clear();
	printList(L);

	return 0;
}