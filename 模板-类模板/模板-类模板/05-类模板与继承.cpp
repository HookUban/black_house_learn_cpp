#include <iostream>
using namespace std;
#include <string>

// ��ģ����̳�
template <class T>
class Base
{
public:
	T m;
};

class Son :public Base<int>
{

};


void test01()
{
	Son s;
	
}


// ��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
template <class T1, class T2>

class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1��������:" << typeid(T1).name() << endl;
		cout << "T2��������:" << typeid(T2).name() << endl;

	}
	T1 obj;
};


void test02()
{
	Son2<int, char> S2;
}

int main()
{
	test02();
	system("pause");
	return 0;
}