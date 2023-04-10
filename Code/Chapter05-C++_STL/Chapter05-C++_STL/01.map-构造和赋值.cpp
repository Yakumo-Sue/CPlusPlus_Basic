#include "03-3-9.mapPrintFn.h"

int main()
{
	// 1. 构造
	// map<T1, T2> mp;
	map<int, int> m;
	// 添加
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	// 输出
	printMap(m);

	// map(const map &mp);
	map<int, int> m2(m);
	printMap(m2);

	// 2. 赋值
	map<int, int> m3;
	m3 = m2;
	printMap(m3);


	return 0;
}