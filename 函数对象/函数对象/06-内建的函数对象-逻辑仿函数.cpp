//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//
//void test01()
//{
//	vector < bool> v;
//
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	// 利用逻辑非，将容器v搬运到容器v2中，并执行取反
//	vector<bool> v2;
//	v2.resize(v.size());
//
//	transform(v.begin(), v.end(), v2.begin(), logical_not<int>());
//
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//
//}
//
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}