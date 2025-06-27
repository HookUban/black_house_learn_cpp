#include <iostream>
using namespace std;
#include <string>


void test01()
{
	string str = "hello";
	// ≤Â»Î
	str.insert(1, "111");

	cout << "str:" << str << endl;



}

int main()
{
	test01();
	system("pause");
	return 0;
}