//#include <iostream>
//
//using namespace std;
//#include <map>
//
//void printMap(const map<int, int>& m)
//{
//	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << it->first << " value:" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(map<int, int>::value_type(3, 30));
//	m[4] = 40;
//
//	// []不建议插入， 用途可以利用key访问到value
//	cout << m[5] << endl;
//	printMap(m);
//
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3); // 按照key删除
//	printMap(m);
//	m.erase(m.begin(), m.end());
//	cout << m.size();
//}
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