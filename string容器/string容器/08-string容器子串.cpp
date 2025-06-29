#include <iostream>
using namespace std;



void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << subStr << endl;

}

void test02()
{
	string email = "zhangsan@sina.com";
	
	int pos = email.find("@");
	string usName = email.substr(0, pos);
	cout << usName << endl;
}

int main()
{
	//test01(); 
	test02();
	system("pause");
	return 0;
}