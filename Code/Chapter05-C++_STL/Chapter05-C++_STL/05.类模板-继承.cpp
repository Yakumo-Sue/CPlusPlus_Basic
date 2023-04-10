#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 定义父类模板
template<class T>
class Fa
{
	T f;
};

// 定义子类模板
// class Son:public Base  // 错误，c++ 编译需要给子类分配内存，必须知道父类中T的类型才可以向下继承
// 类模板继承类模板 ,可以用T2指定父类中的T类型
template<class T1, class T2>
class Son : public Fa<T2> // 必须指定一个类型
{
public:
	Son()
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
};

int main01_2_5()
{
	Son<int ,char> s;

	return 0;
}