//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//
//	int num = count(v.begin(), v.end(), 40);
//
//	cout << "40的元素个数:" << num << endl;
//
//
//}
//
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//
//	}
//	bool operator==(const Person& p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//// 统计自定义类型
//void test02()
//{
//	vector<Person> v;
//
//	Person p1("刘备", 10);
//	Person p2("关羽", 10);
//	Person p3("张飞", 10);
//	Person p4("赵云", 40);
//	Person p5("曹操", 3);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person p("诸葛亮", 10);
//	int ret = count(v.begin(), v.end(), p);
//	cout << "和诸葛亮同岁数的人员个数:" << ret << endl;
//
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}