//#include <iostream>
//using namespace std;
//
//
//
///*
//
//- ����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//- �������󳬳���ͨ�����ĸ����������������Լ���״̬
//- �������������Ϊ��������
//
//*/
//
//
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//
//void test01()
//{
//	MyAdd myadd;
//	cout << myadd(10, 10);
//
//
//}
//
//// 2
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//
//
//	int count = 0;
//};
//
//
//
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("hello, world");
//	myPrint("hello, world");
//	myPrint("hello, world");
//	myPrint("hello, world");
//	myPrint("hello, world");
//
//	cout << "myPrint���õĴ����Ƕ��٣�" << myPrint.count << endl;
//
//}
//
//
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
//// 3
//void test03()
//{
//	MyPrint myPrint;
//
//	doPrint(myPrint, "Hello C++");
//}
//
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}