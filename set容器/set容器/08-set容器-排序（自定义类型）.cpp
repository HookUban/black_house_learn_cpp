#include <iostream>
using namespace std;
#include <set>

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


class comparePesron
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		// 按照年龄 降序
		return p1.m_Age > p2.m_Age;
		
	}
};


void test01()
{

	// 自定义的数据类型，都会指定排序规则
	set<Person, comparePesron> s;

	Person p1("刘备", 24);
	Person p2("关羽", 20);
	Person p3("张飞", 26);
	Person p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}

}


int main()
{
	test01();

	system("pause");
	return 0;
}