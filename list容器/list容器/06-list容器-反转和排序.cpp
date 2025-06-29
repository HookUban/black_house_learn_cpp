//#include <iostream>
//using namespace std;
//#include <list>;
//
//
//
//
//void printList(const list<int> L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//bool myCompare(int v1, int v2)
//{
//	// 降序 ，就让第一个数大于第二个数
//	return v1 > v2;
//}
//
//void test01()
//{
//	list<int>L1;
//
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	printList(L1);
//
//	// 反转
//	L1.reverse();
//	printList(L1);
//
//	L1.sort();
//	printList(L1);
//
//	L1.sort(myCompare);
//	printList(L1);
//
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}