#include "01-3-1.ArrayFn.hpp"

//测试自定义数据类型
class testClass {
public:
	testClass() {}
	testClass(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};
void printPersonArray(arrFn<testClass>& testArr)
{
	for (int i = 0; i < testArr.getSize(); i++) {
		cout << "姓名：" << testArr[i].m_Name << " 年龄： " << testArr[i].m_Age << endl;
	}

}

void printIntArray(arrFn<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main01_3_1()
{
	//arrFn<int> arr01(5);
	//arrFn<int> arr02(arr01);
	//arrFn<int> arr03(100);

	//arr03 = arr01;

	//创建数组
	arrFn<testClass> pArray(10);
	testClass p1("孙悟空", 30);
	testClass p2("韩信", 20);
	testClass p3("妲己", 18);
	testClass p4("王昭君", 15);
	testClass p5("赵云", 24);

	//插入数据
	pArray.push(p1);
	pArray.push(p2);
	pArray.push(p3);
	pArray.push(p4);
	pArray.push(p5);

	printPersonArray(pArray);

	cout << "pArray的大小：" << pArray.getSize() << endl;
	cout << "pArray的容量：" << pArray.getCapacity() << endl;

	return 0;
}