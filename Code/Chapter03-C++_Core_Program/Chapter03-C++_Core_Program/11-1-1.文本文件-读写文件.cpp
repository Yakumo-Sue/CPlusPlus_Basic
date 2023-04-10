#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main_open_file()
{
	// 1. 创建流对象
	ofstream ofs;
	// 2. 打开文件
	ofs.open("test.txt", ios::out);

	// 写入信息
	ofs << "姓名：ZC" << endl;
	ofs << "性别：Female" << endl;
	ofs << "Age：22" << endl;

	// 4. 关闭文件
	ofs.close();

	return 0;
}

int main()
{
	// 1. 创建浏
	ifstream ifs;
	// 2. 打开文件
	ifs.open("test.txt", ios::in);
	// 3. 判断
	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return 0;
	}
	// 4.1 查看方式一
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	// 4.2 查看方式二
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	// 4.3 查看方式三
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	// 4.4 查看方式四
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	// 5. 关闭
	ifs.close();

	return 0;
}