//#include <iostream>
//using namespace std;
//#include <string>
//
//// ��ģ��ͺ���ģ������
//template <class NameType, class AgeType=int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name:" << this->m_Name << endl;
//		cout << "age:" << this->m_Age << endl;
//
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//// 1.��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//
//void test01()
//{
//	//Person p("�����", 999);// ������ģ��û���Զ������Ƶ�
//	Person<string, int> p("�����", 999); // ��ȷ,ֻ������ʾָ������
//	p.showPerson();
//}
//// 2.��ģ����ģ������б��п�����Ĭ�ϲ���
//
//void test02()
//{
//	Person<string> p("��˽�", 99);
//	p.showPerson();
//}
//
//int main()
//{
//	//test01(); 
//	test02();
//	system("pause");
//
//	return 0;
//}