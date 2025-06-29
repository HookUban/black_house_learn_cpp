//#include <iostream>
//using namespace std;
//#include <map>
//
//
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
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
//
//	string m_Name;
//	int m_Age;
//};
//
//
//
//void test01()
//{
//	map<int, int, MyCompare> m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(4, 40));
//	m.insert(make_pair(5, 50));
//
//	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key " << it->first << " value" << it->second << endl;
//	}
//	
//
//}
//
//
//class MyCompare01
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//		return p1.m_Age < p2.m_Age;
//	}
//};
//
//
//// 用于比较int键的比较器（这才是map需要的）
//class CompareInt {
//public:
//	bool operator()(int v1, int v2) const {
//		return v1 > v2;
//	}
//};
//
//void test02()
//{
//	Person p1("aaa", 15);
//	Person p2("bbb", 16);
//	Person p3("ccc", 17);
//	Person p4("ddd", 18);
//	Person p5("eee", 19);
//
//	map<Person, int, MyCompare01> m;
//
//	m.insert(make_pair(p1, 1));
//	m.insert(make_pair(p2, 2));
//	m.insert(make_pair(p3, 3));
//	m.insert(make_pair(p4, 4));
//	m.insert(make_pair(p5, 5));
//
//	for (map<Person, int, MyCompare01>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << it->first.m_Age << " " << it->first.m_Name << " : " << it->second << endl;
//	}
//
//}
//
//
//
//int main()
//{
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}