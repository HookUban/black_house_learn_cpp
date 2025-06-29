#include <iostream>
using namespace std;
#include <stack>


// 栈stack容器
void test01()
{
	// 特点：符合先进先出数据结构
	stack<int> s;
	// 入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	
	while (!s.empty())
	{
		cout << "栈顶元素为：" << s.top() << endl;
		s.pop();
	}

	cout << "栈的大小 " << s.size() << endl;
}


int main()
{

	test01();
	system("pause");
	return 0;

}