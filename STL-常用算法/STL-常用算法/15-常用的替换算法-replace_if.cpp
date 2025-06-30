//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//
//class Greater20
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 30;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//
//	// 将大于等于30 替换为3000
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//	cout << "替换后" << endl;
//	replace_if(v.begin(), v.end(), Greater20(), 3000);
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//}
//
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}