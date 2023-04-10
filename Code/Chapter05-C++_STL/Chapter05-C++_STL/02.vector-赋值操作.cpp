#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

int main03_2_2()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int>::iterator it;
	for (it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// vector& operator=(const vector &vec);
	vector<int> v2;
	v2 = v1;
	for (it = v2.begin(); it != v2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// assign(beg, end);
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	for (it = v3.begin(); it != v3.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// assign(n, elem);
	vector<int> v4;
	v4.assign(10, 100);
	for (it = v4.begin(); it != v4.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}