#include <iostream>
using namespace std;
#include <string>


void test01()
{

	string str1 = "ÎÒ";
	str1 += "°®Äã";

	cout << str1 << endl;
	str1 += '!';
	cout << str1 << endl;

	string str2 = "Äã°®ÎÒÂğ";
	str1 += str2;

	cout << str1 << endl;


	string str3 = "I";
	str3.append(" love");
	cout << "str3 = " << str3 << endl;
	str3.append(" you abcdef", 4);

	cout << "str3 = " << str3 << endl;


}


int main()
{
	test01();
	system("pause");
	return 0;
}