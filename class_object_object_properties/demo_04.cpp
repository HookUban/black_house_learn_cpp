

#include <iostream>

using namespace std;

// 初始化列表

class Person
{
public:
//    // 传统初始化操作
//    Person(int a, int b, int c)
//    {
//        m_a = a;
//        m_b = b;
//        m_c = c;
//    }
    // 初始化列表初始化属性
    Person(int a, int b, int c):m_a(a), m_b(b), m_c(c)
    {

    }
    int m_a;
    int m_b;
    int m_c;
};

void test01()
{
//    Person p(10, 20, 30);
    Person p(30, 20, 10);
    cout <<"m_a " << p.m_a << endl;
    cout <<"m_b " <<  p.m_b << endl;
    cout << "m_c " << p.m_c << endl;
}


int main()
{
    test01();

    return 0;
}