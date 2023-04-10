#include "03-3-7.listPrintFn.h"

int main()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	// 判断空
	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		// 输出大小
		cout << "L1的大小为： " << L1.size() << endl;
	}

	// 重新指定大小
	L1.resize(10);
	printList(L1);


	return 0;
}