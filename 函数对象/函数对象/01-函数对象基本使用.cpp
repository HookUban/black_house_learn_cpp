//#include <iostream>
//using namespace std;
//
//
//
///*
//
//- 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//- 函数对象超出普通函数的概念，函数对象可以有自己的状态
//- 函数对象可以作为参数传递
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
//	cout << "myPrint调用的次数是多少：" << myPrint.count << endl;
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