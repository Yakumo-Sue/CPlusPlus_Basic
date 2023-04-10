#include "03-3-3.dequePrint.h"

int main()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	int i = 0;
	for (i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	for (i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	cout << "front:" << d1.front() << endl;

	cout << "back:" << d1.back() << endl;

	return 0;
}