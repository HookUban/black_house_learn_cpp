#include <iostream>
using namespace std;
#include <stack>


// ջstack����
void test01()
{
	// �ص㣺�����Ƚ��ȳ����ݽṹ
	stack<int> s;
	// ��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	
	while (!s.empty())
	{
		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
		s.pop();
	}

	cout << "ջ�Ĵ�С " << s.size() << endl;
}


int main()
{

	test01();
	system("pause");
	return 0;

}