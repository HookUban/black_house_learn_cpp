//#include <iostream>
//using namespace std;
//
//// 函数模板注意事项
//
//template<class T> // typename 可以替换为class
//
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//// 1.自动类型推导，必须推导出一致的数据类型T才可以使用
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << a << " " << b << endl;
//	//mySwap(a, b); // 正确
//	//mySwap(a, c); // 错误， 推导出不一致的T类型
//	cout << a << " " << b << endl;
//
//}
//
//// 2.模板必须要确定出T的数据类型，才可以使用
//
//template<class T>
//void func()
//{
//	cout << "func调用" << endl;
//}
//
//void test02()
//{	
//	func<int>();
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}