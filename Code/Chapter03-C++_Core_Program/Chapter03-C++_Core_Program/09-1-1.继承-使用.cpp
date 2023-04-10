#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// 公共类
class Language
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}

	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
	}
	void left()
	{
		cout << "Java,Python,C++...(公共分类列表)" << endl;
	}
};

// 继承公共类
class Java : public Language
{
public:
	void content()
	{
		cout << "JAVA学科视频" << endl;
	}
};
class Python : public Language
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};

class CPP : public Language
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};


int main_9_1_1()
{
	// 创建 Java 类
	Java ja;
	ja.header();
	ja.content();
	ja.left();
	ja.footer();
	cout << "--------------------" << endl;

	Python py;
	py.header();
	py.content();
	py.left();
	py.footer();
	cout << "--------------------" << endl;

	CPP cpp;
	cpp.header();
	cpp.content();
	cpp.left();
	cpp.footer();
	cout << "--------------------" << endl;

	return 0;
}