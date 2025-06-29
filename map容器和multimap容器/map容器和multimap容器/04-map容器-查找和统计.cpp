//#include <iostream>
//using namespace std;
//#include <map>
//
//void test01()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	map<int,int>::iterator pos = m.find(3);
//	if (pos != m.end())
//	{
//		cout << "找到了" << endl;
//		cout << (*pos).first << ":" << pos->second << endl;
//	}
//	else
//	{
//		cout << "没找到" << endl;
//	}
//	
//	// 统计
//	int num = m.count(3);
//	cout << "num:" << num << endl;
//
//}
//
//
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}