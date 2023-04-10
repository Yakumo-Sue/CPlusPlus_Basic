#include "03-3-8.setPrintFn.h"

int main()
{
	// 1. set<T> st
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet(s1);

	// 2. set(const set &st);
	set<int> s2(s1);
	printSet(s2);

	// set& operator=(const set &st);
	set<int>s3;
	s3 = s2;
	printSet(s3);

	return 0;
}