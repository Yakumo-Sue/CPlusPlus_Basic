#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

class RandomPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

int main()
{
	srand((unsigned int)time(NULL));

	vector<int> v;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), RandomPrint());
	cout << endl;

	//打乱顺序
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), RandomPrint());
	cout << endl;

	return 0;
}