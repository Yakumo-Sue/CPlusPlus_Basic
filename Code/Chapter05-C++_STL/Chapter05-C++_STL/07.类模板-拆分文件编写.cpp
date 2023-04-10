#define _CRT_SECURE_NO_WARNINGS 1
#include "split.hpp"

// 解决方式1：直接包含.cpp源文件
// 解决方式2：将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制

int main01_2_7()
{
	splitTemplate<string, int> sptemp("Tim", 123);
	sptemp.showPerson();

	return 0;
}