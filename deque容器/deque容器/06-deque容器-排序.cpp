//#include <iostream>
//using namespace std;
//#include <deque>
//#include <vector>
//#include <algorithm>
//
//void printDeque(const deque<int>& d)
//{
//	for(deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
//
//
//void test01()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	printDeque(d);
//	// ≈≈–Ú
//	sort(d.begin(), d.end());
//	printDeque(d);
//}
//
//
//void printVector(const vector<int>& v)
//{
//	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//void test02()
//{
//	vector<int> v1;
//	v1.push_back(50);
//	v1.push_back(40);
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(60);
//	v1.push_back(30);
//	printVector(v1);
//
//	sort(v1.begin(), v1.end());
//	printVector(v1); 
//
//}
//
//
//
//
//int main()
//{
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}