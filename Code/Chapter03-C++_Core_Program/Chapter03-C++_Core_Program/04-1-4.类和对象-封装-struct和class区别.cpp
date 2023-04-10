#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// struct 默认为公共权限
struct S1
{
	int  m_A; // 默认是公共权限
};
// class 默认为私有权限
class C1
{
	int m_A;  // 默认是私有权限
};

int main_4_1_4()
{
	C1 c1;
	//c1.m_A = 10; //错误，访问权限是私有

	S1 s1;
	s1.m_A = 10; //正确，访问权限是公共

	return 0;
}