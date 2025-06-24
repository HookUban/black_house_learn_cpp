
#include <iostream>
using namespace std;

// 构造函数的调用规则
// 1.创建一个类，C++编译器会给每个类都添加至少3个函数
// 默认构造函数（空实现）
// 析构函数（空实现）
// 拷贝构造（值拷贝）

// 2.如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造函数

class Person
{
public:
//    Person()
//    {
//        cout << "Person()默认构造函数被调用" << endl;
//    }
//    Person(int age)
//    {
//        cout << "Person(int age)构造函数被调用" << endl;
//        m_age = age;
//    }

    Person(const Person &p)
    {
        cout << "Person(const Person &p)拷贝构造函数被调用" << endl;
        m_age = p.m_age;
    }

    ~Person()
    {
        cout << "~Person()析构函数被调用" << endl;
    }

    int m_age;

};

//void test01()
//{
//    Person p;
//    p.m_age = 18;
//
//    Person p2(p);
//    cout << "p2.age:" << p2.m_age << endl;
//
//}

void test02()
{
    Person p(18);

    Person p2(p);
    cout << "p2.age:" << p2.m_age << endl;
}

int main()
{
//    test01();
    test02();
    return 0;
}