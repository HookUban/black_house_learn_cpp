#include<iostream>
using namespace std;
#include <list>

void test01()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	cout<<L1.back()<<endl;
	cout << L1.front() << endl;

	// 验证迭代器是不支持随机访问的
	list<int>::iterator it = L1.begin();

	it++;

}

int main()
{
	test01();

	system("pause");
	return 0;
}