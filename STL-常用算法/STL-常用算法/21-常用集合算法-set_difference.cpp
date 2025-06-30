//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//
//void myprint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i+5);
//	}
//	
//	vector<int> vTarget;
//	vTarget.resize(max(v1.size(), v2.size()));
//	cout << "v1ºÍv2µÄ²î¼¯" << endl;
//	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), itEnd, myprint);
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
//	system("pause");
//
//	return 0;
//}