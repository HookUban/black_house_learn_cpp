//#include <iostream>
//using namespace std;
//#include <map>
//
//
//void printMap(const map<int, int>& m)
//{
//	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << (*it).second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	printMap(m);
//
//
//	// ¿½±´¹¹Ôì
//	map<int, int> m2(m);
//	printMap(m2);
//
//	map<int, int> m3;
//	m3 = m2;
//	printMap(m3);
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