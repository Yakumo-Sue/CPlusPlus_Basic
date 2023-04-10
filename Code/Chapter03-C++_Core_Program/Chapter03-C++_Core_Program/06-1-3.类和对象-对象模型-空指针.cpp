#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//空指针访问成员函数
class Person08 {
public:

	void ShowClassName() {
		cout << "我是Person类!" << endl;
	}

	void ShowPerson() {
		if (this == NULL) {
			return;
		}
		cout << mAge << endl;
	}

public:
	int mAge;
};

void test01()
{
	Person08* p = NULL;
	p->ShowClassName(); //空指针，可以调用成员函数
	p->ShowPerson();  //但是如果成员函数中用到了this指针，就不可以了
}

int main_6_1_3() {

	test01();

	return 0;
}