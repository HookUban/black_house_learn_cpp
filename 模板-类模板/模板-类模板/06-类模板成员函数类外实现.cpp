//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//template <class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	//{
//	//	//this->m_Name = name;
//	//	//this->m_Age = age;
//	//}
//
//	void showPerson();
//	//{
//	//	//cout << "姓名是：" << this->m_Name << "年龄是:" << this->m_Age << endl;
//	//}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//// 构造函数的类外实现
//
//template <class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age; 
//}
//
//template <class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名是：" << this->m_Name << "年龄是:" << this->m_Age << endl;
//
//}
//
//
//void test01()
//{
//	Person<string, int> P("Tom", 20);
//	P.showPerson();
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}