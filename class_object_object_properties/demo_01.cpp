
#include <iostream>

using namespace std;


// 拷贝函数的调用时机

// 1、使用一个已经创建完毕的对象来初始化一个新对象
// 2、值传递的方式给函数参数传值
// 3、值方式返回局部对象


class Person
{
public:
    Person()
    {
        cout << "Person() 默认构造函数调用" << endl;
    }
    Person(int age)
    {
        cout << "Person(int) 有参构造函数调用" << endl;
        m_age = age;
    }
    Person(const Person &p)
    {
        m_age = p.m_age;
        cout << "Person(const Person&p)拷贝构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "~Person() 析构函数调用" << endl;
    }

    int m_age;
};

void test_01()
{
    Person p1(20);
    Person p2(p1);
    cout << "p2.age:" << p2.m_age << endl;
}


void doWork(Person p)
{

}

void test_02()
{
    Person p;
    doWork(p);
}


Person doWork2()
{
    Person p1;
    cout << &p1 << endl;
    return p1;
}
void test_03()
{
    Person p = doWork2();
    cout << &p << endl;
}

int main()
{
//    test_01();
//    test_02();
    test_03();
    return 0;
}