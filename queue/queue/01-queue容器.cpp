#include <iostream>
using namespace std;

#include <queue>
#include <string>
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};


void test01()
{
	queue<Person> q;

	// 准备数据
	Person p1("唐僧", 20);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 800);
	Person p4("沙僧", 500);

	// 入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	// 判断只要队列不为空，查看队头，查看队尾，出队
	cout << "队列人数:" << q.size() << endl;
	while (!q.empty())
	{
		// 查看队头
		cout << "队头元素--姓名：" << q.front().m_Name << "年龄：" << q.front().m_Age << endl;
		// 查看队尾
		cout << "队尾元素--姓名：" << q.back().m_Name << "年龄：" << q.back().m_Age << endl;

		// 出队
		q.pop();
	}

	cout << "队列人数:" << q.size() << endl;
}


int main()
{
	test01();

	system("pause");
	return 0;
}