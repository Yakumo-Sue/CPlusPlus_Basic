#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
// 1. 引入 vector 
#include <vector>
using namespace std;

int main02_1_3()
{
	vector< vector<int> >  v;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	for (int i = 0; i < 4; i++) {
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	//将容器元素插入到vector v中
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	vector<vector<int>>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		vector<int>::iterator vit;
		for (vit = (*it).begin(); vit != (*it).end(); vit++) {
			cout << *vit << " ";
		}
		cout << endl;
	}

	return 0;
}